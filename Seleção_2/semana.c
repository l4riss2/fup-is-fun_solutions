#include <stdio.h>

void trabalho(int a, int b){
    if(a==7&&b>11||a==7&&b<8){
        printf("NAO\n");
    }else if(a==7&&b<11||a==7&&b>8){
        printf("SIM\n");
    }else if(a>1&&a<7){
        if((b<=11&&b>=8)||(b>=14&&b<=17)){
            printf("SIM\n");
        }else{
            printf("NAO\n");
        }
    }else{
        printf("NAO\n");
    }
}

int main(){
    int dia;
    int hora;
    scanf("%d",&dia);
    scanf("%d",&hora);
    trabalho(dia,hora);
    return 0;
    
}