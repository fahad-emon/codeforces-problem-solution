#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n;cin>>n;
    if(n>=0){
        cout<<n<<endl;
        return 0;
    }
    long int x = n/10;
    long int y = (((n/100)*10)+(n%10));
    if(x ==0 || y == 0 ){
        cout<<"0"<<endl;
        return 0;
    }
    if(x<y){
        cout<<y<<endl;
    }else{
        cout<<x<<endl;
    }
    
    return 0;
}