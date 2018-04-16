#ifndef ENTIDADES_H_DEFINED

#include <iostream>
#include <cstring>
#include "dominios.h"

using namespace std;

class cLeitor
{
private:
	cNome nome;
	cSobrenome sobrenome;
	cCorreioEletronico correioeletronico;
	cSenha senha;
public:
	cLeitor();
	~cLeitor();
	void inline setNome(const cNome *nome){
        this->nome = nome;
	}

	inline cNome getNome(){
        return nome;
	}

	void inline setSobrenome(const cSobrenome &sobrenome){
	    this->sobrenome = sobrenome;
	}

	inline cSobrenome getSobrenome(){
        return sobrenome;
	}

	void inline setCorreioEletronico(const cCorreioEletronico &correioeletronico){
	    this->correioeletronico = correioeletronico;
	}

	inline cCorreioEletronico getCorreioEletronico(){
        return correioeletronico;
	}

	void inline setSenha(const cSenha &senha){
	    this->senha = senha;
	}

	inline cSenha getSenha(){
        return senha;
	}

};

class cDesenvolvedor
{
private:
    cNome nome;
	cSobrenome sobrenome;
	cCorreioEletronico correioeletronico;
	cSenha senha;
	//cData data;

public:
	cDesenvolvedor();
	~cDesenvolvedor();

	void inline setNome(const cNome &nome){
	    this->nome = nome;
	}

	inline cNome getNome(){
        return nome;
	}

	void inline setSobrenome(const cSobrenome &sobrenome){
	    this->sobrenome = sobrenome;
	}

	inline cSobrenome getSobrenome(){
        return sobrenome;
	}

	void inline setCorreioEletronico(const cCorreioEletronico &correioeletronico){
	    this->correioeletronico = correioeletronico;
	}

	inline cCorreioEletronico getCorreioEletronico(){
        return correioeletronico;
	}

	void inline setSenha(const cSenha &senha){
	    this->senha = senha;
	}

	inline cSenha getSenha(){
        return senha;
	}

	/*void inline setData(const cData &data){
	    this->data = data;
	}

	inline cData getData(){
        return data;
	}*/


};

class cAdministrador
{
private:
    cNome nome;
	cSobrenome sobrenome;
	cCorreioEletronico correioeletronico;
	cSenha senha;
	//cData data;
	cEndereco endereco;


public:
	cAdministrador();
	~cAdministrador();

	void inline setNome(const cNome &nome){
	    this->nome = nome;
	}

	inline cNome getNome(){
        return nome;
	}

	void inline setSobrenome(const cSobrenome &sobrenome){
	    this->sobrenome = sobrenome;
	}

	inline cSobrenome getSobrenome(){
        return sobrenome;
	}

	void inline setCorreioEletronico(const cCorreioEletronico &correioeletronico){
	    this->correioeletronico = correioeletronico;
	}

	inline cCorreioEletronico getCorreioEletronico(){
        return correioeletronico;
	}

	void inline setSenha(const cSenha &senha){
	    this->senha = senha;
	}

	inline cSenha getSenha(){
        return senha;
	}

	/*void inline setData(const cData &data){
	    this->data = data;
	}

	inline cData getData(){
        return data;
	}*/

	/*void inline setEndereco(const cEndereco &endereco){
	    this->endereco = endereco;
	}

	inline cEndereco getEndereco(){
        return endereco;
	}*/


};

class cVocabControlado
{
private:
    cNome nome;
    cIdioma idioma;
    //cData data;

public:
	cVocabControlado();
	~cVocabControlado();

	void inline setNome(const cNome &nome){
	    this->nome = nome;
	}

	inline cNome getNome(){
        return nome;
	}

	void inline setIdioma(const cIdioma &idioma){
	    this->idioma = idioma;
	}

	inline cIdioma getIdioma(){
        return idioma;
	}

    /*void inline setData(const cData &data){
	    this->data = data;
	}

	inline cData getData(){
        return data;
	}*/
};



class cTermo
{
private:
    cNome nome;
    cClasseDeTermo classedetermo;
    //cData data;

public:
	cTermo();
	~cTermo();

	void inline setNome(const cNome &nome){
	    this->nome = nome;
	}

	inline cNome getNome(){
        return nome;
	}

	/*void inline setData(const cData &data){
	    this->data = data;
	}

	inline cData getData(){
        return data;
	}*/

	void inline setClasseDeTermo(const cClasseDeTermo &classedetermo){
	    this->classedetermo = classedetermo;
	}

	inline cClasseDeTermo getClasseDeTermo(){
        return classedetermo;
	}

};

class cDefinicao
{
private:
    cTextoDef textodef;
//    cData data;

public:
	cDefinicao();
	~cDefinicao();

    /*void inline setData(const cData &data){
	    this->data = data;
	}

	inline cData getData(){
        return data;
	}*/

	void inline setTextoDef(const cTextoDef &textodef){
	    this->textodef = textodef;
	}

	inline cTextoDef getTextoDef(){
        return textodef;
	}
};



#endif //ENTIDADES_H_DEFINED
