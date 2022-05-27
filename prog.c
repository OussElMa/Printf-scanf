#include <stdio.h>

int main()
{
    int naissance, age;
    printf("Veuillez indiquer votre année de naissance \n");
    scanf("%d", &naissance);
    age = 2022 - naissance;
    printf("Vous avez %d ans", age);
    return 0;
}