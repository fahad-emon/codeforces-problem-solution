#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    int d1,d2,d3;
    cin>>d1>>d2>>d3;
    //h->s1->s2->h
    int a = d1 + d2 +d3;
    //h->s1->h->s2->h
    int b = d1 + d1 + d2 + d2;
    //h->s1->s2-s1->>h
    int c = d1 + d3 + d3 +d1;
    //h->s2->s1-s2->>h
    int d = d2 + d3 + d3 + d2;
    cout<<min(a,min(b,min(c,d)))<<endl; 

    return 0;
}