#include <iostream>
using namespace std;

class sq {
public:
    int M;  // 内存容量
    int N;  // 文章长度
    int* base;
    int front;
    int rear;
    int count;  // 当前队列中的元素个数

    sq() {
        cin >> M >> N;
        Init();
    }
    //初始化
    void Init() {
        base = new int[M];
        front = rear = 0;
        count = 0;  // 初始化计数器
    }
    //入队
    void push(int i) {
        if (full()) {
            cout << "Memory is full!" << endl;
            return;
        }
        base[rear] = i;
        rear = (rear + 1) % M;
        count++;
    }
    //出队
    void pop() {
        if (empty()) {
            cout << "Memory is empty!" << endl;
            return;
        }
        front = (front + 1) % M;
        count--;
    }

    bool empty() {
        return count == 0;
        //队空条件：q.front==q.rear;
    }

    bool full() {
        return count == M;  // 正确判满条件
        //队满条件：(q.rear+1)%maxsize==q.front;
    }

    ~sq() {  // 析构函数释放内存
        delete[] base;
    }
};

int main() {
    sq mem;
    int* words = new int[mem.N];

    // 读取所有单词
    for (int i = 0; i < mem.N; i++) {
        cin >> words[i];
    }

    int lookupCount = 0;  // 查词典次数

    for (int i = 0; i < mem.N; i++) {
        bool found = false;

        // 在内存中搜索当前单词
        for (int k = 0; k < mem.count; k++) {
            int pos = (mem.front + k) % mem.M;
            if (mem.base[pos] == words[i]) {
                found = true;
                break;
            }
        }

        if (!found) {
            lookupCount++;

            if (mem.full()) {
                mem.pop();  // 内存满时移除最早单词
            }
            mem.push(words[i]);  // 将新单词加入内存
        }
    }

    cout << lookupCount << endl;
    delete[] words;
    return 0;
}
