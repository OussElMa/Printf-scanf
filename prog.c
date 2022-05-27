#include <stdio.h>

int main()
{
    float rayon, surface;
    printf("Veuillez entrer la valeur du rayon \n");
    scanf("%f", &rayon);
    surface = rayon * rayon *3,14;
    printf("Le rayon est de %.2f, pour calculer la surface nous allons mutliplier rayon par rayon par Pi\n", rayon);
    printf("La surface est de %f", surface);
    return 0;
}
