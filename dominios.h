#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <stdexcept>

using namespace std;

class cNome//e sobrenome
{
private:
	char string[20];
	void Validade(char str[20]) throw (invalid_argument);
public:
	cNome();
	~cNome(){};
	cNome(char str[20]){
		setNome(str);
	}
	inline char * getNome() { return string; }
	inline void setNome (char str [20]) throw(invalid_argument){
		Validade(str);
		strcpy(string, str);
	}

};

class cTelefone
{
private:

public:
	cTelefone();
	~cTelefone();

};

class cEndereco
{
private:
	char string[20];
public:
	cEndereco();
	~cEndereco();

};

class cData
{
public:
	cData();
	~cData();

};

class cCorreioEletronico
{
private:
	char string[20];
public:
	cCorreioEletronico();
	~cCorreioEletronico();
	bool Validade();
};

class cSenha
{
private:
	char string[8];
public:
	cSenha();
	~cSenha();
	bool Validade();
};

class cTexto
{
private:
	char string[30];
public:
	cTexto();
	~cTexto();

};

class cIdioma
{
private:
	char string[3];
public:
	cIdioma();
	~cIdioma();
	bool Validade();
};

class cClasseDeTermo
{
private:

public:
	cClasseDeTermo();
	~cClasseDeTermo();

};


#endif // DOMINIOS_H_INCLUDED
