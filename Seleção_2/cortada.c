#include <stdio.h>

int nota(float b, float t){
    float area= 160*70;
    float ac= (((t+b)*70)/2);
    float r= area-ac;
    if(ac>((160*70)/2)&&r<ac){
        return 1;
    }else if(ac==((160*70)/2)){
        return 0;
    }else if(r>ac){
        return 2;
    }
}

int main(){
    float b,t;
    scanf("%f %f",&b,&t);
    int resultado= nota(b,t);
    printf("%d\n",resultado);
}
