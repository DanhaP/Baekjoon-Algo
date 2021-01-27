#include<iostream>
#include<stack>    // ǥ�� ���̺귯�� stack�� ����ϱ� ����
#include<cstring>

using namespace std;

int main() {

    while (1) {
        char vps[500];       // ������ ���� ���ڿ��� ���� ���� ����.
        stack<char> st;

        cin.getline(vps, 501);      // ���� �޴´�. 

        if (vps[0] == '.' && strlen(vps) == 1) {
            break;
        }

        for (int j = 0; j < strlen(vps); j++) {
            if (vps[j] == '(' || vps[j] == '[') { //������ ��������� ���ڰ��� '('�϶�
                st.push(vps[j]);
            }
            else if (vps[j] == ')') {       //������ ������� �ʰ�, ���ڰ��� ')'�϶�, ������ ����� '('���
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                }
                else {
                    st.push(vps[j]);
                    break;
                }
            }
            else if (vps[j] == ']') {
                if (!st.empty() && st.top() == '[') {
                    st.pop();
                }
                else {
                    st.push(vps[j]);
                    break;
                }
            }
        }
        if (st.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }

    }
    return 0;
}
