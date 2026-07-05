#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    printf("[ ");
    for(int i=n-1;i>=0;i--){
        if(i==0){
            printf("%d",vetor[i]);
        }else{
           printf("%d ",vetor[i]); 
        }
        
    }
    printf(" ]\n");
}