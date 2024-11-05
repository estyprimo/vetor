#include<stdio.h>
/* A primeira linha contém um inteiro N (1 ≤ N ≤ 100) indicando o número total de figurinhas e espaços no álbum. 
A segunda linha contém um inteiro M (1 ≤ M ≤ 300) indicando o número de figurinhas já compradas.
Cada uma das M linhas seguintes contém um número inteiro X (1 ≤ X ≤ N) indicando uma figurinha já comprada.*/
int main(){

    int qtd_fig, qtd_comp;

    scanf("%d %d", &qtd_fig, &qtd_comp);
    int comp[qtd_fig+1];
    for(int i = 0; i <= qtd_fig; i++){
        comp[i] = 0;
    }

    for(int i = 0; i < qtd_comp; i++){
        int s; // checa cada figurinha
        scanf("%d", &s);
        comp[s] = 1;// salva cada figurinha em sua própria loc do vetor
    }
    int qtd_n = 0;
    
    for(int i = 1; i <= qtd_fig; i++){
        if(comp[i]){
            qtd_n++;
        }
    }
    
    int total = qtd_fig - qtd_n;

    printf("%d\n", total);

    return 0;
}
