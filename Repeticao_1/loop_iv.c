#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("[ ");
    if(a>b){
        for(int i=a;i>b;i--){
            printf("%d ",i);
        }
    }else{
        for(int i=a;i<b;i++){
            printf("%d ",i);
        }
    }
    printf("]\n");
}