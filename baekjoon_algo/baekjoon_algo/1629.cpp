#include<iostream>

using namespace std;
long long int a;
long long int b;
int c;

long long int APowerB(long long int a, long long int b) {
	if (b == 0) // �ŵ������� 0�϶��� ������ 1
		return 1;
	else if (b == 1)  // �ŵ������� 1�϶��� ����ؼ� a ��ȯ
		return a;
	if (b % 2 > 0)   // �ŵ������� 2�� ���� ������.
		return APowerB(a, b - 1) * a;
	long long int binarySquaring = APowerB(a, b / 2);
	binarySquaring %= c;

	return (binarySquaring * binarySquaring) % c;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> c;

	cout << APowerB(a, b) % c;


	return 0;
}