#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "testesEntidades.h"

using namespace std;

int main()
{

	TUcNome testeNome;

	switch(testeNome.run()){
		case TUcNome::SUCESSO: cout << "SUCESSO total no T.U. para classe NOME!\n\n";
			break;
		case TUcNome::FALHA: cout << "FALHA total ou parcial no T.U. para classe NOME!\n\n";
			break;
	}

    TUcSobrenome testeSobrenome;

	switch(testeSobrenome.run()){
		case TUcSobrenome::SUCESSO: cout << "SUCESSO total no T.U. para classe SOBRENOME!\n\n";
			break;
		case TUcSobrenome::FALHA: cout << "FALHA total ou parcial no T.U. para classe SOBRENOME!\n\n";
			break;
	}


	TUcTelefone testeTelefone;

	switch(testeTelefone.run()){
		case TUcTelefone::SUCESSO: cout << "SUCESSO total no T.U. para classe TELEFONE!\n\n";
			break;
		case TUcTelefone::FALHA: cout << "FALHA total ou parcial no T.U. para classe TELEFONE!\n\n";
			break;
	}

	/* TUcEndereco testeEndereco;

	switch(testeEndereco.run()){
		case TUcEndereco::SUCESSO: cout << "SUCESSO total no T.U. para classe ENDERECO!\n\n";
			break;
		case TUcEndereco::FALHA: cout << "FALHA total ou parcial no T.U. para classe ENDERECO!\n\n";
			break;
	} */

/*    TUcData testeData;

	switch(testeData.run()){
		case TUcData::SUCESSO: cout << "SUCESSO total no T.U. para classe DATA!\n\n";
			break;
		case TUcData::FALHA: cout << "FALHA total ou parcial no T.U. para classe DATA!\n\n";
			break;
	} */

	TUcCorreioEletronico testeCorreioEletronico;

	switch(testeCorreioEletronico.run()){
		case TUcCorreioEletronico::SUCESSO: cout << "SUCESSO total no T.U. para classe CORREIO ELETRONICO!\n\n";
			break;
		case TUcCorreioEletronico::FALHA: cout << "FALHA total ou parcial no T.U. para classe CORREIO ELETRONICO!\n\n";
			break;
	}

	TUcSenha testeSenha;

	switch(testeSenha.run()){
		case TUcSenha::SUCESSO: cout << "SUCESSO total no T.U. para classe SENHA!\n\n";
			break;
		case TUcSenha::FALHA: cout << "FALHA total ou parcial no T.U. para classe SENHA!\n\n";
			break;
	}

	TUcTextoDef testeTextoDef;

	switch(testeTextoDef.run()){
		case TUcTextoDef::SUCESSO: cout << "SUCESSO total no T.U. para classe TEXTO DE DEFINICAO!\n\n";
			break;
		case TUcTextoDef::FALHA: cout << "FALHA total ou parcial no T.U. para classe TEXTO DE DEFINICAO!\n\n";
			break;
	}

	TUcIdioma testeIdioma;

	switch(testeIdioma.run()){
		case TUcIdioma::SUCESSO: cout << "SUCESSO total no T.U. para classe IDIOMA!\n\n";
			break;
		case TUcIdioma::FALHA: cout << "FALHA total ou parcial no T.U. para classe IDIOMA!\n\n";
			break;
	}

	TUcClasseDeTermo testeClasseDeTermo;

	switch(testeClasseDeTermo.run()){
		case TUcClasseDeTermo::SUCESSO: cout << "SUCESSO total no T.U. para classe CLASSE DE TERMO!\n\n";
			break;
		case TUcClasseDeTermo::FALHA: cout << "FALHA total ou parcial no T.U. para classe CLASSE DE TERMO!\n\n";
			break;
	}

	TUcLeitor testeLeitor;

	switch(testeLeitor.run()){
		case TUcLeitor::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE LEITOR!\n\n";
			break;
	}



	/*//Teste da classe nome
    char name[20] = {"Pedro"};
	cNome n(name);
	cout << n.getNome() << endl;
	strcpy(name, "Coisinha");
	n.setNome(name);
	cout << n.getNome() << endl;

	// Teste da classe telefone
	char numero[14] = {"61 99343-8840"};
	cTelefone num(numero);
	cout << num.getTelefone() << endl;
	strcpy(numero, "12 34567-8910");
	num.setTelefone(numero);
	cout << num.getTelefone() << endl;

	//Teste da classe endereco
	char adress[20] = {"SQSW 301 Bl A A 510"};
    cEndereco ende(adress);
    cout << ende.getEndereco() << endl;
    strcpy(adress ,"@#!$%% sul");
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

	char idioma[4] = {"BRA"};
	cIdioma idi(idioma);
	cout << idi.getIdioma() << endl;
	strcpy(idioma, "ENG");
	idi.setIdioma(idioma);
	cout << idi.getIdioma() << endl;

	//Teste da classe classe de termo
*/

    return 0;
}
