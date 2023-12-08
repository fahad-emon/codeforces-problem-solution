#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int t;  cin>>t;
    while (t--)
    {
        int n,k;    cin>>n>>k;
        int arr1[n],arr2[n];
        for (int i = 0; i < n; i++) cin>>arr1[i];
        for (int i = 0; i < n; i++) cin>>arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+n,greater<int>());
        for (int i = 0; i < k; i++)
        {
            if(arr1[i]<arr2[i]){
                swap(arr1[i],arr2[i]);
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr1[i];
        }
        cout<<sum<<endl;
    }

    return 0;
}
