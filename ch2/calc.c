#include <stdio.h>

int main()
{
    // puts("1+2");
    // 3;
    // 4;
    // 5;
    // puts(3);
    // puts(100+50);
    // printf("%d 円\n", 100+50);
    // printf("%d 回目のテストを受けた\n", 3);
    // printf("結果は%d 点だった\n", 40 + 60);
    // printf("数学は%d点, 英語は%d点", 80, 90);
    // printf("数学は%d点, 英語は%d点", 80, 90, 100);
    // printf("%d\n", 0755);
    printf("%d\n", 1 + 2);
    printf("%d\n", 10 - 4);
    printf("%d\n", -50 + 50 + 100);
    printf("%d\n", 10 * 10);
    printf("%d\n", 10 / 5);
    printf("%d\n", 10 / 5 * 2);
    printf("%d\n", 10 / 3);
    printf("%d\n", 10 % 3);

    printf("%d\n", 10 % 3);
    printf("%d\n", -10 % 3);

    printf("%d時間%d分\n", 190 / 60, 190 % 60);

    printf("千の位%d\n", 3456 / 1000 % 10);
    printf("百の位%d\n", 3456 / 100 % 10);
    printf("十の位%d\n", 3456 / 10 % 10);
    printf("一の位%d\n", 3456 % 10);

    printf("%d\n", 10 + 2 * 2);
    printf("%d\n", (10 + 2) * 2);
    printf("%d\n", (2 * (1 + 1) + 2) * 2);

    printf("%d %d\n", 10 + 2 * 2, 5 + 8 + 7);
    printf("%d %d\n", (10 + 2 * 2), (5 + 8 + 7));

    // comment

    /* comment */

    /*
    comment
    */

    /*
    // nested comment
    */

    puts("/*string*/");
    puts("//string");
}