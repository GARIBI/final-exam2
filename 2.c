#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#include <termio.h>

struct menu
{
    char name[20];
    int money;
    int su;
};

#define menu1 "a"
#define menu2 "b"
#define menu3 "c"
#define menu4 "d"
#define menu5 "e"
#define menu6 "f"
#define menu7 "g"
#define end_menu "8.end"

#define M1 100
#define M2 200
#define M3 300
#define M4 400
#define M5 500
#define M6 600
#define M7 700

#define manumax 8

void start_game();
void MenuPrintf();
void Name();
void Infor();
void OX_game();
void ii();
void word_game();
void buy_things();

int game_score=0;
int my_money=0;

int main()
{
    start_game();
}

void start_game()
{
    int a,b;
    system("clear");
    MenuPrint();
    scanf("%d",&a);

    switch (a)
    {
        case 1:
            system("clear");
            Name();
            break;
        case 2:
            system("clear");
            printf("you ended.\n");
            break;
        case 3:
            system("clear");
            {
                time_t current_time;
                time (&current_time);

                printf("%ld",current_time);
                puts(ctime(&current_time));
            }
                printf("go back: put any number\n");
                scanf("%d",&b);
                if (b=1)
                {
                    MenuPrint();
                }
                break;
        default:
            break;
    }
}

void MenuPrint()
{
    FILE *fp;
    int ch;

    fp=fopen("q.txt","r");
    while(1)
    {
        ch=fgets(fp);
        if(ch==EOF)
        {
            break;
        }
        putchar(ch);
    }
    fclose(fp);
    return 0;
}

void Name()
{
    int num;
    system("clear");
    printf("put your name: \n");
    scanf("%d",&num);
    Infor();
}

void Infor()
{
    int num;
    char name[20];
    scanf("%s",name);
    printf("%s! you have to play the game! I'll give you MONEY as much as you got a score! good luck\n\n",name);
    printf("continue: 1 // end: 2\n");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            OX_game();
            break;
        case 2:
            printf("you ended! bye~\n");
            break;
        default:
            break;
    }
}

void OX_game()
{
    int num,answer;
    int i;
    system("clear");
    printf("-----1.first game is OX game. you have to match 6 random Questions.------\n");
    
    srand(time(NULL));
    for(i=0;i<6;i++)
    {
        printf("O: put 1, X: put 2)\n");
        switch(rand()%10)
        {
            case 0:
                printf(" Q1. ~~~~\n");
                answer=1;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 1:
                printf(" Q2. ~~~~\n");
                answer=1;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;

            case 2:
                printf(" Q3. ~~~~\n");
                answer=2;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 3:
                printf(" Q4. ~~~~\n");
                answer=2;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 4:
                printf(" Q5. ~~~~\n");
                answer=1;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 5:
                printf(" Q6. ~~~~\n");
                answer=2;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 6:
                printf(" Q7. ~~~~\n");
                answer=2;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 7:
                printf(" Q8. ~~~~\n");
                answer=1;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 8:
                printf(" Q9. ~~~~\n");
                answer=1;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            case 9:
                printf(" Q10. ~~~~\n");
                answer=2;
                scanf("%d",&num);
                if(answer==num)
                {
                    printf("good\n");
                    game_score+=5;
                    break;
                }
                else
                    printf("No!!\n");
                    break;
            default:
                break;
        }
    }
    printf("your current score is %d", game_score);
    ii();
}

void ii()
{
    word_game();
    if(game_score>50)
    {
        my_money+=1500;
    }
    else if(game_score<=50 && game_score>35)
    {
        my_money+=1000;
    }
    else if(game_score<=35 && game_score>20)
    {
        my_money+=500;
    }
    else if(game_score<=20 && game_score>5)
    {
        my_money+=300;
    }
    else
        my_money+=100;

    printf("you have %d won!",my_money);
    buy_things();
}

void word_game()
{
    printf("word_game\n");
    return 0;
}

void buy_things()
{
    printf("buy_thinngs\n");
}
