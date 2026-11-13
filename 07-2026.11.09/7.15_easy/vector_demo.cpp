// Demonstration: How std::vector manages contiguous memory & dynamic reallocation
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. vector 在堆内存 (Heap) 中开辟连续空间
    // size(): 实际存放了多少个元素 (住户数量)
    // capacity(): 当前这片连续地皮总共能住几个人 (房子容量)
    vector<int> vec;

    cout << "=== 动态扩容与搬家过程演示 ===\n";

    for (int i = 1; i <= 9; ++i) {
        size_t oldCap = vec.capacity();
        const int* oldAddress = vec.data(); // 获取当前连续内存的首地址

        vec.push_back(i); // 插入新元素

        size_t newCap = vec.capacity();
        const int* newAddress = vec.data(); // 获取插入后的首地址

        // 如果容量翻倍了，说明在原地挤不下邻居，整体搬家了！
        if (newCap != oldCap) {
            cout << "\n[触发扩容搬家!]\n";
            cout << "旧地址: " << oldAddress << " (旧容量: " << oldCap << ")\n";
            cout << "新地址: " << newAddress << " (新容量: " << newCap << ")\n";
            cout << "搬家原因: 原地右侧可能有邻居，绝不挤压邻居，直接找一片更宽敞的全新空地连续排开！\n";
        }

        cout << "插入: " << i 
             << " | 大小 (size): " << vec.size() 
             << " | 容量 (capacity): " << vec.capacity() 
             << " | 元素首地址: " << vec.data() << endl;
    }

    return 0;
}
