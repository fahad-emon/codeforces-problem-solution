#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n+1];   queue<int>tm_programming,tm_math,tm_pe;
    for (int i = 1; i < n + 1; i++){
        cin>>arr[i];
        if( arr[i] == 1 ) {tm_programming.push(i);}
        else if ( arr[i] == 2 ) {tm_math.push(i);}
        else {tm_pe.push(i);}
    }
    int team = min(tm_programming.size(),min(tm_math.size(),tm_pe.size()));
    cout<<team<<endl;
    while (team--){
        int a = tm_programming.front();tm_programming.pop();
        int b = tm_math.front();tm_math.pop();
        int c = tm_pe.front(); tm_pe.pop(); 
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
      
    return 0;
}