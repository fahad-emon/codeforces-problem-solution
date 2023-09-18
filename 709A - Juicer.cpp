#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, b, d;
    cin >> n >> b >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0, w = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > b)
        {
            continue;
        }
        w += arr[i];
        if (w > d)
        {
            ans++;
            w = 0;
        }
    }
    cout << ans << endl;

    return 0;
}
/*
n = the number of oranges
b = the maximum size of the orange that fits in the juicer
d = which determines the condition when the waste section should be emptied.

 */