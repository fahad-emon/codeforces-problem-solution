#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
    long int n;
    cin >> n;
    vector<long int> v;
    int i = 0;
    while (n)
    {
        long int x = n % 10;
        if (x != 0)
        {
            v.push_back(x * pow(10, i));
        }i++;
        n /= 10;   
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    /*  freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout); */
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}