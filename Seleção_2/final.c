#include <stdio.h>

void passo(float a, float b, float c){
    float media=(a+b)/2;
    if(media<4){
        printf("reprovado\n");
    }else if(media>=7){
        printf("aprovado\n");
    }else if((media+c)/2>=5){
        printf("aprovado na final\n");
    }else{
        printf("reprovado na final\n");
    }

}
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    passo(a,b,c);
}