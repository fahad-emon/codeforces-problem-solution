#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  cin>>n;
    int arr[n+1];
    for (int i = 1; i <= n; i++){
        cin>>arr[i];
    }
    if(n==2){
        if(arr[1]>=arr[2]){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl; 
        }
         return 0;
    }
    int mx_pos = 1,mn_pos = 1;
    for (int i = 2; i <= n; i++){
        if (arr[i]>arr[mx_pos]){
           mx_pos = i;
        }
        if (arr[i] <= arr[mn_pos]){
            mn_pos = i;
        }
    }
    if(mx_pos>mn_pos){
        cout<<((mx_pos-1)+(n-mn_pos))-1<<endl;
    }else{
        cout<<((mx_pos-1)+(n-mn_pos))<<endl;
    }
    
    

    return 0;
}