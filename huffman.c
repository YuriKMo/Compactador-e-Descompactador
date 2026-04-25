#include <stdio.h>

#include "huffman.h"

// Recebe arquivo e preenche vetor
void levantamento_frequencia(FILE *arquivo, unsigned int *frequencia) {
    unsigned char byte; // armazena o byte (letra)
    rewind(arquivo); // Para ter certeza que está no inicio do arquivo
    
    while(fread(&byte, sizeof(unsigned char), 1, arquivo) == 1) {
        frequencia[byte]++; // Soma +1 na posição refente ao caracter encontrado EX: "A" = 65
    }
}