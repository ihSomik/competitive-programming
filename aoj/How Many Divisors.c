#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int count = 0;
    for (int i = a; i <= b; i++)
        if (!(c % i))
            count++;
    printf("%d\n", count);
}
