#include <iostream>
using namespace std;

struct  sq{
	int data;
	struct sq* next;
	
};
struct link
{
	sq *front;
	sq *rear;
	int length;
};
void init(link &q)
{
	q.front =q.rear = new sq;
	q.front->next = NULL;
	q.length = 0;
}
void push(link &q,int e)
{
	sq *p;
	p = new sq;
	p->data = e;
	p->next = NULL;
	q.rear->next = p;  //注意q.front位置不存内容，在下一个节点开始存放一个数据
	q.rear = p;
	q.length++;
}
void pop(link& q)
{
	if (q.front == q.rear)
	{
		cout << "队空";
	}
	else
	{
		sq *p;
		p = q.front->next;
		q.front->next = p->next;
		delete p;
		q.length--;
	}
	

}
int main() {
	link q;
	init(q);
	sq *p;
	int num;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		push(q,num);
		
	}
	p = q.front->next;
	for (int j = 0; j < q.length; j++)
	{
		if (p)
		{
			cout << p->data << " ";
			p = p->next;
		}

	}
	cout <<endl<<q.length <<endl;
	pop(q);
	p = q.front->next;
	for (int j = 0; j < q.length; j++)
	{
		if (p)
		{
			cout << p->data << " ";
			p = p->next;
		}

	}
	cout << endl << q.length << endl;
}
