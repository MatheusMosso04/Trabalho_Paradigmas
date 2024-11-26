//Improved Bubble Sort – Números aleatórios
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand() e srand()

// Função que implementa o algoritmo Improved Bubble Sort
void improvedBubbleSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    bool trocou;
    
    for (int i = 0; i < n - 1; i++) {
        trocou = false;  // Inicializa a flag de troca como falsa
        
        // A cada iteração, o maior elemento já está na posição correta
        for (int j = 0; j < n - i - 1; j++) {
            comparacoes++;  // Contabiliza a comparação
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocas++;  // Contabiliza a troca
                trocou = true;  // Marca que houve troca
            }
        }
        
        // Se não houve nenhuma troca, significa que o vetor já está ordenado
        if (!trocou) {
            break;
        }
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    //printf("Vetor original:\n");
   // imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Improved Bubble Sort
    improvedBubbleSort(vetor, 100000);
    
    //printf("\nVetor ordenado:\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}

//MELHOR CASO-
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand(), qsort()

// Função de comparação para usar com qsort
int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Função que implementa o algoritmo Improved Bubble Sort
void improvedBubbleSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    bool trocou;
    
    for (int i = 0; i < n - 1; i++) {
        trocou = false;  // Inicializa a flag de troca como falsa
        
        // A cada iteração, o maior elemento já está na posição correta
        for (int j = 0; j < n - i - 1; j++) {
            comparacoes++;  // Contabiliza a comparação
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocas++;  // Contabiliza a troca
                trocou = true;  // Marca que houve troca
            }
        }
        
        // Se não houve nenhuma troca, significa que o vetor já está ordenado
        if (!trocou) {
            break;
        }
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    // Ordenando o vetor previamente com qsort
    qsort(vetor, 100000, sizeof(int), comparar);  // Ordena o vetor em ordem crescente

    //printf("Vetor previamente ordenado:\n");
    //imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Improved Bubble Sort
    improvedBubbleSort(vetor, 100000);
    
    //printf("\nVetor após o Improved Bubble Sort (deveria ser igual ao original):\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}

//PIOR CASO
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand(), qsort()

// Função de comparação para usar com qsort
int comparar(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // Ordena em ordem decrescente
}

// Função que implementa o algoritmo Improved Bubble Sort
void improvedBubbleSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    bool trocou;
    
    for (int i = 0; i < n - 1; i++) {
        trocou = false;  // Inicializa a flag de troca como falsa
        
        // A cada iteração, o maior elemento já está na posição correta
        for (int j = 0; j < n - i - 1; j++) {
            comparacoes++;  // Contabiliza a comparação
            if (arr[j] > arr[j + 1]) {  // Mantém a comparação para ordem crescente
                // Troca os elementos se estiverem na ordem errada
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocas++;  // Contabiliza a troca
                trocou = true;  // Marca que houve troca
            }
        }
        
        // Se não houve nenhuma troca, significa que o vetor já está ordenado
        if (!trocou) {
            break;
        }
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    // Ordenando o vetor previamente com qsort em ordem decrescente
    qsort(vetor, 100000, sizeof(int), comparar);  // Ordena o vetor em ordem decrescente

    //printf("Vetor previamente ordenado em ordem decrescente:\n");
    //imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Improved Bubble Sort (em ordem crescente)
    improvedBubbleSort(vetor, 100000);
    
   // printf("\nVetor após o Improved Bubble Sort (deve ser ordenado em ordem crescente):\n");
   // imprimirVetor(vetor, 1000);

    return 0;
}






//INSERTION SORT- PIOR CASO
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand(), qsort

// Função de comparação para usar com qsort
int comparar(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // Ordena em ordem decrescente
}

