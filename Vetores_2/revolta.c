#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    int soma_i=0;
    int soma_p=0;
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]%2==0){
            soma_p+=vetor[i];
        }else{
            soma_i+=vetor[i];
        }
    }
    if(soma_p==soma_i){
        printf("empate\n");
    }else if(soma_p>soma_i){
        printf("rebeldes\n");
    }else{
        printf("soldados\n");
    }
    
}