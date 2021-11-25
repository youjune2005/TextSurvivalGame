#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#define START 1
#define GAMEOVER -1
#define HELP 0
#define MAP_X 25
#define MAP_Y 5

int hp=50;
int atk=15;
int def=5;

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
    gotoxy(MAP_X+6,MAP_Y);
    printf("����� ���� ���� ��ã�� ������ �����߷��� �մϴ�.\n"
           "\n"
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

        system("cls");
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
                getch();
            }
            else if(playerch='2')
            {
                system("cls");
                game();
            }
        }
        else if(k>=61&&k<=76)
        {
            system("cls");
            printf("���� ���� ��, ���𰡰� ����� ������ �������ϴ�.\n"
                   "(��� �̸�)��(��) �߰��߽��ϴ�!\n"
                   "�����Ͻðڽ��ϱ�?\n"
                   "(�����ϸ�, ������ �����ϰ� �ִ� ��� �����ϴ�)\n"
                   "[1] ���� [2] ������\n");
            playerch=getch();
            if(playerch=='1')
            {
                system("cls");
                printf("(��� �̸�)�������� �����Ͽ����ϴ�.");
                getch();
            }
            else if(playerch='2')
            {
                system("cls");
                printf("��� �����̽��ϴ�.\n");
                printf("�ƹ� Ű�� ������ ���");
                getch();
                game();
            }
        }
        else if(k>=77&&k<=88)
        {
            system("cls");
            printf("����� �ƴ��� ����ó�� �߰��߽��ϴ�!\n"
                   "����� �Ƿθ� ��� �ذ�, ����� �޽��� ���մϴ�.\n"
                   "(20% �ִ� HP)�� HP�� ȸ���߽��ϴ�.\n");
            getch();
            game();
        }
        else if(k>=89&&k<=94)
        {
            system("cls");
            printf("����� �Ϸ����� ���ƴٳ�����, ��� �� ���� ã�� ���߽��ϴ�.\n"
                   "(���ط�)��ŭ�� ü���� �Ҹ�Ǿ����ϴ�.\n");
            getch();
            game();
        }
        else if(k>=95&&k<=100)
        {
            system("cls");
            printf("����� �� �� ���� �ź��� �� �̲����ϴ�.\n"
                   "�ź��� ����� ������, ������ �������� �� ����� ��Ÿ���ϴ�.\n"
                   "�״� �ڽ��� �ּ����� �Ұ��ϸ�, (20% �ִ� HP)�� ������� �ָ� �ź��� ���� �����ְڴٰ� �մϴ�.\n"
                   "��� �Ͻðڽ��ϱ�?\n"
                   "[1] �ŷ��Ѵ� [2] �����Ѵ�\n");
            int rad=rand()%3 + 1;
            playerch=getch();
            if(playerch=='1')
            {
                system("cls");

                if(rad==1)
                {
                    printf("����� �ּ��翡�� ������� �ְڴٰ� �մϴ�.\n"
                       "����� ���� ����������, �ź��� ���� �� �ȿ��� �������ϴ�.\n"
                       "*(�ִ� HP�� 20%) ��ŭ�� HP�� �Ҹ��߽��ϴ�.\n"
                       "ü���� (������)��ŭ �����߽��ϴ�.\n");
                    getch();
                    game();
                }
                else if(rad==2)
                {
                    printf("����� �ּ��翡�� ������� �ְڴٰ� �մϴ�.\n"
                       "����� ���� ����������, �ź��� ���� �� �ȿ��� �������ϴ�.\n"
                       "*(�ִ� HP�� 20%) ��ŭ�� HP�� �Ҹ��߽��ϴ�.\n"
                       "���ݷ��� (������)��ŭ �����߽��ϴ�.\n");
                    getch();
                    game();
                }
                else
                {
                    printf("����� �ּ��翡�� ������� �ְڴٰ� �մϴ�.\n"
                       "����� ���� ����������, �ź��� ���� �� �ȿ��� �������ϴ�.\n"
                       "*(�ִ� HP�� 20%) ��ŭ�� HP�� �Ҹ��߽��ϴ�.\n"
                       "������ (������)��ŭ �����߽��ϴ�.\n");
                    getch();
                    game();
                }
            }
            else if(playerch='2')
            {
                system("cls");
                printf("����� �ּ����� ������ �����մϴ�.\n"
                        "����� �ƽ����ϴ� ǥ���� �ּ��縦 �ڷ��ϰ� ���� �����ϴ�.\n");
                getch();
                game();
            }
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
