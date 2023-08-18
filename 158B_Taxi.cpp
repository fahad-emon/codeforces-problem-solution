#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;      cin >> n;
    int cnt[5] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> cnt[0];
        cnt[cnt[0]]++;
    }
    int c = cnt[4];
    int m = min(cnt[3],cnt[1]);c += m;cnt[3] -= m;cnt[1] -= m;c += cnt[3];
    c += cnt[2] / 2;    cnt[2] %= 2;
    if(cnt[2]){
        c++;
        cnt[1]-=2;  cnt[1] = max(0,cnt[1]);
    }
    if(cnt[1]){
        c+=(cnt[1]+3)/4;
    }
    
    cout<<c<<endl;
  
    return 0;
}