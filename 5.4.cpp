#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// 定义学生类
class Student 
{
public:
    int number;  // 学号
    int score;  // 成绩
};
// 比较函数，找出成绩最高的学生的学号
void max(Student* students, int size) 
{
    if (size <= 0)
    {
        cerr << "输入的学生数量不正确" << endl;
        return;
    }
    Student* maxStudent = &students[0];
    for (int i = 1; i < size; ++i)
    {
        if (students[i].score > maxStudent->score)
        {
            maxStudent = &students[i];
        }
    }
    cout << "成绩最高的学生学号是: " << maxStudent->number<< endl;
}
int main()
{
    int numStudents;
    cout << "请输入学生的数量: ";
    cin >> numStudents;
    Student* students = new Student[numStudents];
    // 循环输入每个学生的学号和成绩
    for (int i = 0; i < numStudents; ++i)
    {
        cout << "请输入第 " << i + 1 << " 个学生的学号: ";
        cin >> students[i].number;
        cout << "请输入第 " << i + 1 << " 个学生的成绩: ";
        cin >> students[i].score;
    }
    max(students, numStudents);
    // 释放动态分配的内存
    delete[] students;
    return 0;
}