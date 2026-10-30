# 5.15 源码剖析与修改指南 (GradeBook Modification)

本文档对照原书 **Fig. 5.9 ~ Fig. 5.11** 源码进行逐模块剖析，帮助你在动手修改前彻底搞懂原代码的设计、存在的不足以及我们要做的改动。

---

## 一、原书代码结构（3个文件）

原书采用了标准的 C++ 类分离设计：
1. [GradeBook.h](file:///d:/Develop/learn_cpp/cpp_assignments/05-2026.10.29/5.15_original_reference/GradeBook.h)：**类的头文件（接口声明）**
   - 声明了私有成员变量：课程名称 `courseName`，以及 5 个整型计数器 `aCount`, `bCount`, `cCount`, `dCount`, `fCount`；
   - 声明了公有接口：构造函数、Getter/Setter、`displayMessage()`、`inputGrades()`、`displayGradeReport()`。
2. [GradeBook.cpp](file:///d:/Develop/learn_cpp/cpp_assignments/05-2026.10.29/5.15_original_reference/GradeBook.cpp)：**类的实现文件（函数逻辑）**
   - 构造函数：把 5 个计数器手动清零为 0；
   - `inputGrades()`：核心函数，使用 `while ((grade = cin.get()) != EOF)` 循环配合 `switch (grade)` 语句逐个字符读取成绩并做计数；
   - `displayGradeReport()`：打印各等级学生人数统计结果。
3. [fig05_11.cpp](file:///d:/Develop/learn_cpp/cpp_assignments/05-2026.10.29/5.15_original_reference/fig05_11.cpp)：**主驱动程序（测试入口）**
   - 实例化 `GradeBook` 对象，依次调用消息显示、成绩录入、报表输出。

---

## 二、原书源码实现了什么？

1. **多分支选择（switch-case）**：
   - 针对 `'A'` 和 `'a'` 采用 case 穿透（fall-through），合并统计大写和小写；
   - 针对换行符 `'\n'`、制表符 `'\t'`、空格 `' '` 显式 break 忽略，避免统计被空白符干扰；
   - 针对其他非法字符（default 分支）打印提示并忽略。
2. **哨兵控制与 EOF 机制**：
   - 采用 `cin.get() != EOF` 实现任意长度输入，当用户输入 EOF（Windows 控制台下输入 `Ctrl+Z` 并回车）时退出循环。

---

## 三、原书源码存在什么不足？（与当前题目要求对比）

1. **缺少绩点计算与 GPA 输出能力**：
   - 目前只单纯统计了“拿 A 的有几人、拿 B 的有几人……”，完全没有算总积分和平均学分绩点（GPA）。
2. **缺乏除以零防御**：
   - 如果用户一上来就直接按 EOF（没有录入任何成绩），原版虽然能打印全 0，但如果要算 GPA，分母总人数为 0，会导致**除以零异常（Zero Division）**。
3. **输出未格式化**：
   - 题目要求的 GPA 是浮点数（通常需要保留两位小数，如 `3.25`），原版代码中尚未引入 `<iomanip>` 的 `fixed` 和 `setprecision`。

---

## 四、我们要改什么？（重构方案）

题目要求：**计算 grade-point average (GPA)，其中 A=4分, B=3分, C=2分, D=1分, F=0分**。

### 1. 修改 `GradeBook.h`
- 决定是否增加一个计算 GPA 的成员函数（如 `double calculateGPA() const;`），或者在 `displayGradeReport()` 内直接计算。

### 2. 修改 `GradeBook.cpp`
- **总人数与总分数学计算**：
  - 总成绩数：`totalGrades = aCount + bCount + cCount + dCount + fCount;`
  - 总积分：`totalPoints = 4 * aCount + 3 * bCount + 2 * cCount + 1 * dCount + 0 * fCount;`
- **除以零防御**：
  - 如果 `totalGrades != 0`：
    - 计算 `gpa = static_cast<double>(totalPoints) / totalGrades;`（必须用 static_cast 防整除截断）
    - 打印 `The grade-point average is: ...`
  - 否则（`totalGrades == 0`）：
    - 打印 `No grades were entered.`
- **头文件引入**：在 cpp 中增加 `#include <iomanip>` 用于控制小数位数。

### 3. 修改 `main.cpp`
- 保留调用链 `displayMessage()` -> `inputGrades()` -> `displayGradeReport()`。
