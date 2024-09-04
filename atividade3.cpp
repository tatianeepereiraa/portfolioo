#include <iostream>

using namespace std;

int main () {
    cout << "Bem-vindo ao dano em combate!" << endl;
    
    int numero_ataques;
    double dano_total = 0.0;
    
    cout << "Digite a contagem de ataques: ";
    cin >> numero_ataques;
    
    for (int i = 0; i < numero_ataques; i++) {
        double dano_base; 
        double multiplicador_critico;
        
        cout << "Forneça o dano base do ataque " << (i + 1) << ": ";
        cin >> dano_base;
        
        cout << "Informe o multiplicador de crítico do ataque " << (i + 1) << ": ";
        cin >> multiplicador_critico;
        
        dano_total += dano_base * multiplicador_critico; 
    }
    
    cout << "O total de dano causado é " << dano_total << endl;
    
    return 0;
}
