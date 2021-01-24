#include<iostream>
#include<stack>    // ǥ�� ���̺귯�� stack�� ����ϱ� ����
#include<string>   // string Ÿ���� ���� ���� ����

using namespace std;

int main() {
    int numberOfCommand; // ��ɾ�� N ����
    stack<int> st; //  int Data Type�� ���� stack ����
    string str_command;    // ��ɾ� push, pop, size, empty, top ���� ��ɾ ���� string ���� ����

    cin >> numberOfCommand;  //��ɾ�� N�� ������ ���� �޴´�. 

    for (int i = 0; i < numberOfCommand; i++) {
        cin >> str_command;       // ������ ���� ��ɾ �޴´�. 

        if (str_command == "push") {  //push �϶� // �ڿ� ���� ���ڸ� st�� �ִ´�.
            int number_stack;
            cin >> number_stack;
            st.push(number_stack);
        }
        else if (str_command == "pop") {    //pop �϶� // st�� �� ���� ���� �̾� ����Ѵ�. 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (str_command == "size") {   // size �϶� // st�� ����� ���
            cout << st.size() << endl;
        }
        else if (str_command == "empty") {    // empty �϶� // st�� ������� �ƴ���, ������� 1, �ʺ������ 0
            if (st.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }
        }
        else if (str_command == "top") {    // top �϶� // st�� �� ���� ���, pop�� �� ���� ���� ����ϰ� st���� ����� �ݸ�, top�� �� ���� ��¸�
            if (!st.empty()) {
                cout << st.top() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}