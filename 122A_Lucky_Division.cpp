#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;  cin>>n;
    // skip 44 ,77 , 444, 447 divide by 4, 7 
    if(n%4 == 0 || n%7 == 0 || n%47 == 0 || n%74 == 0 ||n%477 == 0 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}
