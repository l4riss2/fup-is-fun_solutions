#include <stdio.h>

int teleferico(int c, int a){
    return (a + c - 2) / (c - 1);
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int r = teleferico(a,b);
    printf("%d\n",r);
}