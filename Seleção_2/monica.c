#include <stdio.h>

int main(){
    int a,b,c,m;
    scanf("%d %d %d",&m,&a,&b);
    c=m-a-b;
    int vetor[3]={a,b,c};
    int maior=vetor[0];
    for(int i=0;i<3;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    printf("%d\n",maior);
}