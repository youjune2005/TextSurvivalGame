#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#define GA 1
#define BA 2
#define BO 3
#define START 1
#define GAMEOVER -1
#define HELP 0
#define MAP_X 25
#define MAP_Y 5

void gotoxy(int x, int y)
{
    COORD CursorPosition = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CursorPosition);
}

void g_end()
{
    gotoxy(MAP_X-3,MAP_Y-1);
    printf("┌──────────────────────────────────┐");
    gotoxy(MAP_X-3,MAP_Y);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("└──────────────────────────────────┘");

    gotoxy(MAP_X+4,MAP_Y+2);
    printf("Game Over!!");
}

int intro()
{
    int a;
    gotoxy(MAP_X-3,MAP_Y-1);
    printf("┌──────────────────────────────────┐");
    gotoxy(MAP_X-3,MAP_Y);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("└──────────────────────────────────┘");

    gotoxy(MAP_X+6,MAP_Y);
    printf("TEXT SURVIVAL GAME\n");

    gotoxy(MAP_X-1,MAP_Y+1);
    printf("(시작 : 1,도움말 : 0 , 종료 : -1)\n");

    gotoxy(MAP_X+6,MAP_Y+2);
    printf("input:");
    scanf("%d",&a);
    return a;
}

void manual()
{
    printf("1. 가위(1), 바위(2), 보(3) 중 하나를 입력한다.\n"
           "2. 컴퓨터와 5게임을 진행한다.\n"
           "3. 유저를 기준으로 결과를 출력한다.\n"
           "4. 아무키를 입력하면 처음으로 돌아간다.\n");
}

void game()
{

}

void caution()
{
    gotoxy(MAP_X-3,MAP_Y-1);
    printf("┌──────────────────────────────────┐");
    gotoxy(MAP_X-3,MAP_Y);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("│                                  │");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("└──────────────────────────────────┘");

    gotoxy(MAP_X+4,MAP_Y+2);
    printf("숫자를 잘못 입력하셨습니다.");
}

int main()
{
    int in;

    while(1)
    {
        system("cls");
        in=intro();
        if(in==HELP)
        {
            system("cls");
            manual();
            getch();
        }
        else if(in==START)
        {
            system("cls");
            game();
        }
        else if(in==GAMEOVER)
        {
            g_end();
            getch();
            return 0;
        }
        else
        {
            system("cls");
            caution();
            getch();
        }
    }
    return 0;
}
