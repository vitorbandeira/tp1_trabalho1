#include <iostream>
#include "dominios.h"
using namespace std;

bool Minuscula(char ch){
	if('a' <= ch && ch <= 'z')
		return true;
	return false;
}

bool Maiuscula(char ch){
	if('A' <= ch && ch <= 'Z')
		return true;
	return false;
}

bool Letra(char ch){
	if(Minuscula(ch) || Maiuscula(ch))
		return true;
	return false;
}

bool Numero(char ch){
	if('1' <= ch && ch <= '9')
		return true;
	return false;
}

//FUNÇÕES DA CLASSE NOME
void cNome::Validade(char str[20]) throw (invalid_argument){
	if(!Maiuscula(str[0]))
		throw invalid_argument ("Não comeca com letra maiuscula");
	for (unsigned int i = 1; i < strlen(string); ++i){
		if(str[i] == '\0')
			break;
		if(!Letra(str[i]))
			throw invalid_argument ("Caracter não alfabetico");
	}
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
