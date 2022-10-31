#include "pt4.h"
#include <iostream>
#include <string>
using namespace std;

void Solve()
{
    Task("String15");
    setlocale(LC_ALL, "Russian");
    string s;
    int count = 0;
    char eng[] = "abcdefghijklmnopqrstuvwxyz";
    char ru[] = "aáâãäå¸æçûèéêëìíîïðñòóôõö÷øùüúýþÿ";
    pt >> s;
    for (int i = 0; s[i]; i++)
    {
        for (int h = 0; h <= 26; h++)
        {
            if (s[i] == eng[h]) { count += 1; break; }
        }
        for (int b = 0; b <= 33; b++)
        {
            if (s[i] == ru[b]) { count +=1; break; }
        }
    }
    pt << count;
}
