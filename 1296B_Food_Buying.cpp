#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;      cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int bl = n;
        int x = 0;
        while (n>9)
        {
            x = (n/10); 
            bl+=x;  
            n = (x+(n%10));
        }
        cout<<bl<<endl;    
    }
    return 0;
}