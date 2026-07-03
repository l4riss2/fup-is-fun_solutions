#include <stdio.h>

int main(){
    int q1,q2,q3;
    float v1,v2,v3;
    float d;
    float t;
    scanf("%d %d %d",&q1,&q2,&q3);
    scanf("%f %f %f",&v1,&v2,&v3);
    scanf("%f",&d);
    float compra=q1*v1+q2*v2+q3*v3;
    t=d-compra;
    printf("%.2f\n",t);
    
}