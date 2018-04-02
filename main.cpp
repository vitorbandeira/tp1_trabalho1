#include <iostream>
#include "dominios.h"
#include "entidades.h"
using namespace std;

int main()
{
	//Teste da classe nome
    char name[20] = {"Pedro"};
	cNome n(name);
	cout << n.getNome() << endl;
	strcpy(name, "Coisinha");
	n.setNome(name);
	cout << n.getNome() << endl;

	// Teste da classe telefone

	//Teste da classe endereco
	char adress[20] = {"SQSW 301 Bl A A 510"};
    cEndereco ende(adress);
    cout << ende.getEndereco() << endl;
    strcpy(adress ,"@#!$% sul");
    ende.setEndereco(adress);
    cout << ende.getEndereco() << endl;

	//Teste da classe Data

	//Teste da classe email
	char email[20] = {"pedropacn@gmail.com"};
	cCorreioEletronico corr(email);
	cout << corr.getEmail() << endl;
	strcpy(email, "anaelisa@gmail.com");
	corr.setEmail(email);
	cout << corr.getEmail() << endl;

	//Teste da classe senha

    char senha[9] = {"Abcd1234"};
	cSenha pass(senha);
	cout << pass.getSenha() << endl;
	strcpy(senha, "QWEr9876");
	pass.setSenha(senha);
	cout << pass.getSenha() << endl;

	//Teste da classe texto

	//Teste da classe idioma

	//Teste da classe classe de termo


    return 0;
}
