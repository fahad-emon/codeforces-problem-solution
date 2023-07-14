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
        int arr[n];
        int c = 0, c1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                c++;
            }
            else
            {
                c1 = max(c, c1);
                c = 0;
            }
        }

        cout << max(c, c1) << endl;
    }

    return 0;
}
