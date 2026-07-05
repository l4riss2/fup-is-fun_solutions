#include <stdio.h>

int main(){
    int novo,filhos;
    scanf("%d %d",&novo,&filhos);
    for(int i=novo,j=0;j<filhos;i+=2,j++){
        printf("%d\n",i);
    }
}