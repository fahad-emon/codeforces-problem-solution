#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        long long int n;    cin>>n;
        if( n%3 == 0 ){
            cout<<n/3<<" "<<n/3<<endl; continue;
        }else if(n%3 == 1){
            cout<<(n/3)+1<<" "<<n/3<<endl; continue;
        }else{
            cout<<(n/3)<<" "<<(n/3)+1<<endl; continue;
        }
    }
     

    return 0;
}