#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n * 2];
        int e = 0, o = 0;
        for (int i = 0; i < n * 2; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 != 0)
            {
                o++;
            }
            else
            {
                e++;
            }
        }
        if (e != o)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}