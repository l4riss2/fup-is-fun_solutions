#include <stdio.h>

void seguro(int a, int b, int c){
    if(a==0&&b==a&&c==b||a==0&&b==1&&c==1||a==0&&b==a&&c==1){
        printf("you must connect to wifi\n");
    }else{
        if(a==1&&b==0&&c==b||a==1&&c==a&&b==0){
            printf("you need to login first\n");
        }else{
            if(a==1&&b==a&&c==0){
                printf("you must to login as admin\n");
            }else{
                printf("done\n");
            }
        }
    }
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    seguro(a,b,c);
}