// Função que implementa o algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    
    // Começa no segundo elemento (índice 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // O elemento que vai ser inserido na posição correta
        int j = i - 1;

        // Desloca os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > key) {
            comparacoes++;  // Contabiliza a comparação
            arr[j + 1] = arr[j];  // Move o elemento para a direita
            j--;
            trocas++;  // Contabiliza o deslocamento
        }
        arr[j + 1] = key;  // Insere a chave na posição correta
        if (j >= 0) comparacoes++;  // Conta a última comparação que não causou deslocamento
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    // Ordenando o vetor previamente com qsort em ordem decrescente
    qsort(vetor, 100000, sizeof(int), comparar);  // Ordena o vetor em ordem decrescente

    //printf("Vetor previamente ordenado em ordem decrescente:\n");
    //imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Insertion Sort (em ordem crescente)
    insertionSort(vetor, 100000);
    
    //printf("\nVetor após o Insertion Sort (deve ser ordenado em ordem crescente):\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}

//Caso médio –
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand(), qsort

// Função de comparação para usar com qsort
int comparar(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // Ordena em ordem decrescente
}

// Função que implementa o algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    
    // Começa no segundo elemento (índice 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // O elemento que vai ser inserido na posição correta
        int j = i - 1;

        // Desloca os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > key) {
            comparacoes++;  // Contabiliza a comparação
            arr[j + 1] = arr[j];  // Move o elemento para a direita
            j--;
            trocas++;  // Contabiliza o deslocamento
        }
        arr[j + 1] = key;  // Insere a chave na posição correta
        if (j >= 0) comparacoes++;  // Conta a última comparação que não causou deslocamento
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    // Ordenando o vetor previamente com qsort em ordem decrescente
    qsort(vetor, 100000, sizeof(int), comparar);  // Ordena o vetor em ordem decrescente

    //printf("Vetor previamente ordenado em ordem decrescente:\n");
    //imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Insertion Sort (em ordem crescente)
    insertionSort(vetor, 100000);
    
    //printf("\nVetor após o Insertion Sort (deve ser ordenado em ordem crescente):\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}

//Caso médio- 
#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand()

// Função que implementa o algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    
    // Começa no segundo elemento (índice 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // O elemento que vai ser inserido na posição correta
        int j = i - 1;

        // Desloca os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > key) {
            comparacoes++;  // Contabiliza a comparação
            arr[j + 1] = arr[j];  // Move o elemento para a direita
            j--;
            trocas++;  // Contabiliza o deslocamento
        }
        arr[j + 1] = key;  // Insere a chave na posição correta
        if (j >= 0) comparacoes++;  // Conta a última comparação que não causou deslocamento
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    //printf("Vetor antes do Insertion Sort (preenchido com números aleatórios):\n");
    //imprimirVetor(vetor, 1000);
    
    // Ordenando o vetor utilizando o Insertion Sort (em ordem crescente)
    insertionSort(vetor, 100000);
    
    //printf("\nVetor após o Insertion Sort (deve ser ordenado em ordem crescente):\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}



#include <stdio.h>
#include <stdlib.h>  // Necessário para rand(), srand()

// Função que implementa o algoritmo Insertion Sort
void insertionSort(int arr[], int n) {
    int comparacoes = 0, trocas = 0;  // Contadores de comparações e trocas
    
    // Começa no segundo elemento (índice 1)
    for (int i = 1; i < n; i++) {
        int key = arr[i];  // O elemento que vai ser inserido na posição correta
        int j = i - 1;

        // Desloca os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > key) {
            comparacoes++;  // Contabiliza a comparação
            arr[j + 1] = arr[j];  // Move o elemento para a direita
            j--;
            trocas++;  // Contabiliza o deslocamento
        }
        arr[j + 1] = key;  // Insere a chave na posição correta
        if (j >= 0) comparacoes++;  // Conta a última comparação que não causou deslocamento
    }
    
    // Exibe o número de comparações e trocas
    printf("Número de comparações: %d\n", comparacoes);
    printf("Número de trocas: %d\n", trocas);
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função que ordena o vetor manualmente em ordem crescente (bubble sort simples)
void ordenarVetor(int arr[], int n) {
    // Implementação de uma ordenação simples (bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[100000];
    
    // Inicializando o vetor com valores aleatórios
    srand(42);  // Inicializa a semente para gerar números aleatórios
    for (int i = 0; i < 100000; i++) {
        vetor[i] = rand() % 100000; // Valores aleatórios entre 0 e 9999
    }

    // Ordenando o vetor previamente em ordem crescente utilizando a função ordenarVetor
    ordenarVetor(vetor, 100000);

    //printf("Vetor previamente ordenado em ordem crescente:\n");
    //imprimirVetor(vetor, 1000);

    // Agora o vetor já está ordenado, vamos aplicar o Insertion Sort
    insertionSort(vetor, 100000);

    //printf("\nVetor após o Insertion Sort (deve permanecer ordenado em ordem crescente):\n");
    //imprimirVetor(vetor, 1000);

    return 0;
}


