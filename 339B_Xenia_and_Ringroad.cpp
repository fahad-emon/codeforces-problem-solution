#include<bits/stdc++.h>
using namespace std;


int main(){
    
    long int x, y;    cin>>x>>y;
    long long int ans = 0;    int arr[y+1];
    arr[0] = 1;
    for ( int i = 1; i <= y; i++ ){  cin>>arr[i];  } 
    for ( int i = 1; i <= y; i++ ){
        if( arr[i]>=arr[i-1] ){ ans+= arr[i]-arr[i-1]; }
        else{    ans += arr[i]-arr[i-1] + x;  }
    }

    cout<<ans<<endl;

    return 0;
}