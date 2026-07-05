#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a;
    scanf("%d",&a);
    char vetor[a];
    
    for(int i=0;i<a;i++){
        scanf(" %c",&vetor[i]);
    }
    
    int soma=0;
    
    for(int i=0;i<a;i++){
        if(vetor[i]=='v'){
            soma+=4;
            
        }
        if(vetor[i]=='g'){
            soma+=2;
        }
        if(vetor[i]=='c'){
            soma+=4;
        }
    }
    
    printf("%d\n",soma);
    if(soma-n==0&&soma-m!=0){
        printf("Chico Bento\n");
    }else if(soma-m==0&&soma-n!=0){
        printf("Cebolinha\n");
    }else if(n==m){
        printf("empate\n");
    }else if(soma-n==soma-m||n-soma==m-soma||n-soma==soma-m||m-soma==soma-n){
        printf("empate\n");
    }else if(soma-n>soma-m){
        printf("Chico Bento\n");
    }else if(soma-m>soma-n){
        printf("Cebolinha\n");
    }
}