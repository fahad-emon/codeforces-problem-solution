#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int c=1,l=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            if(c>l){
                l=c;
            }
            c = 1;
        }else{
            c++;
        }
    }
    if(c>l){
        cout<<c<<endl;
    }else{
        cout<<l<<endl;
    }
    return 0;
}