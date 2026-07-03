#include <stdio.h>

int resultado(int a, int b, char c){
    int x;
    if(c=='+'){
        x=a+b;
    }else{
        if(c=='-'){
          x=a-b;
        }else{
            if(c=='*'){
                x=a*b;
            }else{
               if(c=='/'){
                   if(b==0){
                       x=0;
                   }else{
                       x=a/b;
                   }
               }else{
                   return 0;
               }
            }
        }
    } 
    return x;
}

int main(){
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf(" %c",&c);
    int r= resultado(a,b,c);
    printf("%d\n",r);
}