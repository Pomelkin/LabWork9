#include "pt4.h"
#include <string>
using namespace std;

void Solve()
{
    Task("String32");
    string s, s0;
    int kolvo = 0;
    pt >> s >> s0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == s0[0])
        {
            int count = 1;
            for (int k = 1; k < s0.size(); k++)
                if (s[i + k] == s0[k]) count += 1;
            if (count == s0.size()) kolvo += 1;
        }
    }
    pt << kolvo;
}
