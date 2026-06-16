#include <stdio.h>

int main()
{
    printf("商品の価格を入力して下さい> \n");
    int price;
    scanf("%d", &price);

    printf("支払った金額を入力して下さい> \n");
    int payment;
    scanf("%d", &payment);

    int change = payment - price;
    if (change < 0)
    {
        printf("支払った金額が足りません。\n");
    }
    else
    {
        printf("お釣りは%d円です。\n", change);
    }
    bool b = true;
}