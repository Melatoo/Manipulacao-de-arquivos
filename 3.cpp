#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream leitura("frases.txt");
	
	if (leitura) {
		string frase;
		while (getline(leitura, frase)) {
			cout << frase << endl;
		}
	} else
	cout << "Não existe esse arquivo";
}
