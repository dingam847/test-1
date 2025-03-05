#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
    printf("*************************\n");
    printf("*****  1.play   *********\n");
    printf("*****  0.exit   *********\n");
    printf("*************************\n");
}

void game()
{
    int guess=0;
    int ret = rand() % 1000 + 1;
    while (1)
    {
        printf("请输入要猜的数字：");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("猜小了\n");
        }
        else if (guess > ret)
        {
            printf("猜大了\n");
        }
        else{
            printf("恭喜你，猜对了，数字是：%d\n", ret);
            break;
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int) time (NULL));
    do
    {
        /* code */
        menu();
        printf("请选择：>");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
            game();
            break;
            case 0:
            printf("退出游戏\n");
            break;
            default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
    return 0;
}
