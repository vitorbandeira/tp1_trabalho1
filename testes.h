#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"

using namespace std;

class TUcNome
{
private:
    const char valid[20] = "Pedro";
	const char invalid1[20] = "pedro";
	const char invalid2[20] = "Pedro2";
    const char invalid3[20] = "Pedro.";

	cNome *nome;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcSobrenome
{
private:
    const char valid[20] = "Carvalho";
	const char invalid1[20] = "carvalho";
	const char invalid2[20] = "Carvalho2";
    const char invalid3[20] = "Carvalho.";

	cSobrenome *sobrenome;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcTelefone
{
private:
    const char valid[14] = "61 99817-4745";
    const char invalid1[14] = "6199817-4745";
    const char invalid2[14] = "61 998174745";
    const char invalid3[14] = "6d 99817ab45";

    cTelefone *telefone;

    int estado;

    void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

/*
class TUcEndereco
{
private:
    const char valid[40] = "Condominio Boa Vista";
	const char invalid1[40] = "@#!$%% sul";
	const char invalid2[40] = " SQSW301 Bl A A 510";
    const char invalid3[40] = "SQSW301 Bl A A 510 ";
    const char invalid4[40] = "SQSW301  Bl A A 510";
    const char invalid5[40] = "Condominio Boa Vista Lote 5 Casa 2";

	cEndereco *endereco;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

}; */


/*class TUcData
{
private:
    const char valid[11] = "22/03/2019";
	const char invalid1[11] = "22032019";
	const char invalid2[11] = "32/03/2019";
    const char invalid3[11] = "22/13/2019";
    const char invalid4[11] = "22/03/2200";

	cData *data;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

}; */

class TUcCorreioEletronico
{
private:
    const char valid[30] = "pedro.Pacn_10@gmail-cjr.com";
	const char invalid1[30] = ".pedropacn@gmail.com";
	const char invalid2[30] = "pedropacn.@gmail.com";
    const char invalid3[30] = "pedro.Pacn_10@255";
    const char invalid4[30] = "pedro.Pacn_10@gmail.com-";
    const char invalid5[30] = "pedropacngmail.com";

	cCorreioEletronico *correioeletronico;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcSenha
{
private:
    const char valid[15] = "Star2";
	const char invalid1[15] = "Starwars25439";
	const char invalid2[15] = "star20";
    const char invalid3[15] = "Star";

    cSenha *senha;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcTextoDef
{
private:
    const char valid[50] = "Quando vi aquele monte 28!";
	const char invalid1[50] = "Quando vi aquela montanha no meio do caminho.";


    cTextoDef *textodef;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcIdioma
{
private:
    const char valid[4] = "SPA";
	const char invalid1[4] = "JPO";
	const char invalid2[4] = "spa";


    cIdioma *idioma;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

class TUcClasseDeTermo
{
private:
    const char valid1[3] = "PT";
    const char valid2[3] = "NP";
	const char invalid[3] = "pt";


    cClasseDeTermo *classedetermo;

	int estado;

	void SetUp();
    void TearDown();
    void TestarSucesso();
    void TestarFalha();

public:

	const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();

};

#endif // TESTES_H_INCLUDED
