#include <stdio.h>
#include <stdlib.h>

void levantamento_frequencia(FILE *arquivo, unsigned int *frequencia) {

}

/* * DICIONÁRIO DE FUNÇÕES PARA MANIPULAÇÃO DE ARQUIVOS (stdio.h)
 * -----------------------------------------------------------
 *
 * fopen(nome, modo) -> Abre o arquivo. 
 * - Modos: "rb" (leitura binária), "wb" (escrita binária).
 * - Retorna: Ponteiro FILE* ou NULL se houver erro.
 *
 * fclose(ponteiro)  -> Fecha o arquivo e libera a memória.
 * - Retorna: 0 se sucesso, EOF se houver erro.
 *
 * fgetc(ponteiro)   -> Lê UM byte do arquivo e avança o cursor.
 * - Retorna: O byte lido como um int (para conseguir sinalizar o EOF).
 *
 * fread(alvo, tam, qtd, ponteiro) -> Lê um BLOCO de dados.
 * - alvo: Endereço da variável que vai receber os dados.
 * - tam: Tamanho de cada elemento (ex: sizeof(unsigned char)).
 * - qtd: Quantidade de elementos a ler.
 * - Retorna: Quantidade de elementos lidos com sucesso.
 *
 * rewind(ponteiro)  -> Volta o cursor de leitura/escrita para o INÍCIO do arquivo.
 *
 * feof(ponteiro)    -> Verifica se o cursor chegou ao FIM do arquivo (End Of File).
 * - Retorna: Valor diferente de zero se o fim foi atingido.
 *
 * ferror(ponteiro)  -> Verifica se ocorreu algum erro durante a leitura ou escrita.
 *
 * fwrite(origem, tam, qtd, ponteiro) -> Escreve um BLOCO de dados no arquivo.
 * - Retorna: Quantidade de elementos escritos com sucesso.
 */