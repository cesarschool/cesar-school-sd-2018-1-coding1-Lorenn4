#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome (char sentence [], int length) {
    
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    // TODO: YOUR CODE HERE!
    
    int num1 = 0;
    int num2 = length - 1;
    
    while (sentence [num1] == sentence [num2]) {
        if (num1 == num2 || num1 > num2) {
            printf ("True");
            printf("\nisPalindrome::END\n");
            return true;
        }
        num1 = num1 + 1;
        num2 = num2 - 1;
    }
    printf ("Falso");
    printf("\nisPalindrome::END\n");
    return false;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
