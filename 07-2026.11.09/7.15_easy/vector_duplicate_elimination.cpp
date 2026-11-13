// Demonstration: Solving 7.15 (Duplicate Elimination) using modern std::vector
// This implementation eliminates fixed-size limitations and contiguous unused zeros.
#include <iostream>
#include <vector>
#include <algorithm> // For std::find
using namespace std;

// Check if a number is within the required range [10, 100]
bool isValid(int val) {
    return (val >= 10 && val <= 100);
}

int main() {
    // 动态数组 vector 分配在堆内存 (Heap) 上
    // 初始容量为 0，不预留多余的 0，随插随扩
    vector<int> uniqueNumbers;

    // 预设 20 个测试样本数据 (包含重复项 20, 10, 50 以及超范围无效项 999)
    int sampleData[20] = {10, 20, 20, 50, 10, 99, 100, 10, 25, 30,
                          40, 50, 60, 70, 80, 80, 90, 95, 999, 20};

    cout << "Reading and validating 20 numbers into std::vector...\n";

    for (int i = 0; i < 20; ++i) {
        int val = sampleData[i]; // 可随时换成 cin >> val

        if (isValid(val)) {
            // std::find 在 vector 中查找 val
            // 如果查到尾部 (end()) 依然没找到，说明它是一个全新的唯一值！
            if (find(uniqueNumbers.begin(), uniqueNumbers.end(), val) == uniqueNumbers.end()) {
                uniqueNumbers.push_back(val); // 自动压入尾部，按需连续扩容
            }
        }
    }

    // 显示最终去重结果
    cout << "\nUnique values stored in vector (Total: " << uniqueNumbers.size() << "):\n";
    for (int num : uniqueNumbers) { // C++11 基于范围的 for 循环 (Range-based for loop)
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
