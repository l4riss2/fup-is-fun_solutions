#include <stdio.h>


void meio(int a, int b, int c){
    int vetor[3]={a,b,c};
    int maior=vetor[0];
    int menor=vetor[2];
    for(int i=0; i<3;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    for(int i=0;i<3;i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
    }
    for(int i=0; i<3;i++){
        if(vetor[i]!=maior&&vetor[i]!=menor){
            printf("%d\n",vetor[i]);
        }
    }
}
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    meio(a,b,c);
}