#ifndef FUNCOES_H
#define FUNCOES_H

#include "estruturas.h"

#define MAX 100

// Variáveis globais - Empresas
extern Empresa empresa[MAX];
extern int totalEmpresa;

//  Funcionarios
extern Funcionario funcionario[MAX];
extern int totalFuncionario;

//  Postos
extern Posto posto[MAX];
extern int totalPosto;

//  Componentes
extern Componente componente[MAX];
extern int totalComponente;

//  Operacoes
extern Operacoes operacao[MAX];
extern int totalOperacao;

// Protótipos das funções
void inserirFuncionario();
void inserirEmpresa();
void inserirPosto();
void inserirComponente();
void inserirOperacao();

#endif
