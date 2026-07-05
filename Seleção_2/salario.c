#include <stdio.h>

float salario(float n){
    if(n<=1000){
        n=(1.2)*n;
    }else if(n>1000&&n<=1500){
        n=(1.15)*n;
    }else if(n>1500&&n<=2000){
        n=(1.1)*n;
    }else if(n>2000){
        n=(1.05)*n;
    }
    return n;
}

int main(){
    float s;
    scanf("%f",&s);
    float x = salario(s);
    printf("%.2f\n",x);
}