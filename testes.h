#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

class TUNome
{
private:
    const char valid[20] = "Pedro";
	const char invalid1[20] = "pedro";
	const char invalid2[20] = "Pedro2";
	const char invalid3[20] = "Pedro.";

	cNome *nome;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run(){};

};

#endif // TESTES_H_INCLUDED
