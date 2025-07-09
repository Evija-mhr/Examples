#include <iostream>
using namespace std;
struct MyStruct
{
	string name;
	int age;

};
struct sqlist
{
	MyStruct* elem;
	int length;
};
int main()
{
	sqlist L;
	
	L.length = 0;
	int n;
	cin >> n;
	L.elem = new MyStruct[n];
	L.length = n;
	for (int i = 0; i < n; i++)
	{
		L.elem[i].age = 0;
		L.elem[i].name = 'NULL';
	}
	for (int j = 0; j < n; j++)
	{
		cout << L.elem[j].name << " " << L.elem[j].age << endl;
	}
	
	return 0;
}