#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t, people, capacity, count = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> people >> capacity;
        if (capacity - people >= 2)
            count++;
    }

    cout << count;

    return 0;
}