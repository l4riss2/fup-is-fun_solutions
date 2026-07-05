#include <stdio.h>

int main(){
    int x,n;
    scanf("%d %d",&x,&n);
    int vetor[n];
    int cont=0;
    for(int i=0;i<n;i++){
        scanf("%d",&vetor[i]);
        if(vetor[i]==x){
            cont++;
        }
    }
    printf("%d\n",cont);
}