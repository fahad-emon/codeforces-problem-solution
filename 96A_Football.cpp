#include <bits/stdc++.h>
using namespace std;


int main()
{

    /* freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
     */
    string st;
    cin>>st;
    int c = 1;
    for (int i = 0; i < st.length(); i++)
    {
        
        if(st[i] == st[i+1]){
            c++;
        }else{
            c=1;
        }
        if(c == 7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    
           
      
    return 0;
}
