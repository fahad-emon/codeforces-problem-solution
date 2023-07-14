#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int arr[2];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 3);
        cout << arr[1] << endl;
    }

    return 0;
}