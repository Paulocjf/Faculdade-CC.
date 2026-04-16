#include <iostream>
#include <iomanip>
using namespace std;

// função para calcular média
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {

    string nomes[5];
    float notas1[5], notas2[5], notas3[5];
    float medias[5];

    int quantidade;

    cout << "Quantos alunos deseja cadastrar (max 5)? ";
    cin >> quantidade;

    cin.ignore();

    int i = 0;
    while (i < quantidade) {
        cout << "\nDigite o nome do aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);

        cout << "Digite as 3 notas de " << nomes[i] << ": ";
        cin >> notas1[i] >> notas2[i] >> notas3[i];

        cin.ignore();
        i++;
    }

    cout << fixed << setprecision(2);

    // CABEÇALHO
    cout << "\n";
    cout << left << setw(25) << "ALUNO"
         << right << setw(10) << "N1"
         << setw(10) << "N2"
         << setw(10) << "N3"
         << setw(12) << "MEDIA"
         << setw(15) << "SITUACAO" << endl;

    float maiorMedia = 0;
    string melhorAluno;

    i = 0;
    while (i < quantidade) {

        medias[i] = calcularMedia(notas1[i], notas2[i], notas3[i]);

        cout << left << setw(25) << nomes[i]
             << right << setw(10) << notas1[i]
             << setw(10) << notas2[i]
             << setw(10) << notas3[i]
             << setw(12) << medias[i];

        if (medias[i] >= 7) {
            cout << setw(15) << "Aprovado";
        } else {
            cout << setw(15) << "Reprovado";
        }

        cout << endl;

        if (i == 0 || medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            melhorAluno = nomes[i];
        }

        i++;
    }

    cout << "\nAluno com maior media: "
         << melhorAluno << " (" << maiorMedia << ")\n";

    return 0;
}
