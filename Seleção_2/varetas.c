#include <stdio.h>

void existencia(float a, float b, float c){
    if(c>=a+b||b>=a+c||a>=b+c){
        printf("False\n");
    }else{
        printf("True\n");
    }
}

int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    existencia(a,b,c);
}
 