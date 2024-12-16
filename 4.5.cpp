#include<iostream>
#include<cstring>
using namespace std;
int indexOf(const char s1[], const char s2[])
{

    int s1len = strlen(s1);
    int s2Len = strlen(s2);
    for (int i = 0; i <= s2Len - s1Len; i++)
    {
        int j;
        for (j = 0; j < s1Len; j++) 
        {
            if (s2[i + j] != s1[j]) 
            {
                break;
            }
        }
        if (j == s1Len)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];
    cout << "请输入第一个字符串：";
    cin.getline(s1, MAX_LENGTH);
    cout << "请输入第二个字符串：";
    cin.getline(s2, MAX_LENGTH);
    int result = indexOf(s1, s2);
    if (result != -1)
    {
        cout << "s1在s2中的下标是：" << result << endl;
    }
    else
    {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}