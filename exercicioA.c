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
    int totalNetos = 0;
    int netos;
    for (int i = 0; i < numeroDeFilhos; i++) {
        scanf("%d", &netos);
        totalNetos += netos;
    } printf("%d\n", totalNetos);
}