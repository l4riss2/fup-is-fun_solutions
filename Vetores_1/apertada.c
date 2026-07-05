#include <stdio.h>

int main(){
    int n=5;
    int vetor[n];
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    int menor=vetor[0];
    for(int i=1;i<n;i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
    }
    printf("%d\n",menor);
}