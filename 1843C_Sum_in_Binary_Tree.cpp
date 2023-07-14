#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        long long int n;  cin>>n;
        long long int ans = n;
        while (n)
        {
            ans+= n/2;
            n/=2;
        }
        cout<<ans<<endl;
        
        
       
    
        
    }
    

    return 0;
}