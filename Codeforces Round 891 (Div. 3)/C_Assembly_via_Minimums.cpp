#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000000;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n * (n - 1) / 2);
        for (int i = 0; i < n * (n - 1) / 2; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int pos = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[pos] << " ";
            pos += n - 1 - i;
        }
        cout << MOD<< endl;
    }

    return 0;
}
