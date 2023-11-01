#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str1, str2, str;
    cin >> str >> str1 >> str2;
    str += str1;
    sort(str.begin(), str.end());
    sort(str2.begin(), str2.end());
    int j = 0;
    for (int i = 0; i < str2.length(); i++)
    {
        if (str2[i] != str[j])
        {
            cout << "NO" << endl;
            return 0;
        }
        j++;
    }
    if (str.length() == j)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}