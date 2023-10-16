#include <stdio.h>
int main()
{
    char a[18];
    fgets(a, 18, stdin);
    a[6] = '\0'; // fgets er jekhane null korate cai setar index e evabe null dey
    printf("%s", a);
    return 0;
}