//SELECTION SORT –
//CASO MEDIO
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar o algoritmo Selection Sort
void selectionSort(int arr[], int n, int* compCount, int* swapCount) {
    int i, j, minIndex, temp;
    
    // Laço para percorrer todo o array
    for (i = 0; i < n - 1; i++) {
        // Encontrar o índice do menor elemento não ordenado
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            (*compCount)++;  // Incrementar contador de comparações
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Trocar o elemento atual com o menor elemento encontrado
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            (*swapCount)++;  // Incrementar contador de trocas
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100000];  // Definir um vetor de 1000 elementos
    int n = 100000;
    int compCount = 0;  // Contador de comparações
    int swapCount = 0;  // Contador de trocas
    
    // Inicializar o gerador de números aleatórios
    srand(time(0));  // Usar o tempo atual como semente

    // Preencher o vetor com números aleatórios entre 0 e 999
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100000;  // Números aleatórios entre 0 e 999
    }

    // Descomente a linha abaixo se quiser imprimir o array original
    // printf("Array original:\n");
    // printArray(arr, n);

    // Ordenar o array usando Selection Sort
    selectionSort(arr, n, &compCount, &swapCount);

    // Imprimir o array ordenado
    //printf("Array ordenado:\n");
    // printArray(arr, n);  // Descomente se quiser ver o array ordenado

    // Exibir as contagens de comparações e trocas
    printf("\nNúmero de comparações: %d\n", compCount);
    printf("Número de trocas: %d\n", swapCount);

    return 0;
}

//Melhor Caso-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar o algoritmo Selection Sort
void selectionSort(int arr[], int n, int* compCount, int* swapCount) {
    int i, j, minIndex, temp;
    
    // Laço para percorrer todo o array
    for (i = 0; i < n - 1; i++) {
        // Encontrar o índice do menor elemento não ordenado
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            (*compCount)++;  // Incrementar contador de comparações
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Trocar o elemento atual com o menor elemento encontrado
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            (*swapCount)++;  // Incrementar contador de trocas
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10000];  // Definir um vetor de 1000 elementos
    int n = 10000;
    int compCount = 0;  // Contador de comparações
    int swapCount = 0;  // Contador de trocas
    
    // Criar um vetor já ordenado (1, 2, 3, ..., 1000)
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Preencher com números de 1 a 1000
    }

    // Descomente a linha abaixo se quiser imprimir o array original
    // printf("Array original (ordenado):\n");
    // printArray(arr, n);

    // Ordenar o array usando Selection Sort
    selectionSort(arr, n, &compCount, &swapCount);

    // Imprimir o array ordenado
   // printf("Array ordenado:\n");
    // printArray(arr, n);  // Descomente se quiser ver o array ordenado

    // Exibir as contagens de comparações e trocas
    printf("\nNúmero de comparações: %d\n", compCount);
    printf("Número de trocas: %d\n", swapCount);

    return 0;
}

