#include <stdio.h>


int Criacao(int x){
    
int vetor[8];
int posicoes;
int s0,s1,s2;
    
    for (posicoes = 0; posicoes < 8; posicoes++){
            if (vetor[x] == vetor[posicoes]){
                vetor[posicoes] = 1;
            }
            else{
               vetor[posicoes] = 0;
            }
}

if (vetor[1] == 1 || vetor[3] == 1 || vetor[5] == 1 || vetor[7] == 1){
    s0 = 1;
}
else{
    s0 = 0;
}

if (vetor[2] == 1 || vetor[3] == 1 || vetor[6] == 1 || vetor[7] == 1){
    s1 = 1;
}
else{
    s1 = 0;
}
if (vetor[4] == 1 || vetor[5] == 1 || vetor[6] == 1 || vetor[7] == 1){
    s2 = 1;
}
else{
    s2 = 0;
}

printf("sua saída é : %d, %d, %d \n", s0,s1,s2);

}




int main()
{
   int porta;
   printf("Escolha a porta que você quer ligar(0,1,2,3,4,5,6,7):");
   scanf("%d", &porta);
   
   switch(porta){
      
       case 0:
       Criacao(0);
       break;
       
       case 1:
       Criacao(1);
       break;
       
       case 2:
       Criacao(2);
       break;
       
       case 3:
       Criacao(3);
       break;
       
       case 4:
       Criacao(4);
       break;
       
       case 5:
       Criacao(5);
       break;
       
       case 6:
       Criacao(6);
       break;
       
       case 7:
       Criacao(7);
       break;
   }

}