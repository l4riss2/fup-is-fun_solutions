#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    printf("[ ");
   
    if(n==10){
        for(int i=0;i<10;i++){
            printf("%d ",i);
        }
        printf("]\n");
    }else{
        
        for(int i=0;i<10;i++){
            if(i==n){
                continue;
            }
            printf("%d ",i);
        }
        printf("ceu ]\n");
    }
    
}