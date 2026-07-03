#include <stdio.h>

void positivo(int n){
    if(n<0){
        printf("NAO\n");
    }else{
        printf("SIM\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    positivo(n);
}