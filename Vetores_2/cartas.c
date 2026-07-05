#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for(int i=0; i<n; i++){
        scanf("%d",&vetor[i]);
    }
    
    printf("[");
    
    for(int i=0;i<n;i++){
        if(i==n-1){
            if(vetor[i]==1){
                printf("A");
            }else if(vetor[i]==11){
                printf("J");
            }else if(vetor[i]==12){
                printf("Q");
            }else if(vetor[i]==13){
                printf("K");
            }else{
                printf("%d",vetor[i]);
            }
        }else{
            if(vetor[i]==1){
                printf("A, ");
            }else if(vetor[i]==11){
                printf("J, ");
            }else if(vetor[i]==12){
                printf("Q, ");
            }else if(vetor[i]==13){
                printf("K, ");
            }else{
                printf("%d, ",vetor[i]);
            }
        }
    }
    printf("]\n");
}