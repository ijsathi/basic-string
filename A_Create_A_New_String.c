#include <stdio.h>
#include <string.h>

int main()
{
    char x[1001], y[1001];
    scanf("%s %s", x, y);
    int lengthX = strlen(x);
    int lengthY = strlen(y);

    printf("%d %d\n", lengthX, lengthY);
    printf("%s %s\n", x, y);

    return 0;
}