#include<iostream>

using namespace std;

int paper[129][129];
int whitePaper = 0;
int bluePaper = 0;

void paperColorDecisionByDivdeConquer(int x, int y, int N) {
	int tempBlueCount = 0; // 
	//2�� for������ 0���� 1���� Ž��
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (paper[i][j]) {  //�Ķ����϶�
				tempBlueCount++;  // �Ķ��� ���� count
			}
		}
	}
	if (!tempBlueCount) whitePaper++; // �Ͼ��
	else if (tempBlueCount == N * N) bluePaper++; // �Ķ���
	else {   // �ɰ�
		paperColorDecisionByDivdeConquer(x, y, N / 2);  // ���� �� �簢��
		paperColorDecisionByDivdeConquer(x, y + N / 2, N / 2); // ������ �� �簢��
		paperColorDecisionByDivdeConquer(x + N / 2, y, N / 2); // ���� �Ʒ� �簢��
		paperColorDecisionByDivdeConquer(x + N / 2, y + N / 2, N / 2); // ������ �Ʒ� �簢��
	}
	return;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> paper[i][j];
		}
	}
	paperColorDecisionByDivdeConquer(0, 0, n);

	cout << whitePaper << "\n";
	cout << bluePaper;
	return 0;
}