#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	ifstream leitura ("numeros");
	int n;
	
	if (leitura) {
		while (leitura >> n)
		cout << n << endl;
	}
	leitura.close();
	else 
		cout << "Não existe esse arquivo";
}
