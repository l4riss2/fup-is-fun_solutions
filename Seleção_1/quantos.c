#include <stdio.h>

int qnt(int a, int b, int c){
   if(a == b && b == c)
    return 3;

    if(a == b || a == c || b == c)
        return 2;

    return 0;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int r= qnt(a,b,c);
    printf("%d\n",r);
}