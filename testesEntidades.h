#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"



class TUcLeitor {

private:

    // Defini��es de constantes para evitar numeros m�gicos.

    const char NOME_TESTE[20] = "Ricardo";
    const char SOBRENOME_TESTE[20] = "Silva";
    const char CORREIO_ELETRONICO_TESTE[30] = "pedro.Pacn_10@gmail-cjr.com";
    const char SENHA_TESTE[15] = "Star2";


    // Refer�ncia para o objeto a ser testado.

    cLeitor *leitor;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void TearDown();
    void TestarSucesso();


public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

























#endif // TESTES_ENTIDADES_H_INCLUDED
