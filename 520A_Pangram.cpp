#include <bits/stdc++.h>
using namespace std;

int main()
{
    string atoz = "abcdefghijklmnopqrstuvwxyz";
    int n;
    cin >> n;
    string st;
    cin >> st;
    if (n >= 26)
    {
        transform(st.begin(), st.end(), st.begin(), ::tolower);
        int arr[26] = {0};
        for (int i = 0; i < st.length(); i++)
        {
            for (int j = 0; j < atoz.length(); j++)
            {
                if (st[i] == atoz[j])
                {
                    arr[j]++;
                    break;
                }
            }
        }
        int f = 0;
        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 0)
            {
                cout << "NO" << endl;
                f = 1;
                break;
            }
        }

        if (f == 0)
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}