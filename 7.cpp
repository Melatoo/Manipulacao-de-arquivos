#include <iostream>
#include <fstream>

using namespace std;

int main () {
	
	int valor;
	ifstream leitura ("binario");
	leitura.read ( (char *) (&valor), sizeof(int));
	cout << valor;
	leitura.close();
}
