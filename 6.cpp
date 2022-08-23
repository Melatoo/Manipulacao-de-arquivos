#include <iostream>
#include <fstream>

using namespace std;

int main () {
	int n = 123;
	
	ofstream gravacao ("binario");
	
	gravacao.write( (const char *) (&n), sizeof (int));
	
	gravacao.close();
}
