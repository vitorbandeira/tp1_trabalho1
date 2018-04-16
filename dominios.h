#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <stdexcept>

using namespace std;

class cNome//e sobrenome
{
private:
	char string[21];
	void Validade(const char str[21]) throw (invalid_argument);
public:
	cNome(){};
	~cNome(){};
	inline char * getNome() { return string; }
	inline void setNome (const char str [21]) throw(invalid_argument){
		Validade(str);
		strcpy(string, str);
	}

};

class cTelefone
{
private:
	//AA NNNNN–NNNN
	char numero[14];
	void Validade(char str[14]) throw (invalid_argument);
public:
	cTelefone(){};
	~cTelefone(){};
	cTelefone(char str[14]){ setTelefone(str); };
	inline char * getTelefone(){ return numero; }
	inline void setTelefone(char str[14]) throw(invalid_argument){
		Validade(str);
		strcpy(numero, str);
	}

};

class cEndereco
{
private:
	char string[21];
	void Validade(char str[21]) throw (invalid_argument);
public:
	cEndereco(){};
	~cEndereco(){};
	cEndereco(char str[21]){ setEndereco(str); }
	inline void setEndereco(char str[21]) throw (invalid_argument){
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
	void Validade(int d, int m, int a) throw (invalid_argument);
public:
	cData(){};
	~cData(){};
	cData(int d, int m, int a){ setData(d, m, a); }
	void inline setData(int d, int m, int a) throw (invalid_argument){
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
	char string[21];
	void Validade(char str[21]) throw (invalid_argument);
public:
	cCorreioEletronico(){};
	~cCorreioEletronico(){};
	cCorreioEletronico(char str[21]){ setEmail(str); }
	inline void setEmail(char str[21]) throw (invalid_argument){
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
	char string[9];
	void Validade(char str[9]) throw (invalid_argument);
public:
	cSenha(){};
	~cSenha(){};
	cSenha(char str[9]){ setSenha(str); }
	inline void setSenha(char str[9]) throw (invalid_argument){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getSenha(){ return string; }
};

class cTexto
{
private:
	char string[31];
	void Validade(char str[31]) throw (invalid_argument);
public:
	cTexto(){};
	~cTexto(){};
	cTexto(char str[31]){
		Validade(str);
		setTexto(str);
	}
	inline void setTexto(char str[31]) throw (invalid_argument){
		strcpy(string, str);
	}
	inline char * getTexto(){ return string; }
};

class cIdioma
{
private:
	char string[4];
	void Validade(char str[4]) throw (invalid_argument);
public:
	cIdioma(){};
	~cIdioma(){};
	cIdioma(char str[4]){ setIdioma(str); }
	inline void setIdioma(char str[4]) throw (invalid_argument){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getIdioma(){ return string; }
};

class cClasseDeTermo
{
private:
	char string[2];
	void Validade(char str[2]) throw (invalid_argument);
public:
	cClasseDeTermo(){};
	~cClasseDeTermo(){};
	cClasseDeTermo(char str[2]){
		setTermo(str);
	}
	inline void setTermo(char str[4]) throw (invalid_argument){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getTermo(){ return string; }
};


#endif // DOMINIOS_H_INCLUDED
