#include <stdio.h>

int main(){
    int c,b,g,m,cont,ce;
    scanf("%d %d %d %d",&c,&b,&g,&m);
    ce=b+g+m;
    cont = ce/c;
    if(ce%c!=0){
        cont++;
    }
    printf("%d\n",cont);
    return 0;
}