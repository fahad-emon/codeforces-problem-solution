#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, Mihai = 0, Bianca = 0;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            if (arr[i] % 2 == 0)
                Mihai += arr[i];
            else
                Bianca += arr[i];
        }
        if (Mihai > Bianca)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}