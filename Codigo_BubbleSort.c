//Algoritmo Bubble sort – caso médio


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, j, temp;

    // Loop para percorrer todo o array
    for (i = 0; i < n-1; i++) {
        // Últimos elementos já estão na posição correta, então o loop vai até n-i-1
        for (j = 0; j < n-i-1; j++) {
            (*comparacoes)++; // Incrementa a contagem de comparações
            // Comparar o elemento atual com o próximo
            if (arr[j] > arr[j+1]) {
                // Trocar se o elemento atual for maior que o próximo
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*trocas)++; // Incrementa a contagem de trocas
            }
        }
    }
}

// Função para imprimir o array (caso queira visualizar)
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Inicializar o array com 1000 elementos
    int arr[100000];
    int n = sizeof(arr)/sizeof(arr[0]);
    int comparacoes = 0; // Contador de comparações
    int trocas = 0; // Contador de trocas

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preencher o array com números aleatórios entre 1 e 1000
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100000 + 1; // Gera números entre 1 e 1000
    }

    
     printf("Array original: \n");
     imprimirArray(arr, n);

    // Ordenar o array utilizando o Bubble Sort
    bubbleSort(arr, n, &comparacoes, &trocas);

    
     printf("\nArray ordenado: \n");
     imprimirArray(arr, n);

    printf("\nNúmero de comparacoes: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);

    return 0;
}

//ALGORITMO ORDENADO-

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, j, temp;

    // Loop para percorrer todo o array
    for (i = 0; i < n-1; i++) {
        // Últimos elementos já estão na posição correta, então o loop vai até n-i-1
        for (j = 0; j < n-i-1; j++) {
            (*comparacoes)++; // Incrementa a contagem de comparações
            // Comparar o elemento atual com o próximo
            if (arr[j] > arr[j+1]) {
                // Trocar se o elemento atual for maior que o próximo
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*trocas)++; // Incrementa a contagem de trocas
            }
        }
    }
}

// Função para imprimir o array (caso queira visualizar)
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Inicializar o array com 1000 elementos
    int arr[100000];
    int n = sizeof(arr)/sizeof(arr[0]);
    int comparacoes = 0; // Contador de comparações
    int trocas = 0; // Contador de trocas

    // Gerar um vetor já ordenado (de 1 a 1000)
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Vetor ordenado de 1 a 1000
    }

    // Ordenar o array utilizando o Bubble Sort
    bubbleSort(arr, n, &comparacoes, &trocas);

   
    printf("\nArray ordenado: \n");
    imprimirArray(arr, n);

    printf("\nNúmero de comparacoes: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);

    return 0;
}

//ALGORITMO ORDENADO DECRESCENTE-

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int n, int *comparacoes, int *trocas) {
    int i, j, temp;

    // Loop para percorrer todo o array
    for (i = 0; i < n-1; i++) {
        // Últimos elementos já estão na posição correta, então o loop vai até n-i-1
        for (j = 0; j < n-i-1; j++) {
            (*comparacoes)++; // Incrementa a contagem de comparações
            // Comparar o elemento atual com o próximo
            if (arr[j] > arr[j+1]) {
                // Trocar se o elemento atual for maior que o próximo
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*trocas)++; // Incrementa a contagem de trocas
            }
        }
    }
}

// Função para imprimir o array (caso queira visualizar)
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Inicializar o array com 100000 elementos
    int arr[10000];
    int n = sizeof(arr)/sizeof(arr[0]);
    int comparacoes = 0; // Contador de comparações
    int trocas = 0; // Contador de trocas

    // Gerar um vetor ordenado de forma decrescente (de 100000 a 1)
    for (int i = 0; i < n; i++) {
        arr[i] = n - i; // Vetor ordenado de 100000 a 1
    }
	
	printf("Array original: \n");
    imprimirArray(arr, n);

    // Ordenar o array utilizando o Bubble Sort
    bubbleSort(arr, n, &comparacoes, &trocas);

    
     printf("\nArray ordenado: \n");
     imprimirArray(arr, n);

    printf("\nNúmero de comparacoes: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);

    return 0;
}





