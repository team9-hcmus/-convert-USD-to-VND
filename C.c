#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vnd, usd;
    printf("Nhap so USD: ");
    scanf("%f", &usd);
    vnd = usd * 23127;
    printf("So VND tuong ung la: %.2f", vnd);
    return 0;
}
