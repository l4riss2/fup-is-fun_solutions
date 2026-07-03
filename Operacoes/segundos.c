#include <stdio.h>

void horario(int seg){
    int h=seg/3600;
    int min=((seg%3600)/60);
    int s=(seg%3600)%60;
    printf("%d:%d:%d\n",h,min,s);
}

int main(){
    int s;
    scanf("%d",&s);
    horario(s);
    return 0;
}