//Pior Caso-

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para realizar o algoritmo Selection Sort
void selectionSort(int arr[], int n, int* compCount, int* swapCount) {
    int i, j, minIndex, temp;
    
    // Laço para percorrer todo o array
    for (i = 0; i < n - 1; i++) {
        // Encontrar o índice do menor elemento não ordenado
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            (*compCount)++;  // Incrementar contador de comparações
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Trocar o elemento atual com o menor elemento encontrado
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            (*swapCount)++;  // Incrementar contador de trocas
        }
    }
}

// Função para imprimir o array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100000];  // Definir um vetor de 1000 elementos
    int n = 100000;
    int compCount = 0;  // Contador de comparações
    int swapCount = 0;  // Contador de trocas
    
    // Criar um vetor decrescente (1000, 999, 998, ..., 1)
    for (int i = 0; i < n; i++) {
        arr[i] = n - i;  // Preencher com números de 1000 a 1
    }

    // Descomente a linha abaixo se quiser imprimir o array original
    // printf("Array original (decrescente):\n");
    // printArray(arr, n);

    // Ordenar o array usando Selection Sort
    selectionSort(arr, n, &compCount, &swapCount);

    // Imprimir o array ordenado
   // printf("Array ordenado:\n");
    // printArray(arr, n);  // Descomente se quiser ver o array ordenado

    // Exibir as contagens de comparações e trocas
    printf("\nNúmero de comparações: %d\n", compCount);
    printf("Número de trocas: %d\n", swapCount);

    return 0;
}


//MERGE SORT-
//Melhor Caso
#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função de comparação usada pelo qsort
int compare(const void* a, const void* b) {
    comparacoes++; // Contabiliza uma comparação
    if (*(int*)a < *(int*)b) {
        return -1;
    } else if (*(int*)a > *(int*)b) {
        return 1;
    }
    return 0;
}

// Função para mesclar (merge) duas metades do vetor
void merge(int vetor[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;
    
    // Criação de vetores temporários
    int esquerda[n1], direita[n2];
    
    // Preenchendo os vetores temporários
    for (int i = 0; i < n1; i++) {
        esquerda[i] = vetor[esq + i];
    }
    for (int j = 0; j < n2; j++) {
        direita[j] = vetor[meio + 1 + j];
    }
    
    int i = 0, j = 0, k = esq;

    // Mesclando os vetores temporários de volta no vetor original
    while (i < n1 && j < n2) {
        comparacoes++; // Contabiliza uma comparação
        if (esquerda[i] <= direita[j]) {
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
            trocas++; // Contabiliza uma troca
        }
        k++;
    }
    
    // Copiar os elementos restantes, se houver
    while (i < n1) {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vetor[k] = direita[j];
        j++;
        k++;
    }
}

// Função recursiva de Merge Sort
void mergeSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        
        // Dividindo o vetor em duas metades e ordenando-as
        mergeSort(vetor, esq, meio);
        mergeSort(vetor, meio + 1, dir);
        
        // Mesclando as duas metades ordenadas
        merge(vetor, esq, meio, dir);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000; // Números aleatórios entre 0 e 9999
    }

    // Exibindo o vetor antes de ordenar
    //printf("Vetor original:\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Ordenando o vetor antes de passar para o Merge Sort (usando qsort)
    qsort(vetor, SIZE, sizeof(int), compare);

    // Exibindo o vetor ordenado com qsort
    //printf("\nVetor ordenado com qsort:\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Merge Sort (com o vetor já ordenado)
    mergeSort(vetor, 0, SIZE - 1);

    // Exibindo o vetor após a execução do Merge Sort
    //printf("\nVetor após o Merge Sort:\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Merge Sort: %d\n", comparacoes);
    printf("Número de trocas no Merge Sort: %d\n", trocas);

    return 0;
}





