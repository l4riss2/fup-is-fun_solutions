#include <stdio.h>

void e(int n){
    if(!(n==3||n==5)){
        printf("NAO\n");
    }else{
        printf("SIM\n");
    }
}

int main(){
    int x;
    scanf("%d",&x);
    e(x);
}