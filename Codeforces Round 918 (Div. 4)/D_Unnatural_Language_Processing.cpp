#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        int n;  cin>>n;
        string word;    cin>>word;
        string str;
        int idx = n - 1;
        while (idx >= 0){
            if (word[idx] == 'a' || word[idx] == 'e')
            {
                str += word[idx]; idx--;
                str += word[idx]; idx--;
            }else{
                str += word[idx]; idx--;
                str += word[idx]; idx--;
                str += word[idx]; idx--;
            }
            str += '.';
        }
        str.pop_back();
        reverse(str.begin(),str.end());
        cout<<str<<"\n";
    }

    return 0;
}