//Pior Caso-

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para mesclar (merge) duas metades do vetor
void merge(int vetor[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;
    
    // Criação de vetores temporários
    int esquerda[n1], direita[n2];
    
    // Preenchendo os vetores temporários
    for (int i = 0; i < n1; i++) {
        esquerda[i] = vetor[esq + i];
    }
    for (int j = 0; j < n2; j++) {
        direita[j] = vetor[meio + 1 + j];
    }
    
    int i = 0, j = 0, k = esq;

    // Mesclando os vetores temporários de volta no vetor original
    while (i < n1 && j < n2) {
        comparacoes++; // Contabiliza uma comparação
        if (esquerda[i] <= direita[j]) {  // Ordem crescente
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
            trocas++; // Contabiliza uma troca
        }
        k++;
    }
    
    // Copiar os elementos restantes, se houver
    while (i < n1) {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vetor[k] = direita[j];
        j++;
        k++;
    }
}

// Função recursiva de Merge Sort
void mergeSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        
        // Dividindo o vetor em duas metades e ordenando-as
        mergeSort(vetor, esq, meio);
        mergeSort(vetor, meio + 1, dir);
        
        // Mesclando as duas metades ordenadas
        merge(vetor, esq, meio, dir);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios em ordem decrescente
    int vetor[SIZE];
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = SIZE - i; // Vetor ordenado de forma decrescente
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (ordem decrescente):\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Merge Sort para ordenar o vetor em ordem crescente
    mergeSort(vetor, 0, SIZE - 1);

    // Exibindo o vetor após a execução do Merge Sort (ordem crescente)
    printf("\nVetor após o Merge Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Merge Sort: %d\n", comparacoes);
    printf("Número de trocas no Merge Sort: %d\n", trocas);

    return 0;
}

//Caso Medio-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para mesclar (merge) duas metades do vetor
void merge(int vetor[], int esq, int meio, int dir) {
    int n1 = meio - esq + 1;
    int n2 = dir - meio;
    
    // Criação de vetores temporários
    int esquerda[n1], direita[n2];
    
    // Preenchendo os vetores temporários
    for (int i = 0; i < n1; i++) {
        esquerda[i] = vetor[esq + i];
    }
    for (int j = 0; j < n2; j++) {
        direita[j] = vetor[meio + 1 + j];
    }
    
    int i = 0, j = 0, k = esq;

    // Mesclando os vetores temporários de volta no vetor original
    while (i < n1 && j < n2) {
        comparacoes++; // Contabiliza uma comparação
        if (esquerda[i] <= direita[j]) {  // Ordem crescente
            vetor[k] = esquerda[i];
            i++;
        } else {
            vetor[k] = direita[j];
            j++;
            trocas++; // Contabiliza uma troca
        }
        k++;
    }
    
    // Copiar os elementos restantes, se houver
    while (i < n1) {
        vetor[k] = esquerda[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        vetor[k] = direita[j];
        j++;
        k++;
    }
}

// Função recursiva de Merge Sort
void mergeSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;
        
        // Dividindo o vetor em duas metades e ordenando-as
        mergeSort(vetor, esq, meio);
        mergeSort(vetor, meio + 1, dir);
        
        // Mesclando as duas metades ordenadas
        merge(vetor, esq, meio, dir);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL)); // Semente para números aleatórios
    
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000; // Números aleatórios entre 0 e 9999
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso médio - aleatório):\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Merge Sort para ordenar o vetor em ordem crescente
    mergeSort(vetor, 0, SIZE - 1);

    // Exibindo o vetor após a execução do Merge Sort (ordem crescente)
    printf("\nVetor após o Merge Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) { // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Merge Sort: %d\n", comparacoes);
    printf("Número de trocas no Merge Sort: %d\n", trocas);

    return 0;
}

