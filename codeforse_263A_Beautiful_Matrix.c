#include<stdio.h>
#include<math.h>
int main(){
    int matrix[6][6],r,c;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
        scanf("%d",&matrix[i][j]);
        if (matrix[i][j]==1){
            r=abs(3-i);
            c=abs(3-j);
            printf("%d",r+c);
        }
    }
    }
    return 0;
}
