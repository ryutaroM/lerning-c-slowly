#include <stdio.h>

int main()
{
    printf("%.1f\n", ((80 + 100) / 2.0));

    int mathScore = 80;
    int englishScore = 100;
    double averageScore = (mathScore + englishScore) / 2.0;
    printf("%.1f\n", averageScore);

    int price = 200;
    double distance = 42.195;

    printf("%d円\n", price);
    printf("%d円\n", (price * 10));

    printf("%.3fkm\n", distance);
    printf("%.3fkm\n", (distance * 2));

    int a = 10, b = 20, c = 30;

    int age = 19;
    printf("5年後%d歳\n", age + 5);
    printf("10年後%d歳\n", age + 10);

    int width = 20, height = 10;
    int area = width * height;
    printf("面積は%d平方メートルです\n", area);

    double radius = 1.1;
    double pi = 3.14;
    double circleArea = radius * radius * pi;
    printf("円の面積は%.2f平方メートルです\n", circleArea);

    int p = 100;
    printf("%d円\n", p);
    p = 200;
    printf("%d円\n", p);
    p = 300;
    printf("%d円\n", p);
}