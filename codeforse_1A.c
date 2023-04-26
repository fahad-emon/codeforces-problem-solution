#include<stdio.h>
int main (){
    long long int n,m,a,lenth,bre;
    scanf("%lld%lld%lld",&n,&m,&a);
    lenth=n/a;
    if(n%a!=0){
        lenth++;
    }
    bre=m/a;
    if(m%a != 0){
        bre++;
    }
    printf("%lld",lenth*bre);

    return 0;
}
