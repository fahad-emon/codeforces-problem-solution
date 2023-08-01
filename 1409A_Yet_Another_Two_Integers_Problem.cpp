#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int a, b, c = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << "0" << endl;
            continue;
        }
        long int x = max(a,b)-min(a,b);
        int i =10;
        while (x)
        {
            c+=x/i;x%=i;
            i--;
        }
        cout<<c<<endl;
    }
    return 0;
}