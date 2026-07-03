#include <stdio.h>
#include <math.h>

int main(){
    char c;
    scanf("%c",&c);
    float n;
    scanf("%f",&n);
    float x=0;
    if(c=='r'){
       x=round(n);
       printf("%.0f\n",x);
    }else if(c=='f'){
        x=floor(n);
        printf("%.0f\n",x);
    }else if(c=='c'){
        x=ceil(n);
        printf("%.0f\n",x);
    }
    
}