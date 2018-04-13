#include "testes.h"

void TUNome::SetUp(){
    nome = new cNome();
	estado = SUCESSO;
}

void TUNome::TearDown(){
	delete nome;
}

void TUNome::TestarSucesso(){
	try{
		nome->setNome(valid);
		if(nome->getNome() != valid)
			estado = FALHA;
	}
	catch(invalid_argument execao){
		estado = FALHA;
	}
	cout << "teste de sucesso executado com sucesso" << endl;
}

void TUNome::TestarFalha(){
	try{
		nome->setNome(invalid1);
		if(nome->getNome() != invalid1)
			estado = FALHA;
		nome->setNome(invalid2);
		if(nome->getNome() != invalid2)
			estado = FALHA;
		nome->setNome(invalid3);
		if(nome->getNome() != invalid3)
			estado = FALHA;
	}
	catch(invalid_argument execao){
		cout << "teste de falha executado com sucesso" << endl;
		return;
	}
}

int TUNome::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}
