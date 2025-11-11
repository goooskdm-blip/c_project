#include <stdio.h>

int main()
{

    int score;
    printf("input score:");

    scanf("%d", &score);

    if (score >= 60 && score <= 150)
    {
        printf("pass");
    }
    else
        printf("fail");

    return 0;
}