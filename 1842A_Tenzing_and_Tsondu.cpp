#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        long long int ans = 0 ;
        int x=0;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            ans = ans + x;
        }
        for (int i = 0; i < m; i++)
        {
            cin>>x;
            ans = ans - x;
        }
        
        if(ans > 0)
            cout<<"Tsondu"<<endl;
        else if(ans == 0)
            cout<<"Draw"<<endl;
        else
            cout<<"Tenzing"<<endl;
        
    }
    
    return 0;
}