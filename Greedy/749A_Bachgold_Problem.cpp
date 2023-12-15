#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin>>n;
    if (n%2)
    {
        n-=3;
        n/=2;
        cout<<n+1<<endl;
        while (n--)
        {
           cout<<"2"<<" ";
        }cout<<"3"<<endl;

    }else{
        n/=2;
        cout<<n<<endl;
        while (n--)
        {
           cout<<"2"<<" ";
        }cout<<endl;
    }
    

    return 0;
}