//Quick Sort – Melhor caso

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para particionar o vetor e retornar o índice do pivô
int particiona(int vetor[], int esq, int dir) {
    // Escolhe o pivô como o elemento central do vetor
    int meio = esq + (dir - esq) / 2;
    int pivo = vetor[meio];
    troca(&vetor[meio], &vetor[dir]);  // Coloca o pivô na última posição
    
    int i = esq - 1;
    
    // Particiona o vetor de forma que todos os elementos menores que o pivô
    // fiquem à esquerda e os maiores à direita
    for (int j = esq; j < dir; j++) {
        comparacoes++;  // Contabiliza uma comparação
        if (vetor[j] <= pivo) {
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }
    troca(&vetor[i + 1], &vetor[dir]);  // Coloca o pivô em sua posição final
    return i + 1;  // Retorna o índice do pivô
}

// Função recursiva para ordenar o vetor usando Quick Sort
void quickSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        // Particiona o vetor e obtém o índice do pivô
        int pivo = particiona(vetor, esq, dir);
        
        // Ordena as duas metades
        quickSort(vetor, esq, pivo - 1);
        quickSort(vetor, pivo + 1, dir);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000;  // Números aleatórios entre 0 e 9999
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso médio - aleatório):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Quick Sort para ordenar o vetor em ordem crescente
    quickSort(vetor, 0, SIZE - 1);

    // Exibindo o vetor após a execução do Quick Sort (ordem crescente)
    printf("\nVetor após o Quick Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Quick Sort: %d\n", comparacoes);
    printf("Número de trocas no Quick Sort: %d\n", trocas);

    return 0;
}

//Pior caso e melhor caso, mudando a ordem final
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para particionar o vetor e retornar o índice do pivô
int particiona(int vetor[], int esq, int dir) {
    // Escolhe o pivô como o último elemento do vetor
    int pivo = vetor[dir];
    int i = esq - 1;
    
    // Particiona o vetor de forma que todos os elementos menores que o pivô
    // fiquem à esquerda e os maiores à direita
    for (int j = esq; j < dir; j++) {
        comparacoes++;  // Contabiliza uma comparação
        if (vetor[j] <= pivo) {
            i++;
            troca(&vetor[i], &vetor[j]);
        }
    }
    troca(&vetor[i + 1], &vetor[dir]);  // Coloca o pivô em sua posição final
    return i + 1;  // Retorna o índice do pivô
}

// Função recursiva para ordenar o vetor usando Quick Sort
void quickSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        // Particiona o vetor e obtém o índice do pivô
        int pivo = particiona(vetor, esq, dir);
        
        // Ordena as duas metades
        quickSort(vetor, esq, pivo - 1);
        quickSort(vetor, pivo + 1, dir);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    // Preenche o vetor com números aleatórios
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000;  // Números aleatórios entre 0 e 9999
    }

    // Ordena o vetor em ordem decrescente para garantir o pior caso
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (vetor[i] < vetor[j]) {
                troca(&vetor[i], &vetor[j]);
            }
        }
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (em ordem decrescente - pior caso):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Quick Sort para ordenar o vetor em ordem crescente
    quickSort(vetor, 0, SIZE - 1);

    // Exibindo o vetor após a execução do Quick Sort (ordem crescente)
    printf("\nVetor após o Quick Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Quick Sort: %d\n", comparacoes);
    printf("Número de trocas no Quick Sort: %d\n", trocas);

    return 0;
}

//Heap Sort- Melhor Caso
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para "ajustar" o heap (max-heap) a partir de um nó i
void heapify(int vetor[], int n, int i) {
    int maior = i;  // Inicializa o maior como a raiz
    int esq = 2 * i + 1;  // Esquerdo
    int dir = 2 * i + 2;  // Direito

    // Se o filho esquerdo for maior que a raiz
    comparacoes++;
    if (esq < n && vetor[esq] > vetor[maior])
        maior = esq;

    // Se o filho direito for maior que o maior até agora
    comparacoes++;
    if (dir < n && vetor[dir] > vetor[maior])
        maior = dir;

    // Se o maior não for a raiz, troque-os
    if (maior != i) {
        troca(&vetor[i], &vetor[maior]);
        // Recursivamente "ajuste" o heap afetado
        heapify(vetor, n, maior);
    }
}

