#include <iostream>

using namespace std;

int main()
{

    int numeroMissoes;
    int totalExperiencia = 0;

    cout << "quantas missões foram completadas?";
    cin >> numeroMissoes;

    for (int i = 0; i < numeroMissoes;)
    {
        int experienciamissao;

        cout << "Digite a quantidade de pontos de experiência ganhos na missão " << (i + 1) << ":";
        cin >> experienciamissao;

        totalExperiencia += experienciamissao;

        int nivelAtual = totalExperiencia / 1000;
        int experienciaParaProximoNivel = 1000 - (totalExperiencia % 1000);

        if (experienciaParaProximoNivel == 1000)
        {
            experienciaParaProximoNivel = 0;
        }

        cout << "Com" << totalExperiencia << " pontos de experiência, o nível atual do personagem é: " << nivelAtual << endl;
        cout << "Experiência restante para o próximo nível: " << experienciaParaProximoNivel << endl;
    }

    return 0;
}
