#include<stdio.h>// numero 1 da prova

int main(){
    int n, i;
    scanf("%d", &n);

    int vet[n];
    int freq[n+1];

    for(i = 1; i<=n; i++){
        freq[i] = 0;
    }

    for(i = 1; i<n; i++){
        scanf("%d", &vet[i]);
        freq[vet[i]] = 1;
    }

    for(i = 1; i <= n; i++){
        if(freq[i] == 0){
            printf("%d\n", i);
             break;
        } 
    }

    return 0;
}
