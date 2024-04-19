#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    // Solicitar os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    // Calcular a soma
    soma = num1 + num2;
    
    // Exibir o resultado
    printf("A soma é: %d\n", soma);
    
    return 0;
}