// Função para realizar o Heap Sort
void heapSort(int vetor[], int n) {
    // Construa um max-heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(vetor, n, i);
    }

    // Extraia elementos do heap um por um
    for (int i = n - 1; i >= 1; i--) {
        // Mover a raiz atual para o final
        troca(&vetor[0], &vetor[i]);

        // Chame heapify na árvore reduzida
        heapify(vetor, i, 0);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    // Preenche o vetor com números aleatórios
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000;  // Números aleatórios entre 0 e 9999
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso aleatório - melhor caso):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Heap Sort para ordenar o vetor em ordem crescente
    heapSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Heap Sort (ordem crescente)
    printf("\nVetor após o Heap Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Heap Sort: %d\n", comparacoes);
    printf("Número de trocas no Heap Sort: %d\n", trocas);

    return 0;
}

//Caso Médio-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para "ajustar" o heap (max-heap) a partir de um nó i
void heapify(int vetor[], int n, int i) {
    int maior = i;  // Inicializa o maior como a raiz
    int esq = 2 * i + 1;  // Esquerdo
    int dir = 2 * i + 2;  // Direito

    // Se o filho esquerdo for maior que a raiz
    comparacoes++;
    if (esq < n && vetor[esq] > vetor[maior])
        maior = esq;

    // Se o filho direito for maior que o maior até agora
    comparacoes++;
    if (dir < n && vetor[dir] > vetor[maior])
        maior = dir;

    // Se o maior não for a raiz, troque-os
    if (maior != i) {
        troca(&vetor[i], &vetor[maior]);
        // Recursivamente "ajuste" o heap afetado
        heapify(vetor, n, maior);
    }
}

// Função para realizar o Heap Sort
void heapSort(int vetor[], int n) {
    // Construa um max-heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(vetor, n, i);
    }

    // Extraia elementos do heap um por um
    for (int i = n - 1; i >= 1; i--) {
        // Mover a raiz atual para o final
        troca(&vetor[0], &vetor[i]);

        // Chame heapify na árvore reduzida
        heapify(vetor, i, 0);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    // Preenche o vetor com números aleatórios
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % 10000;  // Números aleatórios entre 0 e 9999
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso aleatório - caso médio):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Heap Sort para ordenar o vetor em ordem crescente
    heapSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Heap Sort (ordem crescente)
    printf("\nVetor após o Heap Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Heap Sort: %d\n", comparacoes);
    printf("Número de trocas no Heap Sort: %d\n", trocas);

    return 0;
}

//Pior caso-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para "ajustar" o heap (max-heap) a partir de um nó i
void heapify(int vetor[], int n, int i) {
    int maior = i;  // Inicializa o maior como a raiz
    int esq = 2 * i + 1;  // Esquerdo
    int dir = 2 * i + 2;  // Direito

    // Se o filho esquerdo for maior que a raiz
    comparacoes++;
    if (esq < n && vetor[esq] > vetor[maior])
        maior = esq;

    // Se o filho direito for maior que o maior até agora
    comparacoes++;
    if (dir < n && vetor[dir] > vetor[maior])
        maior = dir;

    // Se o maior não for a raiz, troque-os
    if (maior != i) {
        troca(&vetor[i], &vetor[maior]);
        // Recursivamente "ajuste" o heap afetado
        heapify(vetor, n, maior);
    }
}

// Função para realizar o Heap Sort
void heapSort(int vetor[], int n) {
    // Construa um max-heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(vetor, n, i);
    }

    // Extraia elementos do heap um por um
    for (int i = n - 1; i >= 1; i--) {
        // Mover a raiz atual para o final
        troca(&vetor[0], &vetor[i]);

        // Chame heapify na árvore reduzida
        heapify(vetor, i, 0);
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores de forma decrescente
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    // Preenche o vetor com números de forma decrescente
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = SIZE - i;  // De 1000 até 1
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso pior - vetor decrescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Heap Sort para ordenar o vetor em ordem crescente
    heapSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Heap Sort (ordem crescente)
    printf("\nVetor após o Heap Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Heap Sort: %d\n", comparacoes);
    printf("Número de trocas no Heap Sort: %d\n", trocas);

    return 0;
}

