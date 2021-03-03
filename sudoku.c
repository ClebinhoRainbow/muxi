#pragma once
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"

//autor: Cledson da Silva Araujo 19/02/2021
///Quest�o 2
//A func�o retorna 1 caso a solu��o seja v�lida do contrario (retorno == 0) � inv�lida;

//Atualiza��o 02/03
// Foram criadas as funcoes auxiliares
//Eu nao consegui criar um #define TAMANHO 9; acredito que � pq estou usando o vscode community, que foi feito pra c++
// ent�o acabei uando o const int tamanho = 9;
///////Atualiacao 03/03 muita coisa deu errado fui testar minha funcao, e nao estava funcionando 
//eu ate refiz a matriz soduko com o resultado de um video do you tube
//eu tinha upado ela funcionando, nao entendia por que tinha parado 
//Eu completamente remodulei  e reformulei a logica do programa, e s� depois de um dia eu percebi que o problema era na main
//estava usando a main errada, uma que fiz bem no comeco do projeto 
// a parte boa � que o programa ta funcionando perfeitamente
int VerificaLinhas(int matriz[9][9]) {

  
    int  verificado = 1;

    for (int i = 0; i < 9 && verificado; i++)
    {
        //eu comparo um item da linha com todos os outros dessa
       //se achar outro igual eu retorno 0
        for (int j = 0; j < 9 && verificado; j++)
        {
            for (int k = 0; k < 9 && verificado; k++)
            {
                if ((j != k) && (matriz[i][j] == matriz[i][k]))
                {
                    verificado = 0;
                }
            }
        }
    }

    return verificado;
}


int VerificaColunas(int matriz[9][9]) {

  
    int  verificado = 1;
    
    for (int j = 0; j < 9 && verificado; j++)
    {
        //eu comparo um item da coluna com todos os outros dessa
        //se achar outro igual eu retorno 0
        for (int i = 0; i < 9 && verificado; i++)
        {
            for (int k = 0; k < 9 && verificado; k++)
            {
                if ((i != k) && (matriz[i][j] == matriz[k][j]))
                {
                    verificado = 0;
                }
            }
        }
    }


    return verificado;
}
//verifica um subbloco de 3x3
int VerificaSubBlocosMatriz(int subMatriz[3][3]) {
 
    int existe = 0;

    for (int num = 1; num <= 9; num++) {

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                if (subMatriz[i][j] == num) {
                    existe++;
                }
        }
        if (existe > 1) {
            return 0;
        }
        existe = 0;
    }

    return 1;
}
///vai verificar os 9 subblocos da matriz
int VerificaBlocosMatriz(int matriz[9][9]) {
 
    int subMatriz[3][3];

    for (int i = 0; i < 9; i += 3)
    {
        for (int j = 0; j < 9; j += 3) {

            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    subMatriz[k][l] = matriz[k + i][l + j];
                }
            }
            if (!VerificaSubBlocosMatriz(subMatriz))
            {
                return 0;
            }
        }
    }

    return 1;
}

int EhSolucaoValida(int matriz[9][9])
{
    //se tudo estiver ok retorno 1
    if (VerificaLinhas(matriz) && VerificaColunas(matriz) && VerificaBlocosMatriz(matriz)) {
        return 1;
    }
    else
        return 0;
}
