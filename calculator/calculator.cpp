#include<iostream>
using namespace std;
int main()
{
	int a, b;
	char op;
	cout << "enter a=";
	cin >> a;
	cout << "enter b=";
	cin >> b;
	cout << "enter operation";
	cin >> op;
	switch (op)
	{
	case'+':
		cout << a + b;
		break;
	case'-':
		cout << a - b;
		break;
	case'*':
		cout << a * b;
		break;
	case'/':
		cout << a / b;
		break;
	}
}