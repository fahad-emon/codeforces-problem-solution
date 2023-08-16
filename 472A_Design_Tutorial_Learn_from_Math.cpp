#include<bits/stdc++.h>
using namespace std;
bool iscomposite(long int x){
    for (int i = 2; i <= x/2; i++)
    {
        if(x%i == 0){
            return true;
        }
    }
    return false;    
}
int main(){
    long int n; cin>>n;
    int i = 4;
    while (i <= (n/2))
    {
        // check composite numbers or not
        if(iscomposite(i) == true && iscomposite(n-i) == true){
            cout<<i<<" "<<(n-i)<<endl;
            break;
        }
        i++;
    }
    
    
    return 0;
}