

/*---------------------------------------------------------------------
Disciplina : Algortimo e Estrutura de Dados 2026S1
Nome       : <<<Guilherme Souza Oliveira>>>
Linguagem  : C
Problema   : https://judge.beecrowd.com/pt/problems/view/<<<1080>>>
Data       : 29/10/2026
Objetivo   : Ler cem valores inteiros, mostrar o maior entre eles e a sua posição.
Dificuldade: <<< criar a condicao dentro do laço de repeticao para atualizar o maior valor >>>
Uso de IA  : <<<nao usei IA>>>
---------------------------------------------------------------------*/
#include <stdio.h>

int main() {
    int v[100], i=0;
    while(i<=99){
        scanf("%d", &v[i]);
        i++;
    }
    i=0;
    int maior=v[0], pos=0;
    while(i<=98){
        if(v[i+1]>maior){
            maior=v[i+1];
            pos=i+1;
        }
        i++;
    }
    printf("%d\n%d\n", maior, pos+1);

    return 0;
}
