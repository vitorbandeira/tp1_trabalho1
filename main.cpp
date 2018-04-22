#include <iostream>
#include "dominios.h"
#include "entidades.h"
#include "testes.h"
#include "testesEntidades.h"


/* Alunos: Vitor Ribas Bandeira (160148421) e Pedro Nunes (160141044) */

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

    TUcEndereco testeEndereco;

	switch(testeEndereco.run()){
		case TUcEndereco::SUCESSO: cout << "SUCESSO total no T.U. para classe ENDERECO!\n\n";
			break;
		case TUcEndereco::FALHA: cout << "FALHA total ou parcial no T.U. para classe ENDERECO!\n\n";
			break;
	}

    TUcData testeData;

	switch(testeData.run()){
		case TUcData::SUCESSO: cout << "SUCESSO total no T.U. para classe DATA!\n\n";
			break;
		case TUcData::FALHA: cout << "FALHA total ou parcial no T.U. para classe DATA!\n\n";
			break;
	}

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
        case TUcLeitor::FALHA: cout << "FALHA total ou parcial no T.U. para ENTIDADE LEITOR!!\n\n";
			break;
	}

	TUcDesenvolvedor testeDesenvolvedor;

	switch(testeDesenvolvedor.run()){
		case TUcDesenvolvedor::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE DESENVOLVEDOR!\n\n";
			break;
        case TUcDesenvolvedor::FALHA: cout << "FALHA total ou parcial no T.U. para ENTIDADE DESENVOLVEDOR!!\n\n";
			break;
	}

	TUcAdministrador testeAdministrador;

	switch(testeAdministrador.run()){
		case TUcAdministrador::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE ADMINISTRADOR!\n\n";
			break;
        case TUcAdministrador::FALHA: cout << "FALHA total ou parcial no T.U. para ENTIDADE ADMINISTRADOR!!\n\n";
			break;
	}

	TUcVocabControlado testeVocabControlado;

	switch(testeVocabControlado.run()){
		case TUcVocabControlado::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE VOCABULARIO CONTROLADO!\n\n";
			break;
        case TUcVocabControlado::FALHA: cout << "FALHA total ou parcial no T.U. para VOCABULARIO CONTROLADO!!\n\n";
			break;
	}

	TUcTermo testeTermo;

	switch(testeTermo.run()){
		case TUcTermo::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE TERMO!\n\n";
			break;
        case TUcTermo::FALHA: cout << "FALHA total ou parcial no T.U. para ENTIDADE TERMO!!\n\n";
			break;
	}

	TUcDefinicao testeDefinicao;

	switch(testeDefinicao.run()){
		case TUcDefinicao::SUCESSO: cout << "SUCESSO total no T.U. para ENTIDADE DEFINICAO!\n\n";
			break;
        case TUcDefinicao::FALHA: cout << "FALHA total ou parcial no T.U. para ENTIDADE DEFINICAO!!\n\n";
			break;
	}

    return 0;
}
