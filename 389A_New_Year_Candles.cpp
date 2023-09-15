#include<bits/stdc++.h>
using namespace std;

int main(){

    int x,y;    cin>>x>>y;
    int h = x,r;
    while (y<=x)
    {
        r = x%y;
        x /= y;
        h+=x;
        x+=r;
    }
    cout<<h<<endl;

    return 0;
}