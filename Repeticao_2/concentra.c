#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("[ ");
    for(int i=a,j=b; i<=b ;i++,j--){
        
           printf("%d %d ",i,j); 
        
    }
    printf("]\n");
}