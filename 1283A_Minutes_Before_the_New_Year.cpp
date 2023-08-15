#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int h,m;cin>>h>>m;
        int remaining_times = (23-h)*60 + (60-m);
        cout<<remaining_times<<endl;
    }
    return 0;
}