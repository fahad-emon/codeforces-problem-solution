#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;   cin>>t;
    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        int o = 0,t = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>1){ t++;  }
            else{  o++; }
        }
        t = t%2;
        if(t > 0 && o >= 2){
            o-=2;
            t-=1;
        }
        o = o%2;
        if(o || t){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    

    return 0;
}