#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "dominoModel.h"
#include "dominoView.h"
#include "dominoController.h"


int main(){

     peca teste[28];
     peca aux[1];
     int opcao;



    opcao = opcaoMenu();
    iniciaPeca(teste);
    printaPecas(teste);
    embaralharPecas(teste, aux);
    printf("\n\nDepois de embaralhar\n\n");
    printaPecas(teste);


    embaralharPecas(teste, aux);


    return 0;
}
