#include <stdio.h>

int jogo(int p, int d1, int d2){
    int g=0;
    if(p==0&&(d1+d2)%2==0||p==1&&(d1+d2)%2!=0){
        g=0;
    }else{
        if(p==1&&(d1+d2)%2==0||p==0&&(d1+d2)%2!=0){
           g=1; 
        }
        
    }
    return g;
}

int main(){
    int n,d1,d2;
    scanf("%d %d %d",&n,&d1,&d2);
    int r= jogo(n, d1, d2);
    printf("%d\n",r);
}