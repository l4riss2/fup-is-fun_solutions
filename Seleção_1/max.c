#include <stdio.h>

void maior(int a, int b){
    if(a==b){
        printf("%d\n",a);
    }else{
        if(a>b){
            printf("%d\n",a);
        }else{
            printf("%d\n",b);
        }
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    maior(a,b);
}
  