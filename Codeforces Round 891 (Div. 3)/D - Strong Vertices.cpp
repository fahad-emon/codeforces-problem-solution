#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int a[N], b[N];
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            mx = max(a[i] - b[i], mx);
        }
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            c += (a[i] - b[i] == mx);
        }
        cout << c << endl;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] == mx)
            {
                cout << i + 1 << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}