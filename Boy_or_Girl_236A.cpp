#include <bits/stdc++.h>
using namespace std;
int isduplicate(string x)
{
    int lenth = x.length();
    int count = 0;
    for (int i = 0; i < lenth; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < lenth; j++)
        {
            if (x[j] == x[i])
            {
                flag = false;
                continue;
            }
        }
        if (flag == true)
            count++;
    }
    return count;
}
void boy_or_girl(int y)
{
    if (y % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}
int main()
{
    string st;
    cin >> st;
    // check duplicate
    int count = isduplicate(st);
    // Boy or Girl
    boy_or_girl(count);
}
