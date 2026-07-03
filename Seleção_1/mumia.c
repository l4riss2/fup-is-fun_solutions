#include <stdio.h>

struct Dados{
    char nome[51];
    int idade;
}; typedef struct Dados dados;

int main(){
    dados pessoa;
    scanf(" %s",pessoa.nome);
    scanf("%d",&pessoa.idade);
    if(pessoa.idade<12){
        printf("%s eh crianca\n",pessoa.nome);
    }else if(pessoa.idade<18){
         printf("%s eh jovem\n",pessoa.nome);
    }else if(pessoa.idade<65){
         printf("%s eh adulto\n",pessoa.nome);
    }else if(pessoa.idade<1000){
          printf("%s eh idoso\n",pessoa.nome);
    }else{
         printf("%s eh mumia\n",pessoa.nome);
    }
    
}