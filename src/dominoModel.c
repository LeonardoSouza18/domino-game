#include "dominoModel.h"
#include "dominoView.h"
#include "dominoController.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>




    void embaralharPecas(peca teste[], peca aux[]){
        srand(time(NULL));
        int r;

        for (int i=0; i < 28; i++)
        {
            r = rand() % 28;

           aux[0] = teste[i];
           teste[i] = teste[r];
           teste[r] = aux[0];
        }
    }

        void iniciaPeca(peca jogo[]){
        int i = 0, j = 0, contadora = 0;

        for(i = 0; i < 7; i++){
            j = i;
            for(j; j < 7; j++){
                jogo[contadora].ladoEsquerdo = i;
                jogo[contadora].ladoDireto = j;
                contadora++;
            }
        }
    }
