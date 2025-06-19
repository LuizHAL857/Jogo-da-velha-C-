#include <stdio.h>

void printar(int a[3][3]){

for(int i=0;i<3;i++){
    for(int j=0; j<3; j++){

        if(a[i][j]==0){
            printf("[ ]\t");
        } else if(a[i][j]==1){
            printf("[X]\t");

        } else if(a[i][j]==2){
            printf("[O]\t");
        }
     }
    printf("\n");
    }

    printf("\n\n");
}

int verifyX(int a[3][3]){

if((a[0][0]==1 && a[0][1]==1 && a[0][2]==1) ||( a[0][0]==1 && a[1][0]==1 && a[2][0]==1) 
|| (a[0][0]==1 && a[1][1]==1 && a[2][2]==1) || (a[2][0]==1 && a[1][1]==1 && a[0][2]==1)
|| (a[1][0]==1 && a[1][1]==1 && a[1][2]==1) || (a[2][0]==1 && a[2][1]==1 && a[2][2]==1) 
|| (a[0][1]==1 && a[1][1]==1 && a[2][1]==1) || (a[0][2]==1 && a[1][2]==1 && a[2][2]==1) ){

    return 1;

} else{
    return 0;
}
}


int verifyO(int a[3][3]){

    if((a[0][0]==2 && a[0][1]==2 && a[0][2]==2) ||( a[0][0]==2 && a[1][0]==2 && a[2][0]==2) 
    || (a[0][0]==2 && a[1][1]==2 && a[2][2]==2) || (a[2][0]==2 && a[1][1]==2 && a[0][2]==2)
    || (a[1][0]==2 && a[1][1]==2 && a[1][2]==2) || (a[2][0]==2 && a[2][1]==2 && a[2][2]==2) 
    || (a[0][1]==2 && a[1][1]==2 && a[2][1]==2) || (a[0][2]==2 && a[1][2]==2 && a[2][2]==2) ){
    
        return 1;
    
    } else{
        return 0;
    }
    }

int verifyDraw(int a[3][3]){

    if(a[0][0]!=0 && a[0][1]!=0 && a[0][2]!=0 
    && a[1][0]!=0 && a[1][1]!=0 && a[1][2]!=0 
    && a[2][0]!=0 && a[2][1]!=0 && a[2][2]!=0){

        return 1;
    } else{
        return 0;
    }
}    



int main(){

int a[3][3]={0};
int i,j;
printf("JOGO DA VELHA\n");

printar(a);
printf("Para selecionar a posição digite primeiro o número da linha e então da coluna\n");




while(1){
    int true=0;
   
   
    printf("Vez do jogador X\n");
do{

    scanf("%d", &i);
    scanf("%d", &j);

    if(i<1 || i>3 || j<1 || j>3 ||  a[i-1][j-1]!=0){

        printf("\nPosição inválida\nDigite novamente\n");
    }else {
        a[i-1][j-1]=1;
        true =1;
    }

}while(true==0);

    printar(a);
    if(verifyX(a)==1){

        printf("Parabéns!!! O jogador X venceu");
        return 0;
    }

    if(verifyDraw(a)==1){

    printf("Empate...");
    return 0;
    }
    
     true=0;
   
   
    printf("Vez do jogador O\n");
do{

    scanf("%d", &i);
    scanf("%d", &j);

    if(i<1 || i>3 || j<1 || j>3 ||  a[i-1][j-1]!=0){

        printf("\nPosição inválida\nDigite novamente\n");
    }else {
        a[i-1][j-1]=2;
        true =1;
    }

}while(true==0);

    printar(a);
    if(verifyO(a)==1){

        printf("Parabéns!!! O jogador O venceu");
        return 0;
    }

    if(verifyDraw(a)==1){

    printf("Empate...");
    return 0;
    }
}









    return 0;
}
