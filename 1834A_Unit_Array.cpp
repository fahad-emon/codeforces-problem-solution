#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x;  cin>>x;
        vector <int> arr(x);
        int neg=0,pos=0,ans=0;
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
            if(arr[i] > 0){
                pos++;
            }else{
                neg++;
            }
        }
        
        while (pos<neg)
        {
            neg--;
            pos++;
            ans++;
        } 
        if(neg%2 == 1)  ans++;
        
        cout<<ans<<endl;
           
    }
    return 0;
}