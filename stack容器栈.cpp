#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // 向栈中添加元素
    s.push(10);
    s.push(20);
    s.push(30);

    // 打印栈顶元素
    cout << "Top element is: " << s.top() << endl; // 输出: Top element is: 30

    // 移除栈顶元素
    s.pop();
   cout << "After popping, top element is: " << s.top() << endl; // 输出: After popping, top element is: 20

    // 检查栈是否为空
    if (!s.empty()) {
        cout << "Stack is not empty." << endl; // 输出: Stack is not empty.
    }

    // 打印栈的大小
    cout << "Size of stack: " << s.size() << endl; // 输出: Size of stack: 2

    // 继续移除元素
    s.pop();
    s.pop();

    // 检查栈是否为空
    if (s.empty()) {
       cout << "Stack is empty." << endl; // 输出: Stack is empty.
    }

    return 0;
}
