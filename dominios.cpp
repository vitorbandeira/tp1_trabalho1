#include <iostream>
#include "dominios.h"
using namespace std;

bool Minuscula(char ch){
	if(65 <= ch && ch <= 90)
		return true;
	return false;
}

bool Maiuscula(char ch){
	if(97 <= ch && ch <= 122)
		return true;
	return false;
}

bool Letra(char ch){
	if(Minuscula(ch) || Maiuscula(ch))
		return true;
	return false;
}

bool Numero(char ch){
	if(48 <= ch && ch <= 57)
		return true;
	return 0;
}

//FUNÇÕES DA CLASSE NOME
bool cNome::Validade(){
	bool erro = false;
	if(!Maiuscula(string[0]))// não é letra maiuscula
		erro = true;
	for (unsigned int i = 1; i < strlen(string); ++i)
		if(!Letra(string[i]))//Não é letra
			erro = true;
	return erro;
}

//FUNÇÕES DA CLASSE TELEFONE



//FUNÇÕES DA CLASSE ENDEREÇO



//FUNÇÕES DA CLASSE DATA



//FUNÇÕES DA CLASSE CORREIO ELETRÔNICO



//FUNÇÕES DA CLASSE SENHA

bool cSenha::Validade(){
	bool upper = false, lower = false, number = false;
	for (int i = 0; i < 8; ++i){
		if(Maiuscula(string[i]))
			upper = true;
		if(Minuscula(string[i]))
			lower = true;
		if(Numero(string[i]))
			number = true;
	}
	if(upper && lower && number)
		return true;
	return false;
}

//FUNÇÕES DA CLASSE TEXTO



//FUNÇÕES DA CLASSE IDIOMA

bool cIdioma::Validade(){
	for (int i = 0; i < 3; ++i)
		if(!Maiuscula(string[i]))
			return false;
	return true;
}

//FUNÇÕES DA CLASSE CLASSE DE TERMO
