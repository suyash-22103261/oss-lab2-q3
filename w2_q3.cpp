#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> s1;
    string s;
    cout << "Enter a line of text: ";
    getline(cin, s);
    string t;
    for (char c : s)
    {
        if (c == ' ' || c == '\n')
        {
            if (!t.empty())
            {
                if (s1.find(t) != s1.end())
                {
                    s1[t]++;
                }
                else
                {
                    s1[t] = 1;
                }
                t.clear();
            }
        }
        else
        {
            t += c;
        }
    }

    if (!t.empty())
    {
        if (s1.find(t) != s1.end())
        {
            s1[t]++;
        }
        else
        {
            s1[t] = 1;
        }
    }
    for (const auto &pair : s1)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
