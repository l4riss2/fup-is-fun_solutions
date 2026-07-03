#include <stdio.h>

void multiplo(int n){
    if(n%7==0){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    multiplo(n);
}