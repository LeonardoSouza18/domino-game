#ifndef DOMINOVIEW_H_INCLUDED
#define DOMINOVIEW_H_INCLUDED

#include "dominoModel.h"
#include "dominoController.h"
#include <stdbool.h>


typedef struct{
    int ladoEsquerdo;
    int ladoDireto;
    bool ultima;

}peca;

int opcaoMenu();
void printaPecas(peca teste[]);

#endif // DOMINOVIEW_H_INCLUDED
