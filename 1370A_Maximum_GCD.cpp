#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;      cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        int d = n/2;
        cout<<__gcd(d,d*2)<<endl;
    }
    
    return 0;
}