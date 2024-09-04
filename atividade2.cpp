#include <iostream>

using namespace std;

int main()
{
    const int pontosTotais = 100;

    int atributos[3] = {0};

    int pontosRestantes = pontosTotais;

    string nomes[3] = {"Força", "Destreza", "Inteligência"};

    cout << "Distribuição de Pontos de Habilidade" << endl;

    while (pontosRestantes > 0)
    {

        for (int i = 0; i < 3 && pontosRestantes > 0; ++i)
        {

            cout << "Pontos restantes: " << pontosRestantes << endl;

            cout << "Digite a quantidade de pontos para " << nomes[i] << ": ";

            int pontos;

            cin >> pontos;

            if (pontos < 0 || pontos > pontosRestantes)
            {

                cout << "Quantidade inválida. Digite um valor entre 0 e " << pontosRestantes << "." << endl;
                --i;
            }

            atributos[i] += pontos;

            pontosRestantes -= pontos;
        }
    }

    cout << "Distribuição Final de Pontos:" << endl;

    for (int i = 0; i < 3; ++i)
    {

        cout << nomes[i] << ": " << atributos[i] << endl;
    }

    return 0;
}