//Gnome Sort- 
//Melhor Caso-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para realizar o Gnome Sort
void gnomeSort(int vetor[], int n) {
    int i = 1;
    
    while (i < n) {
        comparacoes++;  // Contabiliza uma comparação
        
        if (vetor[i - 1] <= vetor[i]) {
            // Se os elementos estão na ordem correta, avance
            i++;
        } else {
            // Se estiverem fora de ordem, troque e vá para o elemento anterior
            troca(&vetor[i - 1], &vetor[i]);
            if (i > 1) {
                i--;
            }
        }
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores já ordenados
    int vetor[SIZE];
    
    // Preenche o vetor com números ordenados de forma crescente
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = i + 1;  // De 1 até 1000
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso melhor - vetor já ordenado):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Gnome Sort para ordenar o vetor em ordem crescente
    gnomeSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Gnome Sort (ordem crescente)
    printf("\nVetor após o Gnome Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Gnome Sort: %d\n", comparacoes);
    printf("Número de trocas no Gnome Sort: %d\n", trocas);

    return 0;
}

//Caso Médio-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para realizar o Gnome Sort
void gnomeSort(int vetor[], int n) {
    int i = 1;
    
    while (i < n) {
        comparacoes++;  // Contabiliza uma comparação
        
        if (vetor[i - 1] <= vetor[i]) {
            // Se os elementos estão na ordem correta, avance
            i++;
        } else {
            // Se estiverem fora de ordem, troque e vá para o elemento anterior
            troca(&vetor[i - 1], &vetor[i]);
            if (i > 1) {
                i--;
            }
        }
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores aleatórios
    int vetor[SIZE];
    srand(time(NULL));  // Semente para números aleatórios
    
    // Preenche o vetor com números aleatórios
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = rand() % SIZE;  // Números aleatórios entre 0 e 999
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso médio - vetor aleatório):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Gnome Sort para ordenar o vetor em ordem crescente
    gnomeSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Gnome Sort (ordem crescente)
    printf("\nVetor após o Gnome Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Gnome Sort: %d\n", comparacoes);
    printf("Número de trocas no Gnome Sort: %d\n", trocas);

    return 0;
}

//Pior caso-
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000

// Variáveis globais para contar comparações e trocas
int comparacoes = 0;
int trocas = 0;

// Função para realizar a troca de dois elementos
void troca(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    trocas++;  // Contabiliza uma troca
}

// Função para realizar o Gnome Sort
void gnomeSort(int vetor[], int n) {
    int i = 1;
    
    while (i < n) {
        comparacoes++;  // Contabiliza uma comparação
        
        if (vetor[i - 1] <= vetor[i]) {
            // Se os elementos estão na ordem correta, avance
            i++;
        } else {
            // Se estiverem fora de ordem, troque e vá para o elemento anterior
            troca(&vetor[i - 1], &vetor[i]);
            if (i > 1) {
                i--;
            }
        }
    }
}

int main() {
    // Inicializando o vetor de 1000 elementos com valores ordenados de forma decrescente
    int vetor[SIZE];
    
    // Preenche o vetor com números em ordem decrescente
    for (int i = 0; i < SIZE; i++) {
        vetor[i] = SIZE - i;  // De 1000 até 1
    }

    // Exibindo o vetor antes de ordenar (apenas os primeiros 20 elementos)
    printf("Vetor original (caso pior - vetor decrescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Chamando a função Gnome Sort para ordenar o vetor em ordem crescente
    gnomeSort(vetor, SIZE);

    // Exibindo o vetor após a execução do Gnome Sort (ordem crescente)
    printf("\nVetor após o Gnome Sort (ordem crescente):\n");
    for (int i = 0; i < 20; i++) {  // Exibindo apenas os primeiros 20 elementos
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Exibindo o número de comparações e trocas realizadas
    printf("\nNúmero de comparações no Gnome Sort: %d\n", comparacoes);
    printf("Número de trocas no Gnome Sort: %d\n", trocas);

    return 0;
}
















