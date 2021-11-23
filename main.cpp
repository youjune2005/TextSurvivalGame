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
    printf("당신은 빛의 검을 되찾아 마왕을 쓰러뜨려야 합니다.\n"
           "HP: 당신의 생명력입니다. 남은 수치가 0이 되면, 사망합니다.\n"
           "AT: 당신의 공격력입니다. 수치가 높을수록 공격시 피해량이 증가합니다.\n"
           "DF: 당신의 방어력입니다. 수치가 높을수록 받는 피해량이 감소합니다.\n"
           "무기: AT를 올려줍니다.\n"
           "방어구: 최대 HP와 DF를 올려줍니다.\n"
           "HP 물약: 일정량의 HP를 회복합니다.\n"
           "AT/DF 물약: 10턴간 해당 능력치가 상승합니다.\n"
           "부활 아이템: 사망시 1개를 소모해 부활합니다.\n"
           "\n"
           "숫자 키로 조작합니다.\n"
           "1: 예 / 장비 착용 / 공격\n"
           "2: 아니오 / 장비 버리기 / 도망\n"
           "3: 체력 물약 사용\n"
           "4: AT 증가 물약 사용\n"
           "5: DF 증가 물약 사용\n"
           "6: 부활 아이템 사용\n"
           "몬스터를 처치하면, 경험치를 얻을 수 있습니다.\n"
           "\n"
           "다양한 모험과 시련에서 살아남고, 성장하십시오.\n"
           "\n"
           "만든 사람: 박유준 / 송재준 / 장우빈\n");
}

void game()
{
    for(;;)
    {
        char playerch;

        printf("당신은 계속 전진합니다.\n");
        int k=rand()%100 + 1;
        getch();
        fflush(stdin);

        if(k>=1&&k<=60)
        {
            system("cls");
            printf("당신의 앞에 *(몬스터)이(가) 나타났습니다!\n"
                   "공격하시겠습니까?\n"
                   "[1] 공격 [2] 도망\n");
            playerch=getch();

            if(playerch=='1')
            {
                system("cls");
                printf("(몬스터)를 공격해 (피해량)의 피해를 입혔습니다!\n"
                       "(몬스터)의 공격으로 (피해량)의 피해를 입었습니다.\n");
            }
            else if(playerch='2')
            {
                game();
            }
        }
        else
        {
            printf("다른 수가 뜸");
        }
    }


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
            printf("인간들의 탐욕은 빛과 어둠의 대전쟁을 발생시켰습니다.\n"
                   "당신은 빛의 편에서 어둠과 맞섰으나\n"
                   "빛의 검이 갑자기 소실되고 말았습니다.\n"
                   "그러자 힘을 잃은 빛의 군단은 몰살당했고,\n"
                   "세상을 어둠으로 뒤덮힌다.\n"
                   "...유일하게 살아남은 빛의 전사인 당신은,\n"
                   "어둠을 헤치며 빛의 검을 되찾아\n"
                   "어둠의 지배자 마왕을 쓰러트려야 합니다.\n");
            getch();
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
