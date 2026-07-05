#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i%3!=0&&i%5!=0){
            printf("%d\n",i);
        }else if(i%3==0&&i%5!=0){
            printf("zig\n");
        }else if(i%5==0&&i%3!=0){
            printf("zag\n");
        }else if(i%3==0&&i%5==0){
            printf("zigzag\n");
        }
        
    }
            
}