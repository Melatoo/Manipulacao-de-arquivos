#include <iostream>
#include <fstream>

using namespace std;

struct carro {
	string modelo, cor;
	int ano;
};

int main () {
	int n;
	cin >> n;
	carro v[n];
	for (int i = 0; i < n; i++) {
		cin >> v[i].modelo >> v[i].ano >> v[i].cor;
	}
	
	ofstream gravacao ("carros");
	gravacao.write ((const char *) (v) , sizeof(carro) * n);
	gravacao.close();
}
