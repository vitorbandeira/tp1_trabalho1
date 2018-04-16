<<<<<<< HEAD
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <stdexcept>
#include <string.h>

using namespace std;

class cNome
{
private:
    char string[20];
    void Validade(const char str[20]) throw (invalid_argument);
public:
    cNome() {};
    ~cNome() {};
    cNome(char string[20])
    {
        setNome(string);
    }
    inline char * getNome()
    {
        return string;
    }
    inline void setNome (const char str [20]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }

};

class cSobrenome
{
private:
    char string[20];
    void Validade(const char str[20]) throw (invalid_argument);
public:
    cSobrenome() {};
    ~cSobrenome() {};
    cSobrenome(char string[20])
    {
        setSobrenome(string);
    }
    inline char * getSobrenome()
    {
        return string;
    }
    inline void setSobrenome (const char str [20]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }

};

class cTelefone
{
private:
    //AA NNNNN–NNNN
    char numero[14];
    void Validade(const char str[14]) throw (invalid_argument);
public:
    cTelefone() {};
    ~cTelefone() {};
    cTelefone(char str[14])
    {
        setTelefone(str);
    };
    inline char * getTelefone()
    {
        return numero;
    }
    inline void setTelefone(const char str[14]) throw(invalid_argument)
    {
        Validade(str);
        strcpy(numero, str);
    }

};

class cEndereco
{
private:
    char string[40];
    void Validade(const char str[40]) throw (invalid_argument);
public:
    cEndereco() {};
    ~cEndereco() {};
    cEndereco(char str[40])
    {
        setEndereco(str);
    }
    inline void setEndereco(const char str[40]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getEndereco()
    {
        return string;
    }
};

/*class cData
{
private:

    const static int PRIMEIRA_BARRA = 2;
    const static int SEGUNDA_BARRA = 5;


    char string[11];
    void Validade(const char str[11]) throw (invalid_argument);
public:
    cData() {};
    ~cData() {};
    cData(char str[11])
    {
        setData(str);
    }
    void inline setData(const char str[11]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string,str);
    }
    inline char *getData()
    {
        return string;
    }

}; */



class cCorreioEletronico
{
private:

    char string[30];
    void Validade(const char str[30]) throw (invalid_argument);
public:
    cCorreioEletronico() {};
    ~cCorreioEletronico() {};
    cCorreioEletronico(char str[30])
    {
        setCorreioEletronico(str);
    }
    inline void setCorreioEletronico(const char str[30]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getCorreioEletronico()
    {
        return string;
    }
};

class cSenha
{
private:
    char string[15];
    void Validade(const char str[15]) throw (invalid_argument);
public:
    cSenha() {};
    ~cSenha() {};
    cSenha(char str[15])
    {
        setSenha(str);
    }
    inline void setSenha(const char str[15]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getSenha()
    {
        return string;
    }
};

class cTextoDef
{
private:
    char string[50];
    void Validade(const char str[50]) throw (invalid_argument);
public:
    cTextoDef() {};
    ~cTextoDef() {};
    cTextoDef(char str[50])
    {
        Validade(str);
        setTextoDef(str);
    }
    inline void setTextoDef(const char str[50]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getTextoDef()
    {
        return string;
    }
};

class cIdioma
{
private:
    const char* INGLES = "ING";
    const char* FRANCES = "FRA";
    const char* ALEMAO= "GER";
    const char* ITALIANO = "ITA";
    const char* PORTUGUES = "POR";
    const char* ESPANHOL = "SPA";


    char string[4];
    void Validade(const char str[4]) throw (invalid_argument);
public:
    cIdioma() {};
    ~cIdioma() {};
    cIdioma(char str[4])
    {
        setIdioma(str);
    }
    inline void setIdioma(const char str[4]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getIdioma()
    {
        return string;
    }
};

class cClasseDeTermo
{
private:
    const char* TERMO_PT = "PT";
    const char* TERMO_NP = "NP";

    char string[3];
    void Validade(const char str[3]) throw (invalid_argument);
public:
    cClasseDeTermo() {};
    ~cClasseDeTermo() {};
    cClasseDeTermo(char str[3])
    {
        setClasseDeTermo(str);
    }
    inline void setClasseDeTermo(const char str[3]) throw (invalid_argument)
    {
        Validade(str);
        strcpy(string, str);
    }
    inline char * getClasseDeTermo()
    {
        return string;
    }
};


#endif // DOMINIOS_H_INCLUDED
=======
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
	inline void setTermo(char str[4]){
		Validade(str);
		strcpy(string, str);
	}
	inline char * getTermo(){ return string; }
};


#endif // DOMINIOS_H_INCLUDED
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
