#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;
    int upper_count = 0, lower_count = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (isupper(st[i]))
        {
            upper_count++;
        }
        else
            lower_count++;
    }
    if (upper_count > lower_count)
    {
        transform(st.begin(), st.end(), st.begin(), ::toupper);
        cout << st << endl;
    }
    else
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        cout << st << endl;
    }

    return 0;
}