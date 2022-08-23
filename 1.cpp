#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int n;
	ofstream gravacao ("numeros", ios::app);
	
	for (int i = 0; i <= 10; i++) {
		cin >> n;
		gravacao << n << endl;
	}
	
	gravacao.close();
	return 0;
}
