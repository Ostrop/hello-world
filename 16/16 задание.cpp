#include <iostream> 
#include <stack>
#include <queue>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	stack<int> st;
	st.push(9);
	st.push(20);
	st.push(1);
	st.push(22);
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;

	queue<int> qv;
	qv.push(20);
	qv.push(0);
	qv.push(9);
	cout << qv.front() << endl;
	qv.pop();
	cout << qv.front() << endl;
	return 0;
}