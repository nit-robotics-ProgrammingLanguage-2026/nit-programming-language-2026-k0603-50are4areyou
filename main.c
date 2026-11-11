#include <stdio.h>

int main(void)
{
    int n;
    int i;
    long long sum = 0;
    scanf("%d", &n);
    if (n < 0) {
        printf("NG");
    } else if (n == 0){
        printf("0");
    } else {
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("%lld", sum);
    }
    return 0;
}
