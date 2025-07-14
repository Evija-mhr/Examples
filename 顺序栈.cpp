#include <iostream>
using namespace std;



struct stack
{
	int  *base;
	int  *top;
	int size;
	//int data;
	void init(stack& s,int size)
	{
		s.base = new int[size];
		if (!s.base)
		{
			exit(OVERFLOW);
		}
		s.top = s.base;
		s.size = size;
	}
	void push(stack& s, int e)
	{
		if (s.top - s.base == s.size)
		{
			cout << "栈满";
			exit(OVERFLOW);
		}
		else {
			*s.top++= e;
		}
	}
	int pop(stack& s, int e)
	{
		if (s.base==s.top)
		{
			cout << "栈空";
			exit;
		}
		else
		{
			e = *--s.top;
			return e;
		}
		

	}
};



int main()
{
	int num,q=0;
	stack sq;
	sq.init(sq,5);
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		sq.push(sq,num);
	}
	for (int j = 0; j < 5; j++)
	{
		q=sq.pop(sq, q);
		cout << q<<" ";
	}
}
