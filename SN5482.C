/* Código representando o Circuito SN5482, o código cria todas as combinações possíveis
de um vetor binário com 5 dígitos, e testa todas as portas lógicas do circuito*/




#include <stdio.h>

void vetor(){
    int y[5];
    int x,a,b = 0,c,A1,B1,C0,B2,A2;
    int AND1,AND2,AND3,AND4,AND5,AND6,AND7,AND8,AND9,AND10,AND11,AND12,AND13,AND14,NOR2,OR,NOR3,NOR4;
    
    for (unsigned long combinacoes = 0; combinacoes < 32; combinacoes++) {
        for (int i = 0; i <= 4; i++) {
            x =  (combinacoes >> i) & 1;
            c = b + i;
            y[c] = x;
            }
            printf("As variáveis de entrada são %d %d %d %d %d", y[0], y[1], y[2], y[3], y[4]);
            printf("\n");
            A1 = y[0];
            B1 = y[1];
            A2 = y[2];
            B2 = y[3];
            C0 = y[4];
            
            if (C0 == 1 && A1 == 1){
                AND5 = 1;
            }
            else { 
                AND5 = 0;
            }
            if (C0 == 1 && B1 == 1){
                AND6 = 1;
            }
            else { 
                AND6 = 0;
            }
            if (B1 == 1 && A1 == 1){
                AND7 = 1;
            }
            else { 
                AND7 = 0;
            }
            
            if (AND5 == 0 && AND6 == 0 && AND7 == 0){
                NOR2 = 1;
            }
            else{
                NOR2 = 0;
            }
            if (C0 == 1 && NOR2 == 1){
                AND1 = 1;
            }
            else { 
                AND1 = 0;
            }
            if (A1 == 1 && NOR2 == 1){
                AND2 = 1;
            }
            else { 
                AND2 = 0;
            }
            if (B1 == 1 && NOR2 == 1){
                AND3 = 1;
            }
            else { 
                AND3 = 0;
            }
            if (C0 == 1 && A1 == 1 && B1 == 1){
                AND4 = 1;
            }
            else { 
                AND4 = 0;    
            }
            if (AND1 == 0 && AND2 == 0 && AND3 == 0 && AND4 == 0){
                OR = 0;
            }
            else { 
                OR = 1;
            }
            if (NOR2 == 1 && A2 == 0){
                AND12 = 1;
            }
            else { 
                AND12 = 0;
            }
             if (NOR2== 1 && B2 == 0){
                AND13 = 1;
            }
            else { 
                AND13 = 0;
            }
            if (B2 == 0 && A2 == 0){
                AND14 = 1;
            }
            else { 
                AND14 = 0;
            }
            if (AND12 == 0 && AND13 == 0 && AND14 == 0){
                NOR4 = 1;
            }
            else { 
                NOR4 = 0;
            }
            if (NOR2 == 1 && NOR4 == 1){
                AND8 = 1;
            }
            else { 
                AND8 = 0;
            }
            if (A2 == 0 && NOR4 == 1){
                AND9 = 1;
            }
            else { 
                AND9 = 0;
            }
            if (B2 == 0 && NOR4 == 1){
                AND10 = 1;
            }
            else { 
                AND10 = 0;
            }
            if (NOR2 == 1 && A2 == 0 && B2 == 0){
                AND11 = 1;
            }
            else { 
                AND11 = 0;
            }
            if (AND8 == 0 && AND9 == 0 && AND10 == 0 && AND11 == 0){
                NOR3 = 1;
            }
            else { 
                NOR3 = 0;
            }
            printf("As saídas S1, S2, E C2, são: %d %d %d ", OR, NOR3, NOR4);
            printf("\n\n");
            
    }
}


int main(void) {
    vetor();
}
