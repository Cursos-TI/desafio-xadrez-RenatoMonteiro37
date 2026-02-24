#include <stdio.h>


 int main(){


        // --- BLOCO DE MOVIMENTAÇÃO DA TORRE USANDO ESTRUTURA FOR ---

        int TORRE; 
        char letratorre[] = "A";

        printf("VAMOS MOVIMENTAR A TORRE 5 CASAS PARA DIREITA\n");

        for (TORRE = 1; TORRE <=5; TORRE++){
            printf("TORRE NA CASA: %s%d\n", letratorre, TORRE);
            
        } 
        printf("\nTORRE PAROU NA CASA: %s%d\n", letratorre, TORRE);


        // --- BLOCO DE MOVIMENTAÇÃO DO BISPO USANDO ESTRUTURA WHILE ---


        printf("\nVAMOS MOVIMENTAR O BISPO 5 CASAS NA DIAGONAL PARA CIMA E PARA DIREITA\n");

         int BISPO = 2;
         char letrabispo[] = "B";

        while (BISPO <= 7 && letrabispo[0] != 'G'){
            printf("BISPO NA CASA: %s%d\n", letrabispo, BISPO);
            BISPO++;
            letrabispo[0]++;
        }

             printf("\nBISPO PAROU NA CASA: %s%d\n", letrabispo, BISPO);



        // --- BLOCO DE MOVIMENTAÇÃO DA RAINHA USANDO ESTRUTURA DO WHILE ---


        printf("\nVAMOS MOVIMENTAR A RAINHA 8 CASAS PARA ESQUERDA\n");


         int RAINHA = 2;
         char letrarainha[3] = "I";

        do {
            printf("RAINHA NA CASA: %s%d\n", letrarainha, RAINHA);
            letrarainha[0]--;
            
        }  while (letrarainha[0] != 'A');
           
        printf("RAINHA PAROU NA CASA: %s%d\n", letrarainha, RAINHA);
        
        
        return 0;
    }
    