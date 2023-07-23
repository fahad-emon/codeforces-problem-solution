#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int sum1=0,c=0;
    for (int i = n-1; i>=0; i--)
    {
        sum1+=arr[i];c++;
        if (sum1>(sum/2))
        {
            break;
        } 
    }
    cout<<c<<endl;
    
    return 0;
}