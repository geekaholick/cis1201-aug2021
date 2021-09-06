#include<stdio.h>
#include<windows.h>

void gotoxy(short x, short y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    int i;
    system("CLS");

    //gotoxy(5,10);
    for(i=0; i<80; ++i) {
        printf("%c", 176);
        delay(1);
    }

    system("PAUSE");
}