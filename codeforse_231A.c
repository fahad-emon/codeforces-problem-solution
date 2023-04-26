#include<stdio.h>
int main (){
    int n,x,fcount=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){ int count=0;
        for(int i=0;i<3;i++){
            scanf("%d",&x);
            if(x==1){ count++; }
    }   if(count>=2) { fcount++; }
    }
    printf("%d ",fcount);

    return 0;
    }
