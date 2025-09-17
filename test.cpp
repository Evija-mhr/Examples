#include<iostream>
using namespace std;
struct tree
{

	char x;
	struct tree* left=NULL;
	struct tree* right=NULL;
};
struct tree *head=NULL;


//创建二叉树
void create(tree** T)
{
	char a;
	cin >> a;
	if (a == '*') {
		*T = NULL;
	}
	else {
		*T = new tree;
		(*T)->x = a;
		create(&((*T)->left));
		create(&((*T)->right));
	}
}
//前序遍历
void xian(tree* T)
{
	if (T)
	{
		cout << T->x;
		xian(T->left);
		xian(T->right);
	}
}
//中序遍历
void zhong(tree* T)
{
	if (T)
	{
		xian(T->left);
		cout << T->x;
		xian(T->right);
	}
}
//后续遍历
void hou(tree* T)
{
	if (T)
	{
		xian(T->left);
		xian(T->right);
		cout << T->x;
	}
}

int main() {
	int n;
	cin >> n;
	create(&head);	
	xian(head);
	

}