//Crie um algoritmo que recebe duas notas de prova, calcula a média e mostra o resultado para o aluno.

#include <iostream>

using namespace std;

int main()
{
    double nota1, nota2, media;
    cout << "Insira a primeira nota" << endl;
    cin >> nota1;
    cout << "Insira a segunda nota" << endl;
    cin >> nota2;
    media = (nota1 + nota2) / 2;
    cout << "A sua media neste semestre foi "; cout <<media;
}
