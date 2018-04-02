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
	char area[2];
	char numero[9];
public:
	cTelefone();
	~cTelefone();

};

class cEndereco
{
private:
	char string[20];
	void Validade(char str[20]);
public:
	cEndereco();
	~cEndereco(){};
	cEndereco(char str[20]){ setEndereco(str); }
	inline void setEndereco(char str[20]){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getEndereco(){ return string; }
};

class cData
{
private:
	int dia;
	int mes;
	int ano;
	Validade(int d, int m, int a);
public:
	cData();
	~cData();
	cData(int d, int m, int a){ setData(d, m, a); }
	void inline setData(int d, int m, int a){
		Validade(d, m, a);
		dia = d; mes = m; ano = a;
	}
	inline int getDia() { return dia; }
	inline int getMes() { return mes; }
	inline int getAno() { return ano; }

};

class cCorreioEletronico
{
private:
	char string[20];
	void Validade(char str[20]);
public:
	cCorreioEletronico();
	~cCorreioEletronico();
	cCorreioEletronico(char str[20]){ setEmail(str); }
	inline void setEmail(char str[20]){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getEmail(){
		return string;
	}
};

class cSenha
{
private:
	char string[8];
	void Validade(char str[8]);
public:
	cSenha();
	~cSenha();
	cSenha(char * str[8]){ setSenha(str); }
	inline void setSenha(char * str[8]){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getSenha(){ return string; }
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
	void Validade(char str[3]);
public:
	cIdioma();
	~cIdioma();
	cIdioma(char str[3]){ setIdioma(str); }
	inline void setIdioma(char str[3]){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getIdioma(){ return string; }
};

class cClasseDeTermo
{
private:

public:
	cClasseDeTermo();
	~cClasseDeTermo();

};


#endif // DOMINIOS_H_INCLUDED
