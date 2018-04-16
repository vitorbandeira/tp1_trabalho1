#ifndef ENTIDADES_H_DEFINED

#include <iostream>
#include <cstring>
#include "dominios.h"

using namespace std;

class cLeitor
{
private:
	cNome nome;
	cNome sobrenome;
	cCorreioEletronico email;
	cSenha senha;
public:
	cLeitor();
	~cLeitor();

};

class cVocab
{
private:

public:
	cVocab();
	~cVocab();

};

class cTermo
{
private:

public:
	cTermo();
	~cTermo();

};

class cDefinicao
{
private:


public:
	cDefinicao();
	~cDefinicao();

};



#endif //ENTIDADES_H_DEFINED
