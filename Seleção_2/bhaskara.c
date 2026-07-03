#include <stdio.h>
#include <math.h>

void bhaskara(float a, float b, float c){
    float d=pow(b,2)-(4*a*c);
    float x1 = (-b+sqrt(d))/(2*a);
    float x2 = (-b-sqrt(d))/(2*a);
    if(d<0){
        printf("nao ha raiz real\n");
    }else if(d==0){
        printf("%.2f\n",x1);
    }else if(d>0){
         printf("%.2f\n",x1);
         printf("%.2f\n",x2);
    }
}
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    bhaskara(a,b,c);
}
