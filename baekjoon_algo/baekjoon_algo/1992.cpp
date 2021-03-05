#include<iostream>

using namespace std;

int paper[64][64];

void quadTree(int x, int y, int N) {
	int blackCount = 0;
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (paper[i][j]) {
				blackCount++;
			}
		}
	}
	if (!blackCount) cout << "0"; // �Ͼ��
	else if (blackCount == N * N) cout << "1"; // ������
	else {   // �ɰ�=���
		cout << "("; // �ɰ��鼭 (�� �����ش�.
		quadTree(x, y, N / 2);  // ���� �� �簢��
		quadTree(x, y + N / 2, N / 2); // ������ �� �簢��
		quadTree(x + N / 2, y, N / 2); // ���� �Ʒ� �簢��
		quadTree(x + N / 2, y + N / 2, N / 2); // ������ �Ʒ� �簢��
		cout << ")"; // ��Ͱ� ������ )�� �ݾ��ش�.
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	char tmp;

	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin.get(tmp);
			paper[i][j] = tmp - 48;
		}
		cin.get();
	}
	/*int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}*/

	quadTree(0, 0, n);

	return 0;
}