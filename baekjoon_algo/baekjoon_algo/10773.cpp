#include<iostream>
#include<stack>    // ǥ�� ���̺귯�� stack�� ����ϱ� ����

using namespace std;

int main() {
    int numberOfRecord; // ��ɾ�� N ����
    stack<int> st; //  int Data Type�� ���� stack ����
    int record;
    int sum = 0;
    int stack_size = 0;

    cin >> numberOfRecord;  //��ɾ�� N�� ������ ���� �޴´�. 

    for (int i = 0; i < numberOfRecord; i++) {
        cin >> record;       // ������ ���� ��ɾ �޴´�. 

        if (record == 0) {  //push �϶� // �ڿ� ���� ���ڸ� st�� �ִ´�.
            st.pop();
        }
        else {    //pop �϶� // st�� �� ���� ���� �̾� ����Ѵ�. 
            st.push(record);
        }

    }

    stack_size = st.size();  // stack�� size�� �����Ѵ�. 

    for (int j = 0; j < stack_size; j++) {   // stack�� ������ ��ŭ �ݺ�. st.size()�� ���� ����. �ݺ����� ���鼭 stack�� ����� ���ϱ� ����.
        sum += st.top();     // ���� ���� ���� sum�� ���Ѵ�. 
        st.pop();            // ���ÿ��� ���� ���� ���� �����. 
    }

    cout << sum << endl;

    return 0;
}