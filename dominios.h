#include <iostream>
#include <cstring>

using namespace std;

class cNome//e sobrenome
{
private:
	char string[20];
public:
	cNome();
	cNome(char str[20]){ strcpy(string, str); }
	inline char * getNome() { return string; }
	inline void setNome(char str [20]) { strcpy(string, str); }
	~cNome();

};

class cTelefone
{
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

};

class cSenha
{
private:
	char string[8];
public:
	cSenha();
	~cSenha();

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

};

class cClasseDeTermo
{
private:

public:
	cClasseDeTermo();
	~cClasseDeTermo();

};
