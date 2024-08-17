#include<iostream>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);

    int vet[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    int x;
    scanf("%d", &x);


    int pos;
    if(x >= 65){
        for(int i=0; i<n; i++){
            if(vet[i] < 65){
                pos = i + 1;
                break;
            }
        }
    }

}
