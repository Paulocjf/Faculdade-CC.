// Esteban Vieira de Brito Ferber
// Paulo Cesar Jesuino Filho
// Felipe de Brito Manes
// Valentina Schilo

// Algoritmo em C++ que solicita ao usuário um número inteiro de 8 ou 9 dígitos,
// utiliza esse número como base para um CPF, calcula os dois dígitos verificadores
// e exibe o CPF completo no formato padrão.

#include <iostream>
using namespace std;

int main() {

    // Declaração das variáveis
    int numero_cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, v1, v2, soma;

    // Entrada de dados
    cout << "Digite um número inteiro com 8 ou 9 dígitos: ";
    cin >> numero_cpf;

    // Validação da entrada
    // O número informado deve possuir entre 8 e 9 dígitos
    if (numero_cpf > 10000000 && numero_cpf < 999999999) {

    // Separação dos dígitos
    // O operador % 10 obtém o último dígito do número
    // A divisão inteira por 10 remove o último dígito já utilizado
    d9 = numero_cpf % 10;//
    numero_cpf = numero_cpf / 10;//
    d8 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d7 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d6 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d5 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d4 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d3 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d2 = numero_cpf % 10;
    numero_cpf = numero_cpf / 10;
    d1 = numero_cpf % 10;

    // Cálculo do primeiro dígito verificador
    // São utilizados os pesos de 10 até 2
    soma = (d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 5 + d7 * 4 + d8 * 3 + d9 * 2) % 11;

    // Primeiro, calculamos 11 menos o resto da divisão da soma
    v1 = 11 - soma;
    
    // Se o resto da divisão por 11 for menor que 2, o dígito verificador será 0
    if (soma < 2) {
        v1 = 0;
    }

    // Cálculo do segundo dígito verificador
    // Agora são utilizados os pesos de 11 até 2, incluindo o primeiro dígito verificador
    soma = (d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 6 + d7 * 5 + d8 * 4 + d9 * 3 + v1 * 2) % 11;

    // Primeiro, calculamos 11 menos o resto da divisão da soma
    v2 = 11 - soma;
    
    // Se o resto da divisão por 11 for menor que 2, o dígito verificador será 0
    if (soma < 2) {
        v2 = 0;
    }

    // Saída de dados
    // Exibe o CPF completo no formato padrão
    cout << endl << "CPF completo: ";
    cout << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7 << d8 << d9 << "-" << v1 << v2;
    }
    else {
        cout << endl << "Número inválido.";
    }
    return 0;
}
