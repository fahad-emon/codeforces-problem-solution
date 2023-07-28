#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        if(n%2020 == 0 || n%2021==0){
            cout<<"YES"<<endl;
            continue;
        }
        int r = n/2020;
        if(r<1){
            cout<<"NO"<<endl;
        }else{
            int ld = n%2020;
            if(ld>r){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        } 
    }
    
    return 0;
}