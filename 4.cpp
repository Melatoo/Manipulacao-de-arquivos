#include <iostream>
#include <fstream>

using namespace std;

struct produtos {
	string nome;
	int valor;
};

int main () {
	int n;
	cin >> n;
	
	ofstream gravacao ("produtos", ios::app);

	
	produtos v[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i].nome >> v[i].valor;
		gravacao << v[i].nome << endl << " Valor:" << v[i].valor << endl;
	}
}
