#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;
    int arr[x];
    int negative = 0, posative = 0;
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            if (posative != 0)
                posative = posative + arr[i];
            else
                negative += arr[i];
        }
        else
            posative += arr[i];
    }
    cout << abs(negative);

    return 0;
}