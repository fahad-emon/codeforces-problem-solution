#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y;    cin>>x>>y;
    int same = min(x,y);
    int dif = (max(x,y) - same ) / 2;
    cout<<same<<" "<<dif<<endl;

    return 0;
}