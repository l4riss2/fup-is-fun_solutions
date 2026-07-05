#include <stdio.h>

int main(){
    int d;
    scanf("%d",&d);
    char m[d][2];
    for(int i=0;i<d;i++){
        for(int j=0;j<2;j++){
            scanf(" %c",&m[i][j]);
        }
    }
    int cont_c=0;
    int cont_l=0;
    
    for(int i=0;i<d;i++){
        if(m[i][0]=='c'){
            cont_c++;
        }else if(m[i][0]=='l'){
            cont_l++;
        } 
    }
    
    int cont_m=0;
    int cont_t=0;
    
    for(int i=0;i<d;i++){
        if(m[i][1]=='m'){
            cont_m++;
        }else if(m[i][1]=='t'){
            cont_t++;
        }
    }
    
    if(cont_c==cont_l){
        printf("empate\n");
    }else if(cont_c>cont_l){
        printf("c\n");
    }else if(cont_l>cont_c){
        printf("l\n");
    }
    
    if(cont_m==cont_t){
        printf("empate\n");
    }else if(cont_m>cont_t){
        printf("t\n");
    }else if(cont_t>cont_m){
        printf("m\n");
    }
}