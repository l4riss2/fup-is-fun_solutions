#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char c;
    scanf(" %c",&c);
    printf("[ ");
    if(n==10){
        for(int i=0;i<10;i++){
            printf("%d%c ",i,c);// ele faz o primeiro
            if(c=='d'){// depois q ele faz o primeiro é que vem pra ca;
                c='e';
            }else{
                c='d';
            }
        
        }
        printf("]\n");
    }else{
        for(int i=0;i<10;i++){
            if(i==n){
                continue;
            }
            printf("%d%c ",i,c);
            if(c=='d'){
                c='e';
            }else{
                c='d';
            }
        }
        printf("ceu ]\n");
    }
}