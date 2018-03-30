#include <iostream>
#include "dominios.h"
#include "entidades.h"
using namespace std;

int main()
{
    char name[20] = {"pedro"};
	cNome n(name);
	// n.setNome(name);
	cout << n.getNome() << endl;
	strcpy(name, "Coisinha");
	n.setNome(name);
	cout << n.getNome() << endl;

    return 0;
}
