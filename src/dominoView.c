#include "dominoModel.h"
#include "dominoView.h"
#include "dominoController.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


    int opcaoMenu(){
        int opcao;

        printf(":::::::::   ::::::::  ::::    ::::  ::::::::::: ::::    :::  ::::::::\n");
        printf(":+:    :+: :+:    :+: +:+:+: :+:+:+     :+:     :+:+:   :+: :+:    :+:\n");
        printf("+:+    +:+ +:+    +:+ +:+ +:+:+ +:+     +:+     :+:+:+  +:+ +:+    +:+\n");
        printf("+#+    +:+ +#+    +:+ +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#+    +:+\n");
        printf("+#+    +#+ +#+    +#+ +#+       +#+     +#+     +#+  +#+#+# +#+    +#+\n");
        printf("#+#    #+# #+#    #+# #+#       #+#     #+#     #+#   #+#+# #+#    #+#\n");
        printf("#########   ########  ###       ### ########### ###    ####  ######## \n\n\n");

        printf("1)Iniciar novo Jogo \n2)Continuar a Jogar \n3)Salvar Jogo \n4)Carregar Jogo \n5)Regras do Jogo \n6)Sair do Jogo\n");
        scanf("%d", &opcao);

        return opcao;
    }

void printaPecas(peca teste[]){
        for(int i = 0; i < 28; i++){
            printf("Peca %d: %d|%d\n", i, teste[i].ladoEsquerdo, teste[i].ladoDireto);
        }
     }
