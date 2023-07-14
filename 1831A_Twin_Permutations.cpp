#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    //input number of tast case
    cin>>t;
    while (t--)
    {
        int x;
        //number of element 
        cin>>x;
        int a[x];
        //input element
        for (int i = 0; i < x; i++)
        {
            cin>>a[i];
            int ans = (x+1)-a[i];
            cout<<ans<<" ";

        }
        
        
        
        
    cout<<endl;
    }
    
    
    return 0;
}
/* 
5
5
a = 1 2 4 5 3
b = 1 2 4 3 5
i = 1 2 3 4 5
2
1 2
2 1
1
1
3
a = 3 2 1
b = 1 2 3
4
a = 1 4 3 2
b = 1 2 3 4

 */