#include <stdio.h>
//
void entrada(int *anoNascimento);
void calculo(int anoNascimento);
//
int main() {
    int Y;
    //
    entrada(&Y);
    //
    if (Y >= 2010 && Y <= 2020) {
        calculo(Y);
    }
    //
    return 0;
}
//
void entrada(int *anoNascimento) {
    scanf("%d", anoNascimento);
}

void calculo(int anoNascimento) {
    int anoMillennial;
    int anoAtual = 2025;
    //
    anoMillennial = anoNascimento - (anoAtual - anoNascimento);
    //
    printf("%d\n", anoMillennial);
}