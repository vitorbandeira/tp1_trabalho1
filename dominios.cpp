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

//FUNÇÕES DA CLASSE TELEFONE

void cTelefone::Validade(char str[14]) throw (invalid_argument){
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
};

//FUNÇÕES DA CLASSE ENDEREÇO

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
	if(str[0] == ' ')
		throw invalid_argument ("Endereco nao pode comecar com espaco vazio.");
	if (str[strlen(str)-1] == ' ')
		throw invalid_argument ("Endereco nao pode terminar com espaco vazio.");
	for (int i = 0; i < strlen(str)-1; ++i)
		if(str[i] == ' ' && str[i+1] == ' ')
			throw invalid_argument ("Dois espacos em branco seguidos.");
}

//FUNÇÕES DA CLASSE DATA

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
		throw invalid_argument ("Email com parte compleramente numerica");
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

void cSenha::Validade(char str[9]) throw (invalid_argument){
	bool upper = false, lower = false, number = false;
	if(strlen(str) >= 9)
		throw invalid_argument ("Tamanho insuficiente.");
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

void cTexto::Validade(char str [30]) throw (invalid_argument){
}

//FUNÇÕES DA CLASSE IDIOMA

void cIdioma::Validade(char str[3]) throw (invalid_argument){
	for (int i = 0; i < 3; ++i)
		if(!Maiuscula(str[i]))
			throw invalid_argument ("Idioma invalido.");
}

//FUNÇÕES DA CLASSE CLASSE DE TERMO

void cClasseDeTermo::Validade(char str [30]) throw (invalid_argument){
	if(strcmp(str, "PF") || strcmp(str, "NP"))
		throw invalid_argument ("Termo invalido");
}
