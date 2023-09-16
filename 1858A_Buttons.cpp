#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;  cin>>t;
    while (t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if( a+ c%2 > b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    

    return 0;
}