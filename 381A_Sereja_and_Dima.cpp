#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int sum1, sum2, x = 0, y = t - 1;
    sum1 = sum2 = 0;

    for (int i = 0; i < t; i++)
    {
        if (arr[x] > arr[y])
        {
            if (i % 2 == 0)
            {
                sum1 += arr[x];
            }
            else
            {
                sum2 += arr[x];
            }
            x++;
        }
        else
        {
            if (i % 2 == 0)
            {
                sum1 += arr[y];
            }
            else
            {
                sum2 += arr[y];
            }
            y--;
        }
    }

    cout << sum1 << " " << sum2 << endl;

    return 0;
}