#include <stdio.h>

void jogo(char a, char b){
    if(a==b){
        printf("empate\n");
    }else if(a=='R'&&b=='S'||b=='R'&&a=='P'||a=='S'&&b=='P'){
        printf("jog1\n");
    }else if(b=='R'&&a=='S'||a=='R'&&b=='P'||a=='P'&&b=='S'){
        printf("jog2\n");
    }
}

int main(){
    char a,b;
    scanf("%c %c",&a,&b);
    jogo(a,b);
}