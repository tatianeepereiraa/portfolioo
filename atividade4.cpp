#include <iostream>

using namespace std;

int main() {

    const int numeroPersonagens = 5;
    double forcaTotal = 0.0, destrezaTotal = 0.0, inteligenciaTotal = 0.0;

   
    for (int i = 0; i < numeroPersonagens; ++i) {
        
        double forca, destreza, inteligencia;
        
        cout << "Personagem " << (i + 1) << ":" << endl;
        
        cout << "Digite a Força: ";
        cin >> forca;
        cout << "Digite a Destreza: ";
        cin >> destreza;
        cout << "Digite a Inteligência: ";
        cin >> inteligencia;

      
        forcaTotal += forca;

        destrezaTotal += destreza;

        inteligenciaTotal += inteligencia;
    }

    
    double mediaForca = forcaTotal / numeroPersonagens;

    double mediaDestreza = destrezaTotal / numeroPersonagens;

    double mediaInteligencia = inteligenciaTotal / numeroPersonagens;


    cout << "Média de Força: " << mediaForca << endl;

    cout << "Média de Destreza: " << mediaDestreza << endl;
    
    cout << "Média de Inteligência: " << mediaInteligencia << endl;

    return 0;
}
