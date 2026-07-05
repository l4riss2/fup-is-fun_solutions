#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    int soma=0;
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        soma+=vetor[i];
    }
    float media= soma/n;
    printf("%.1f\n",media);
}