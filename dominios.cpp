#include "dominios.h"

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
	if('0' <= ch && ch <= '9')
		return true;
	return false;
}

//FUNÇÕES DA CLASSE NOME
void cNome::Validade(const char str[20]) throw (invalid_argument){
	if(!Maiuscula(str[0]))
		throw invalid_argument ("Não comeca com letra maiuscula");
	for (unsigned int i = 1; i < strlen(string); ++i){
		if(str[i] == '\0')
			break;
		if(!Letra(str[i]))
			throw invalid_argument ("Caracter não alfabetico");
	}
}

//MÉTODOS DA CLASSE SOBRENOME

void cSobrenome::Validade(const char str[20]) throw (invalid_argument){
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

void cTelefone::Validade(const char str[14]) throw (invalid_argument){
	for (int i = 0; i < 14; ++i){
		if(i == 2)
			if(str[i] != ' ')
				throw invalid_argument ("Numero invalido.");
		else if(i == 8)
			if(str[i] != '-')
				throw invalid_argument ("Numero invalido.");
		else
			if(!Numero(str[i]))
				throw invalid_argument ("Numero invalido.");
	}
}

//FUNÇÕES DA CLASSE ENDEREÇO

<<<<<<< HEAD
void cEndereco::Validade(const char str[40]) throw (invalid_argument) {
=======
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
void cEndereco::Validade(char str[21]) throw (invalid_argument){
=======
void cEndereco::Validade(char str[21]){
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
void cEndereco::Validade(char str[21]){
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
void cEndereco::Validade(char str[21]){
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
	if(str[0] == ' ')
		throw invalid_argument ("Endereco nao pode comecar com espaco vazio.");
	if (str[strlen(str)-1] == ' ')
		throw invalid_argument ("Endereco nao pode terminar com espaco vazio.");
    if (strlen(str)>20)
        throw invalid_argument ("Endereco com mais de 20 caracteres.");
    for (unsigned int i = 0; i < strlen(str)-1; ++i){
		if(str[i] == ' ' && str[i+1] == ' ')
			throw invalid_argument ("Dois espacos em branco seguidos.");
		if(!Letra(str[i]))
			throw invalid_argument ("Caracter não alfabetico");
	}
}

//FUNÇÕES DA CLASSE DATA

<<<<<<< HEAD
/*void cData::Validade(const char str[11]) throw (invalid_argument) {

    const char LIMITE_ANOS[5] = "2099";
    const char LIMITE_MESES[3] = "12";

    const char MINIMO_ANOS[5] = "1900";
    const char MINIMO_MESES[3] = "01";
    const char MINIMO_DIAS[3] = "01";

    int LIMITE_DIAS;

	if (str[4] == 1 ||s tr[4]== 3 || str[4] == 5 || str[4] == 7 || str[4] == 9 || (str[3] == 1 && str [4]==0) || (str[3] == 1 && str [4]==2) )
		LIMITE_DIAS = 31;
	else if (str[4] == 4 || str[4] == 6 || str[4] == 9 || str[3] == 1 && str [4]==1))
		LIMITE_DIAS = 30;

	if ( str[4] == 2)
		if (str[4] == 4 % 4 == 0 && (a % 100 != 0 || a % 400 == 0))//ano bissexto
			LIMITE_DIAS = 29;
		else
			LIMITE_DIAS = 28;

	if (str[PRIMEIRA_BARRA] != '/' && str[SEGUNDA_BARRA] != '/' )
		throw invalid_argument ("Formatacao incorreta.");
	if (str[0]< MINIMO_DIAS[0] || str[1]< MINIMO_DIAS[1] || str[1]>)
		throw invalid_argument ("Dia menor do que o permitido.");

/*	else if ( str> LIMITE_ANOS)
		throw invalid_argument ("Ano maior do que o permitido.");

	if (1 > MINIMO_MESES || m < LIMITE_MESES)
		throw invalid_argument ("Mes invalido.");

	int LIMITE_DIAS;

	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 9 || m == 10 || m == 12)
		LIMITE_DIAS = 31;
	else if (m == 4 || m == 6 || m == 9 || m == 11)
		LIMITE_DIAS = 30;

	if (m == 2)
		if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))//ano bissexto
			LIMITE_DIAS = 29;
		else
			LIMITE_DIAS = 29;

	if (d < MINIMO_DIAS || d > LIMITE_DIAS)
		throw invalid_argument ("Dia invalido.");
} */
//FUNÇÕES DA CLASSE CORREIO ELETRÔNICO

void cCorreioEletronico::Validade(const char str[30]) throw (invalid_argument) {
=======
void cData::Validade(int d, int m, int a) throw (invalid_argument){
	if (a < 1900)
		throw invalid_argument ("Ano menor do que o permitido.");
	else if (a > 2099)
		throw invalid_argument ("Ano maior do que o permitido.");

	if (1 > m || m < 12)
		throw invalid_argument ("Mes invalido.");

	int limite;

	if (m == 1 && m == 3 && m == 5 && m == 7 && m == 9 && m == 10 && m == 12)
		limite = 31;
	else if (m == 4 && m == 6 && m == 9 && m == 11)
		limite = 30;

	if (m == 2)
		if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0))//ano bissexto
			limite = 29;
		else
			limite = 29;

	if (1 > d || d > limite)
		throw invalid_argument ("Dia invalido.");
}

//FUNÇÕES DA CLASSE CORREIO ELETRÔNICO

void cCorreioEletronico::Validade(char str[20]) throw (invalid_argument){
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
	int posicao = -1;
	//Parte local
	for (int i = 0; i < strlen(str); ++i)
		if (str[i] == '@')
			posicao = i;
	if(posicao == -1)
		throw invalid_argument ("Sem @ no endeco de email.");
	if (str[0] == '.')
		throw invalid_argument ("Email iniciado por '.'.");
	if (str[posicao-1] == '.')
		throw invalid_argument ("Email com '.' antes de @.");
	//Domínio
	bool numerico = true;
	for (int i = posicao+1; i < strlen(str); ++i)
		if(!Numero(str[i]))
			numerico = false;
	if(numerico)
		throw invalid_argument ("Email com parte completamente numerica");
	if(str[posicao+1] == '.')
		throw invalid_argument ("Email com '.' depois de @.");
	if(str[strlen(str)-1] == '.')
		throw invalid_argument ("Email terminado por '.'.");
	if(str[posicao+1] == '-')
		throw invalid_argument ("Email com '-' depois de @.");
	if(str[strlen(str)-1] == '-')
		throw invalid_argument ("Email terminado por '-'.");

}

//FUNÇÕES DA CLASSE SENHA

<<<<<<< HEAD
void cSenha::Validade(const char str[15]) throw (invalid_argument) {
=======
void cSenha::Validade(char str[9]) throw (invalid_argument){
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
	bool upper = false, lower = false, number = false;
	if(strlen(str) >= 9)
		throw invalid_argument ("Tamanho de senha excede o permitido.");
	for (int i = 0; i < 8; ++i){
		if(Numero(str[i]))
			number = true;
		if(Maiuscula(str[i]))
			upper = true;
		if(Minuscula(str[i]))
			lower = true;
	}
	if(!upper)
		throw invalid_argument ("Sem letra maiuscula.");
	if(!lower)
		throw invalid_argument ("Sem letra minuscula.");
	if(!number)
		throw invalid_argument ("Sem caracter numerico.");
}

//FUNÇÕES DA CLASSE TEXTO

<<<<<<< HEAD
void cTextoDef::Validade(const char str [50]) throw (invalid_argument) {

    if(strlen(str) > 30)
		throw invalid_argument ("Tamanho de texto excede o permitido.");
=======
void cTexto::Validade(char str [30]) throw (invalid_argument){
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
}
//FUNÇÕES DA CLASSE IDIOMA

<<<<<<< HEAD
void cIdioma::Validade(const char str[4]) throw (invalid_argument) {

=======
void cIdioma::Validade(char str[3]) throw (invalid_argument){
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
	for (int i = 0; i < 3; ++i)
		if(!Maiuscula(str[i]))
			throw invalid_argument ("Idioma invalido em formato.");
    if (strcmp(str,INGLES)!=0 && strcmp(str,FRANCES)!=0 && strcmp(str,PORTUGUES)!=0 && strcmp(str,ITALIANO)!=0 && strcmp(str,ESPANHOL)!=0 && strcmp(str,ALEMAO)!=0)
        throw invalid_argument ("Idioma nao suportado.");
}

//FUNÇÕES DA CLASSE CLASSE DE TERMO

<<<<<<< HEAD
void cClasseDeTermo::Validade(const char str [3]) throw (invalid_argument){


	if(strcmp(str, TERMO_PT) != 0 && strcmp(str, TERMO_NP) != 0)
=======
void cClasseDeTermo::Validade(char str [30]) throw (invalid_argument){
	if(strcmp(str, "PF") || strcmp(str, "NP"))
>>>>>>> 17c22c214878a518a2a88412b851cd4be712be89
		throw invalid_argument ("Termo invalido");
}
