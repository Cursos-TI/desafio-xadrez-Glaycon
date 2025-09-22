#include <stdio.h>

// --- Desafio Movimentos de Xadrez ---
// Glaycon Oliveira


// Tive que declarar as funções aqui em cima para o main() saber que elas existem.
void moverTorre(int passos);
void moverBispo(int passos);
void moverRainha(int passos);

int main() {

    // 1. Movimento da Torre: 5 casas para a direita (com recursividade)
    printf("--- Movimento da Torre (usando recursividade) ---\n");
    moverTorre(5); // Chamo a função recursiva passando o número de passos

    // 2. Movimento do Bispo: 5 casas na diagonal (com recursividade)
    printf("\n--- Movimento do Bispo (usando recursividade) ---\n");
    moverBispo(5); // Chamo a função para o movimento do Bispo

    // 3. Movimento da Rainha: 8 casas para a esquerda (com recursividade)
    printf("\n--- Movimento da Rainha (usando recursividade) ---\n");
    moverRainha(8); // Chamo a função para o movimento da Rainha

    // 4. Movimento do Cavalo: 2 casas para cima e 1 para a direita (loop complexo)
    printf("\n--- Movimento do Cavalo (usando loop complexo) ---\n");
    for (int i = 1; i <= 3; i++) {
        if (i <= 2) { // Nos dois primeiros passos, ele vai para cima
            printf("Cima\n");
        } else { // No terceiro passo, ele vai para a direita
            printf("Direita\n");
        }
    }

    return 0; // Fim do programa
}


void moverTorre(int passos) {
    // Caso Base: se não houver mais passos, a função para de se chamar.
    if (passos <= 0) {
        return;
    }
    // Passo da recursão: imprime o movimento e chama a si mesma com um passo a menos.
    printf("Direita\n");
    moverTorre(passos - 1);
}


void moverBispo(int passos) {
    // Caso Base: parar quando os passos chegarem a zero.
    if (passos <= 0) {
        return;
    }
    // Passo da recursão: imprime e chama a função novamente.
    printf("Cima, Direita\n");
    moverBispo(passos - 1);
}


void moverRainha(int passos) {
    // Caso Base: a condição de parada.
    if (passos <= 0) {
        return;
    }
    // Passo da recursão: executa a ação e se aproxima do caso base.
    printf("Esquerda\n");
    moverRainha(passos - 1);
}