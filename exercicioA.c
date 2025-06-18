#include <stdio.h>
//
void entrada(int *numeroDeFilhos);
void soma(int numeroDeFilhos);
//
int main() {
    int N;
    //
    entrada(&N);
    //
    if (N >= 1 && N <= 1000) {
        soma(N);
    }
    //
    return 0;
}
//
void entrada(int *numeroDeFilhos) {
    scanf("%d", numeroDeFilhos);
}
//
void soma(int numeroDeFilhos) {
    int soma = 0;
    int F;
    for (int i = 1; i <= numeroDeFilhos; i++) {
        scanf("%d", &F);
        if (F >= 0 && F <= 1000) {
            soma += F;
        }
    } printf("%d\n", soma);
}