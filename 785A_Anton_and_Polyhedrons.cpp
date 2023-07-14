#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); */
    int t;cin>>t;
    string st;
    int ans=0;
    while (t--)
    {
        cin>>st;
        if(st[0]=='T'){
            ans+=4;
        }else if(st[0]=='C'){
            ans+=6;
        }else if(st[0]=='O'){
            ans+=8;
        }else if(st[0]=='D'){
            ans+=12;
        }else if(st[0]=='I'){
            ans+=20;
        }
    }
    cout<<ans<<endl;
    return 0;
}
/* 

    Tetrahedron. Tetrahedron has 4 triangular faces.
    Cube. Cube has 6 square faces.
    Octahedron. Octahedron has 8 triangular faces.
    Dodecahedron. Dodecahedron has 12 pentagonal faces.
    Icosahedron. Icosahedron has 20 triangular faces. 
 */