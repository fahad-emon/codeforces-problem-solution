#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        long int n; cin>>n;
        if (n%4)
        {
            cout<<"NO"<<endl; continue;
        }
        vector<int>v(n);
        int sum = 0;
        for (int i = 0; i < n/2; i++)
        {
            v[i] = 2 * i + 2;
            sum += v[i];
        }
        for (int i = 0; i < n/2 - 1; i++)
        {
            v[i+n/2] = (2 * i) + 1;
            sum -= v[i+n/2];
        }   
        v[n-1] = sum;
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
        {
           cout<<v[i]<<" ";
        }cout<<endl;
    } 
    
    return 0;
}