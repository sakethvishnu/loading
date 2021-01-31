//Loading animation.
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

void gotoxy(int,int);  
void load();
void print();

int main(){
    int delay;
    system("cls");//To clear the content on the screen.
    load();
    system("cls");
    print();
    for(delay = 0;delay<100000;delay++){}//For delay.
    gotoxy(0,30);
}

//defining gotoxy function.
void gotoxy(int x,int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//For Getting a load symbol.
void load(){
    int row,col,r,c,q;
    gotoxy(36,14);
    printf("Loading....");
    gotoxy(30,16);
    for(r=1;r<=20;r++){
            printf("%c",177);
        for(q=0;q<=100000000;q++){}//For delay.
    }
}

//printing the characters.
void print(){
    gotoxy(32,14);
    printf("Successfully loaded");
}

