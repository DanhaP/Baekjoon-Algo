#include<iostream>
#include<stack>    // ǥ�� ���̺귯�� stack�� ����ϱ� ����
#include<string>

using namespace std;

int main() {
    int numberOfVPS; // VPS ���ڿ� ���� K ����

    cin >> numberOfVPS;  //K ���� �޴´�. 

    for (int i = 0; i < numberOfVPS; i++) {
        string vps;       // ������ ���� ���ڿ��� ���� ���� ����.
        stack<char> st;

        cin >> vps;       // ���ڿ�(VPS)�� �޴´�. 

        for (int j = 0; j < vps.length(); j++) {
            if (st.empty() || vps[j] == '(') { //������ ��������� ���ڰ��� '('�϶�
                st.push(vps[j]);
            }
            else if (st.top() == '(') {       //������ ������� �ʰ�, ���ڰ��� ')'�϶�, ������ ����� '('���
                st.pop();
            }
        }

        if (st.empty()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    return 0;
}