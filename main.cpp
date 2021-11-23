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
    printf("������������������������������������������������������������������������");
    gotoxy(MAP_X-3,MAP_Y);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("������������������������������������������������������������������������");

    gotoxy(MAP_X+4,MAP_Y+2);
    printf("Game Over!!");
}

int intro()
{
    int a;
    gotoxy(MAP_X-3,MAP_Y-1);
    printf("������������������������������������������������������������������������");
    gotoxy(MAP_X-3,MAP_Y);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("������������������������������������������������������������������������");

    gotoxy(MAP_X+6,MAP_Y);
    printf("TEXT SURVIVAL GAME\n");

    gotoxy(MAP_X-1,MAP_Y+1);
    printf("(���� : 1,���� : 0 , ���� : -1)\n");

    gotoxy(MAP_X+6,MAP_Y+2);
    printf("input:");
    scanf("%d",&a);
    return a;
}

void manual()
{
    printf("����� ���� ���� ��ã�� ������ �����߷��� �մϴ�.\n"
           "HP: ����� ������Դϴ�. ���� ��ġ�� 0�� �Ǹ�, ����մϴ�.\n"
           "AT: ����� ���ݷ��Դϴ�. ��ġ�� �������� ���ݽ� ���ط��� �����մϴ�.\n"
           "DF: ����� �����Դϴ�. ��ġ�� �������� �޴� ���ط��� �����մϴ�.\n"
           "����: AT�� �÷��ݴϴ�.\n"
           "��: �ִ� HP�� DF�� �÷��ݴϴ�.\n"
           "HP ����: �������� HP�� ȸ���մϴ�.\n"
           "AT/DF ����: 10�ϰ� �ش� �ɷ�ġ�� ����մϴ�.\n"
           "��Ȱ ������: ����� 1���� �Ҹ��� ��Ȱ�մϴ�.\n"
           "\n"
           "���� Ű�� �����մϴ�.\n"
           "1: �� / ��� ���� / ����\n"
           "2: �ƴϿ� / ��� ������ / ����\n"
           "3: ü�� ���� ���\n"
           "4: AT ���� ���� ���\n"
           "5: DF ���� ���� ���\n"
           "6: ��Ȱ ������ ���\n"
           "���͸� óġ�ϸ�, ����ġ�� ���� �� �ֽ��ϴ�.\n"
           "\n"
           "�پ��� ����� �÷ÿ��� ��Ƴ���, �����Ͻʽÿ�.\n"
           "\n"
           "���� ���: ������ / ������ / ����\n");
}

void game()
{
    for(;;)
    {
        char playerch;

        printf("����� ��� �����մϴ�.\n");
        int k=rand()%100 + 1;
        getch();
        fflush(stdin);

        if(k>=1&&k<=60)
        {
            system("cls");
            printf("����� �տ� *(����)��(��) ��Ÿ�����ϴ�!\n"
                   "�����Ͻðڽ��ϱ�?\n"
                   "[1] ���� [2] ����\n");
            playerch=getch();

            if(playerch=='1')
            {
                system("cls");
                printf("(����)�� ������ (���ط�)�� ���ظ� �������ϴ�!\n"
                       "(����)�� �������� (���ط�)�� ���ظ� �Ծ����ϴ�.\n");
            }
            else if(playerch='2')
            {
                game();
            }
        }
        else
        {
            printf("�ٸ� ���� ��");
        }
    }


}

void caution()
{
    gotoxy(MAP_X-3,MAP_Y-1);
    printf("������������������������������������������������������������������������");
    gotoxy(MAP_X-3,MAP_Y);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+1);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+2);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+3);
    printf("��                                  ��");
    gotoxy(MAP_X-3,MAP_Y+4);
    printf("������������������������������������������������������������������������");

    gotoxy(MAP_X+4,MAP_Y+2);
    printf("���ڸ� �߸� �Է��ϼ̽��ϴ�.");
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
            printf("�ΰ����� Ž���� ���� ����� �������� �߻����׽��ϴ�.\n"
                   "����� ���� ���� ��Ұ� �¼�����\n"
                   "���� ���� ���ڱ� �ҽǵǰ� ���ҽ��ϴ�.\n"
                   "�׷��� ���� ���� ���� ������ ������߰�,\n"
                   "������ ������� �ڵ�����.\n"
                   "...�����ϰ� ��Ƴ��� ���� ������ �����,\n"
                   "����� ��ġ�� ���� ���� ��ã��\n"
                   "����� ������ ������ ����Ʈ���� �մϴ�.\n");
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
