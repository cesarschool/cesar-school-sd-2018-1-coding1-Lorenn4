#include <stdio.h>

/**
 * Escreva uma função que encontra a primeira letra que não se repete em uma
 * sentença.
 * Função: char firstNonRepeatingChar(char[] sentence, int length)
 * Input:
 * - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
 * - length: tamanho do array - número de caracteres
 * Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
 */
 
void firstNonRepeatingChar (char sentence [], int length) {
    
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);
    
    // TODO: YOUR CODE HERE!
    
    int letra = 0;
    int leitura = 0;
    int sinal = 0;
    int final = length - 1;
    
    while (letra <= final) {
        leitura = 0;
        while (leitura <= final) {
            if ((sentence[leitura] == sentence[letra]) && leitura != letra) {
                sinal = 0;
                break;
            }
            sinal = 1;
            leitura = leitura + 1;
        }
        if (sinal == 1) {
            printf ("%c", sentence[letra]);
            printf("\nfirstNonRepeatingChar::END\n");
            return sentence[letra];
        }
        letra = letra + 1;
    }
    printf ("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main() {
    
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");
    
    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    
    return 0;
}
