#include <iostream>
#include <cstring>
using namespace std;
void f(const char* st, int i)
{
    char temp[100];
    strncpy(temp, st, i);
    temp[i] = '\0';
    cout << temp << endl;
    if (i > 1) f(st, i - 1);
}

int main() 
{
    char st[] = "abcd";
    f(st, 4);
    return 0;
}
