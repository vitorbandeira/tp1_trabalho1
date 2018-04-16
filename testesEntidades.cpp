#include "testesEntidades.h"
#include <string.h>

void TUcLeitor::SetUp(){
    leitor = new cLeitor();
	estado = SUCESSO;
}

void TUcLeitor::TearDown(){
	delete leitor;
}

void TUcLeitor::TestarSucesso()
{
    try
    {
        leitor->setNome(NOME_TESTE);
        leitor->setSobrenome(SOBRENOME_TESTE);
        leitor->setCorreioEletronico(CORREIO_ELETRONICO_TESTE);
        leitor->setSenha(SENHA_TESTE);
        if (strcmp (leitor->getNome(), NOME_TESTE) != 0 || strcmp (leitor->getSobrenome(), SOBRENOME_TESTE) != 0 || strcmp (leitor->getCorreioEletronico(), CORREIO_ELETRONICO_TESTE) != 0 || strcmp (leitor->getSenha(), SENHA_TESTE) != 0)
        {
            estado = FALHA;
        }
        else
            cout << "Teste de SUCESSO para ENTIDADE LEITOR executado com exito!" << endl;
    }
    catch(invalid_argument excecao)
    {
        estado = FALHA;
    }

}


int TUcLeitor::run(){
	SetUp();
    TestarSucesso();
    TestarFalha();
    TearDown();
    return estado;
}
