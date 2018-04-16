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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		if(strcmp(nome->getNome(), valid))
=======
		if(nome->getNome() != valid){
			cout << "CHEGUEI AQUI" << endl;
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
		if(nome->getNome() != valid){
			cout << "CHEGUEI AQUI" << endl;
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
		if(nome->getNome() != valid){
			cout << "CHEGUEI AQUI" << endl;
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
			estado = FALHA;
		}
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
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	TestarSucesso();
	TestarFalha();
=======
    TestarFalha();
    TestarSucesso();
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
    TestarFalha();
    TestarSucesso();
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
=======
    TestarFalha();
    TestarSucesso();
>>>>>>> 47cb2b1fb0be02c60ff42673867b8c03c66564f0
    TearDown();
    return estado;
}
