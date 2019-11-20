
//hola
#include <stdio.h>

#include <stdio.h> //hola

#include <conio.h>
#include <windows.h>
#include <stdlib.h>
int Barcos1[8][8];
int Barcos2[8][8];
int ataquedel1[8][8];
int ataquedel2[8][8];
int juga1[8][8];
int juga2[8][8];
int cont=0, cont1=0;
int h,k,i,pup,y;
int can1=1, can2=2, can3=2, can11=1, can22=2, can33=2;
char Coord,j;

//MOVER EL CURSOR
void gotoxy(int x1, int y1){
    HANDLE con=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X=x1;
    dwPos.Y=y1;
    SetConsoleCursorPosition(con, dwPos);}

void main(){
system("color 0F");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
gotoxy(20,5); printf("BATTLESHIP");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
gotoxy(10,10); printf("PRESIONE CUALQUIER TECLA PARA CONTINUAR. . .");
Sleep(250);getch();
system("cls");

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
gotoxy(20,5); printf("Jugador#1");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
gotoxy(10,10); printf("PRESIONE CUALQUIER TECLA PARA CONTINUAR. . .");
Sleep(250);getch();
system("cls");

do{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
printf("\n\t Los barcos que puedes usar son:\n");
printf("\n\t 1 [4]Portaviones--4 espacios",can1);
printf("\n\t 2 [3]Submarinos-----3 espacios",can2);
printf("\n\t 2 [2]Cruceros---2 espacios",can3);
printf("\n\n\t Los barcos solo se podran colocar en vertical u horizontal \n\n");

printf("    A|B|C|D|E|F|G|H \n");
printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
for(h=0;h<8;h++){
        for (k=0;k<8;k++){

            if(h==0 & k==0){printf(" 1 ");}
            if(h==1 & k==0){printf(" 2 ");}
            if(h==2 & k==0){printf(" 3 ");}
            if(h==3 & k==0){printf(" 4 ");}
            if(h==4 & k==0){printf(" 5 ");}
            if(h==5 & k==0){printf(" 6 ");}
            if(h==6 & k==0){printf(" 7 ");}
            if(h==7 & k==0){printf(" 8 ");}

            if (Barcos1[h][k]==0){printf("%co",179);}
            else                 printf("%c%c",179,219);
                            }
            printf("%c \n",179);
            }
do{
printf("\n Tamanio del barco que colocara? 4--3--2?\n");
scanf("%d",&pup);



if (pup==4){if (can1==0){printf("\nNo hay mas!\n");cont=1;}
else {printf("\nPortaviones");cont=0;}}
if (pup==3){if (can2==0){printf("\nNo hay mas!\n");cont=1;}
else {printf("\nSubmarinos");cont=0;}}
if (pup==2){if (can3==0){printf("\nNo hay mas!\n");cont=1;}
else {printf("\nCruceros");cont=0;}}
if (pup<2 || pup>4){printf("\nERROR!! >.<");cont=1;}
}while(cont==1);

do{
printf("DISCLAIMER: NUMEROS SOLAMENTE!");
printf("\n Como quiere su barco? H[1] o V[2]?\n");
scanf("%d",&y);
if (y<1 || y>2)printf(" \nNO VALIDO");
if (y==1) printf("\nHorizontal\n");
else if (y==2) printf("\nVertical\n");
}while(y<1 || y>2);
do{
printf("\nIngrese las Coordenadas:");
printf("\nColumna:");
scanf("%s",&j);
printf("\nFila:");
scanf("%d",&i);
    if(j=='A'||j=='a')
        k=0;
    else if(j=='B'||j=='b')
        k=1;
    else if(j=='C'||j=='c')
        k=2;
    else if(j=='D'||j=='d')
        k=3;
    else if(j=='E'||j=='e')
        k=4;
    else if(j=='F'||j=='f')
        k=5;
    else if(j=='G'||j=='g')
        k=6;
    else if(j=='H'||j=='h')
        k=7;
    else k=8;

    if (i>=1 & i<=8){h=i-1;}
    else h=8;

            if (Barcos1[h][k]==1){printf("Ocupado\n");cont=1;}
            else if (h<0 || k<0 || k>7 || h>7){printf("ERROR!! COODERNADA INVALIDA!");cont=1;}
            else {Barcos1[h][k]=1;cont=0;}
}while(h<0 || k<0 || k>7 || h>7 || cont==1);

switch (pup){
    case 4: if(y==1 & Barcos1[h][k+1]==0 & Barcos1[h][k+2]==0 & Barcos1[h][k+3]==0 & k+3<8){
            Barcos1[h][k+1]=1;
            Barcos1[h][k+2]=1;
            Barcos1[h][k+3]=1; can1=0;}
            else if(y==1 & k+3>7){
                Barcos1[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos1[h+1][k]==0 & Barcos1[h+2][k]==0 & Barcos1[h+3][k]==0 & h+3<8){
                    Barcos1[h+1][k]=1;
                    Barcos1[h+2][k]=1;
                    Barcos1[h+3][k]=1;can1=0;}
                    else if(y==2 & h+3>7){
                        Barcos1[h][k]=0;
                        printf("Invalido!");}
                            break;
    case 3: if(y==1 & Barcos1[h][k+1]==0 & Barcos1[h][k+2]==0 & k+2<8){
            Barcos1[h][k+1]=1;
            Barcos1[h][k+2]=1;
            can2=can2-1;}
            else if(y==1 & k+2>7){
                Barcos1[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos1[h+1][k]==0 & Barcos1[h+2][k]==0 & Barcos1[h+3][k]==0 & h+2<8){
                    Barcos1[h+1][k]=1;
                    Barcos1[h+2][k]=1;
                    can2=can2-1;}
                    else if(y==2 & h+2>7){
                        Barcos1[h][k]=0;
                        printf("Invalido!");}
                            break;
    case 2: if(y==1 & Barcos1[h][k+1]==0 & k+1<8){
            Barcos1[h][k+1]=1;
            can3=can3-1;}
            else if(y==1 & k+1>7){
                Barcos1[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos1[h+1][k]==0 & h+1<8){
                    Barcos1[h+1][k]=1;
                    can3=can3-1;}
                    else if(y==2 & h+1>7){
                        Barcos1[h][k]=0;
                        printf("Invalido!");}
                            break;
}


cont=0;
for(h=0;h<=7;h++)
{for (k=0;k<=7;k++){
cont=cont+Barcos1[h][k];}
}
system("cls");
}while(cont<14);
printf("\nSu Tablero!\n");
printf("    A|B|C|D|E|F|G|H \n");
printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
for(h=0;h<8;h++){
        for (k=0;k<8;k++){

            if(h==0 & k==0){printf(" 1 ");}
            if(h==1 & k==0){printf(" 2 ");}
            if(h==2 & k==0){printf(" 3 ");}
            if(h==3 & k==0){printf(" 4 ");}
            if(h==4 & k==0){printf(" 5 ");}
            if(h==5 & k==0){printf(" 6 ");}
            if(h==6 & k==0){printf(" 7 ");}
            if(h==7 & k==0){printf(" 8 ");}

            if (Barcos1[h][k]==0){printf("%co",179);}
            else                 printf("%c%c",179,219);
                            }
            printf("%c \n",179);
            }
printf("PRESIONE CUALQUIER TECLA PARA CONTINUAR. . .");
Sleep(250);getch();
system("cls");

SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
gotoxy(20,5); printf("Jugador#2");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
gotoxy(10,10); printf("PRESIONE CUALQUIER TECLA PARA CONTINUAR. . .");
Sleep(250);getch();
system("cls");

do{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
printf("\n\t Los barcos que puedes usar son:\n");
printf("\n\t 1 [4]Portaviones--4 espacios",can11);
printf("\n\t 2 [3]Submarinos-----3 espacios",can22);
printf("\n\t 2 [2]Cruceros---2 espacios",can33);
printf("\n\n\t Los barcos solo se podran colocar en vertical u horizontal \n\n");

printf("    A|B|C|D|E|F|G|H \n");
printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
for(h=0;h<8;h++){
        for (k=0;k<8;k++){

            if(h==0 & k==0){printf(" 1 ");}
            if(h==1 & k==0){printf(" 2 ");}
            if(h==2 & k==0){printf(" 3 ");}
            if(h==3 & k==0){printf(" 4 ");}
            if(h==4 & k==0){printf(" 5 ");}
            if(h==5 & k==0){printf(" 6 ");}
            if(h==6 & k==0){printf(" 7 ");}
            if(h==7 & k==0){printf(" 8 ");}

            if (Barcos2[h][k]==0){printf("%co",179);}
            else                 printf("%c%c",179,219);
                            }
            printf("%c \n",179);
            }

do{
printf("\n Tamanio del barco que colocara? 4--3--2?\n");
scanf("%d",&pup);

if (can11==0 & can22==2 & can33==2)printf("\nLe quedan 0 Portaviones, 2 Submarinos y 2 Cruceros");
if (can11==0 & can22==1 & can33==2)printf("\nLe quedan 0 Portaviones, 1 Submarino y 2 Cruceros");
if (can11==0 & can22==0 & can33==2)printf("\nLe quedan 0 Portaviones, 0 Submarino y 2 Cruceros");
if (can11==0 & can22==0 & can33==1)printf("\nLe quedan 0 Portaviones, 0 Submarino y 1 Cruceros");
if (can11==0 & can22==0 & can33==0)printf("\nLe quedan 0 Portaviones, 0 Submarino y 0 Cruceros");

if (pup==4){if (can11==0){printf("\nNo hay mas!\n");cont1=1;}
else {printf("\nPortaviones");cont1==0;}}
if (pup==3){if (can22==0){printf("\nNo hay mas!\n");cont1=1;}
else {printf("\nSubmarinos");cont1==0;}}
if (pup==2){if (can33==0){printf("\nNo hay mas!\n");cont1=1;}
else {printf("\nCruceros");cont1==0;}}
if (pup<2 || pup>4){printf("\nERROR!! >.<");cont1=1;}
}while(cont1==1);

do{
printf("DISCLAIMER: NUMEROS SOLAMENTE!");
printf("\n Como quiere su barco? H[1] o V[2]?\n");
scanf("%d",&y);
if (y<1 || y>2)printf(" \nNO VALIDO");
if (y==1) printf("\nHorizontal\n");
else if (y==2) printf("\nVertical\n");
}while(y<1 || y>2);

do{
printf("\nIngrese las Coordenadas:");
printf("\nColumna:");
scanf("%s",&j);
printf("\nFila:");
scanf("%d",&i);
    if(j=='A'||j=='a')
        k=0;
    else if(j=='B'||j=='b')
        k=1;
    else if(j=='C'||j=='c')
        k=2;
    else if(j=='D'||j=='d')
        k=3;
    else if(j=='E'||j=='e')
        k=4;
    else if(j=='F'||j=='f')
        k=5;
    else if(j=='G'||j=='g')
        k=6;
    else if(j=='H'||j=='h')
        k=7;
    else k=8;

    if (i>=1 & i<=8){h=i-1;}
    else h=8;

            if (Barcos2[h][k]==1){printf("Ocupado!\n");cont1=1;}
            else if (h<0 || k<0 || k>7 || h>7){printf("ERROR!! COODERNADA INVALIDA!");cont1==1;}
            else {Barcos2[h][k]=1;cont1=0;}
}while(h<0 || k<0 || k>7 || h>7 || cont1==1);

switch (pup){
    case 4: if(y==1 & Barcos2[h][k+1]==0 & Barcos2[h][k+2]==0 & Barcos2[h][k+3]==0 & k+3<8){
            Barcos2[h][k+1]=1;
            Barcos2[h][k+2]=1;
            Barcos2[h][k+3]=1;}
            else if(y==1 & k+3>7){
                Barcos1[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos2[h+1][k]==0 & Barcos2[h+2][k]==0 & Barcos2[h+3][k]==0 & h+3<8){
                    Barcos2[h+1][k]=1;
                    Barcos2[h+2][k]=1;
                    Barcos2[h+3][k]=1;}
                    else if(y==2 & h+3>7){
                        Barcos2[h][k]=0;
                        printf("Invalido!");}
                            break;
    case 3: if(y==1 & Barcos2[h][k+1]==0 & Barcos2[h][k+2]==0 & k+2<8){
            Barcos2[h][k+1]=1;
            Barcos2[h][k+2]=1;
            }
            else if(y==1 & k+2>7){
                Barcos2[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos2[h+1][k]==0 & Barcos2[h+2][k]==0 & Barcos2[h+3][k]==0 & h+2<8){
                    Barcos2[h+1][k]=1;
                    Barcos2[h+2][k]=1;
                    }
                    else if(y==2 & h+2>7){
                        Barcos2[h][k]=0;
                        printf("Invalido!");}
                            break;
    case 2: if(y==1 & Barcos2[h][k+1]==0 & k+1<8){
            Barcos2[h][k+1]=1;
            }
            else if(y==1 & k+1>7){
                Barcos2[h][k]=0;
                printf("Invalido!");}
                else if(y==2 & Barcos2[h+1][k]==0 & h+1<8){
                    Barcos2[h+1][k]=1;
                    }
                    else if(y==2 & h+1>7){
                        Barcos2[h][k]=0;
                        printf("Invalido!");}
                            break;
}

cont=0;
for(h=0;h<=7;h++)
{for (k=0;k<=7;k++){
cont1=cont1+Barcos2[h][k];}
}
system("cls");
}while(cont1<14);
printf("    A|B|C|D|E|F|G|H \n");
printf("   %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196,196);
for(h=0;h<8;h++){
        for (k=0;k<8;k++){

            if(h==0 & k==0){printf(" 1 ");}
            if(h==1 & k==0){printf(" 2 ");}
            if(h==2 & k==0){printf(" 3 ");}
            if(h==3 & k==0){printf(" 4 ");}
            if(h==4 & k==0){printf(" 5 ");}
            if(h==5 & k==0){printf(" 6 ");}
            if(h==6 & k==0){printf(" 7 ");}
            if(h==7 & k==0){printf(" 8 ");}

            if (Barcos2[h][k]==0){printf("%co",179);}
            else                 printf("%c%c",179,219);
                            }
            printf("%c \n",179);
            }
printf("PRESIONE CUALQUIER TECLA PARA CONTINUAR. . .");
Sleep(250);getch();
system("cls");
}
