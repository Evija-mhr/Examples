#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 创建一个整数队列
    queue<int> q;

    // 向队列中添加元素
    q.push(10);
    q.push(20);
    q.push(30);

    // 打印队列中的元素数量
    cout << "队列中的元素数量: " << q.size() << endl;

    // 打印队首元素
    cout << "队首元素: " << q.front() << endl;

    // 打印队尾元素
    cout << "队尾元素: " << q.back() << endl;

    // 移除队首元素
    q.pop();
    cout << "移除队首元素后，队首元素: " << q.front() << endl;

    // 再次打印队列中的元素数量
    cout << "队列中的元素数量: " << q.size() << endl;

    return 0;
}
