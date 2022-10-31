#include "pt4.h"
#include <string>
#include <iostream>
using namespace std;

void Solve()
{
    Task("String45");
    setlocale(LC_ALL, "Russian");
    string s;
    int mins = 9999, count = 0;
    pt >> s;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ') count += 1;
        else
        {
            if (count != 0) mins = min(mins, count);
            count = 0;
        }
    }
    pt << mins;
}
