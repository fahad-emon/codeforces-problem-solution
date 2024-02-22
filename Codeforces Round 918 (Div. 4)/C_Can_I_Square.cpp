#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        long long int sum = 0;
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) sum += arr[i];
        
        long long int smallArea = sqrtl(sum); 
        if(smallArea * smallArea == sum){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}
