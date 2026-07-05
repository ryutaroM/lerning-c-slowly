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

    // puts(1.4);

    // invalid
    //  printf("%d\n", 1.5);
    //  printf("%d\n", (3.5 + 0.5));

    printf("%f\n", 1.5);
    printf("%f\n", (3.5 + 0.5));
    printf("%f\n", -0.2100);

    printf("円周率は%f\n", 3.14159);
    printf("円周率は%.1f\n", 3.14159);
    printf("円周率は%.5f\n", 3.14159);

    printf("%.0f\n", 127.5);
    printf("%.0f\n", 130.5);
    printf("%.0f\n", 130.6);

    printf("%.1f\n", 2.25);
    printf("%.1f\n", 2.35);

    printf("%.25f\n", 11111.1111111111111111111111111);

    printf("%f\n", (1.5 + 0.25));

    // invalid
    //  printf("%f\n", (10.0%3.0));

    printf("%f\n", (1.5 + 2));
    printf("%f\n", (0.1 + 1 / 2));

    printf("%f\n", (1.0 / 2 + 0.1));

    // ivalid format specifier
    //  printf("%f\n", (21 / 2));

    printf("APPLE\n");
    printf("le\n");

    printf("80%%\n");
    printf("%d%%\n", 90);
    puts("80%");

    // invalid format specifier
    // printf("50%dog!100%frog!\n");

    printf("%5d\n", 1);
    printf("%5d\n", 123456);

    printf("%02d:%02d:%02d\n", 1, 2, 3);

    printf("###%5d###\n", 123);
    printf("###%-5d###\n", 123);

    printf("| %-5d |\n", 123);
    printf("| %-5d |\n", 2);
    printf("| %-5d |\n", -123);
}