#include<iostream>

using namespace std;

int paper[2188][2188];
int minusOne = 0, zero = 0, plusOne = 0;

void numOfPaper(int x, int y, int N) {
	int tmpMinusOne = 0;
	int tmpPlusOne = 0;
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (paper[i][j] == 1) {
				tmpPlusOne++;
			}
			if (paper[i][j] == -1) {
				tmpMinusOne++;
			}
		}
	}
	if (tmpPlusOne == N * N) plusOne++;
	else if (tmpMinusOne == N * N) minusOne++;
	else if (tmpPlusOne == 0 && tmpMinusOne == 0) zero++;
	else {   // �ɰ�=���	
		numOfPaper(x, y, N / 3);  // ���� �� �簢��
		numOfPaper(x, y + N / 3, N / 3); // �߰� �� �簢��
		numOfPaper(x, y + N * 2 / 3, N / 3); // ������ �� �簢��
		numOfPaper(x + N / 3, y, N / 3); // ���� �߰� �簢��
		numOfPaper(x + N / 3, y + N / 3, N / 3); // �߰� �߰� �簢��
		numOfPaper(x + N / 3, y + N * 2 / 3, N / 3); // ������ �߰� �簢��
		numOfPaper(x + N * 2 / 3, y, N / 3); // ���� �Ʒ� �簢��
		numOfPaper(x + N * 2 / 3, y + N / 3, N / 3); // �߰� �Ʒ� �簢��
		numOfPaper(x + N * 2 / 3, y + N * 2 / 3, N / 3); // ������ �Ʒ� �簢��		
	}
	return;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	/*int n;
	char tmp;

	cin >> n;
	cin.get();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin.get(tmp);
			paper[i][j] = tmp - 48;
		}
		cin.get();
	}*/
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}

	numOfPaper(0, 0, n);

	cout << minusOne << "\n";
	cout << zero << "\n";
	cout << plusOne << "\n";

	return 0;
}