#include <iostream>
#include <fstream>

using namespace std;

int main () {
	ifstream leitura("produtos");
	
	if (leitura) {
		string frase;
		while (getline(leitura, frase)) {
			cout << frase << endl;
		}
	} else
	cout << "Não existe esse arquivo";
}
