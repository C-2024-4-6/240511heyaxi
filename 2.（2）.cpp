#include <iostream>
using namespace std;
void swap(int* a, int* b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int* arr, int size) 
{
    for (int i = 0; i < size - 1; i++)
     {
        for (int j = 0; j < size - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
             {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
 {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    int* arr = new int[size];
    cout << "请依次输入数组元素: ";
    for (int i = 0; i < size; i++)
     {
        cin >> arr[i];
    }
    // 调用冒泡排序函数对动态数组进行排序
    bubbleSort(arr, size);
    // 使用指针方式输出数组元素
    cout << "排序后的数组元素为: ";
    for (int i = 0; i < size; i++)
     {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    // 释放动态数组内存，使用delete [] 来释放数组内存，防止内存泄漏
    delete[] arr;

    return 0;
}
