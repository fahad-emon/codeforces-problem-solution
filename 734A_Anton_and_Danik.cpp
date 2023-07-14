#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     */
    int n, a = 0, d = 0;
    cin >> n;
    char c[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        if (c[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (d > a)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}
