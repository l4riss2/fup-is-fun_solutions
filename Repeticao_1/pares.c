#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int soma=0;
    if(a>b){
        printf("invalido\n");
    }else{
        for(int i=a;i<b;i++){
            if(i%2==0){
                soma+=i;
            }
        } 
        if(b%2==0){
            soma+=b;
        }
        printf("%d\n",soma);
    }
   
}