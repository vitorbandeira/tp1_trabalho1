#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_ENTIDADES_H_INCLUDED

#include "entidades.h"



class TUcLeitor {

private:

    // Definições de constantes para evitar numeros mágicos.

    const char NOME_TESTE[20] = "Ricardo";
    const char SOBRENOME_TESTE[20] = "Silva";
    const char CORREIO_ELETRONICO_TESTE[30] = "pedro.Pacn_10@gmail-cjr.com";
    const char SENHA_TESTE[15] = "Star2";


    // Referência para o objeto a ser testado.

    cLeitor *leitor;

    // Estado do teste.

    int estado;

    // Declarações de métodos.

    void SetUp();
    void TearDown();
    void TestarSucesso();


public:

    // Definições de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

























#endif // TESTES_ENTIDADES_H_INCLUDED
