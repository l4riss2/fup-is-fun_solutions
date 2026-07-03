#include <stdio.h>

void entrega(float a, float b, float c, float h, float l){
    float j= h*l;
    if(a*c<=j||a*b<=j){
        printf("S\n");
    }else{
        printf("N\n");
    }
}

int main(){
    float a,b,c,h,l;
    scanf("%f %f %f",&a,&b,&c);
    scanf("%f %f",&h,&l);
    entrega(a,b,c,h,l);
}