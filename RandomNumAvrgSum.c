#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float randomOp(){
    float toplam = 0;
    float sayi, avrg;
    for (int i = 0; i < 9; i++)
    {
    srand(time(NULL));
    sayi = rand()%100;  
    }
    float x = sayi;
    for (int i = 0; i < sayi; i++)
    {
        toplam += sayi;
    }
    avrg = toplam/x;
    printf("sum of random numbers = %f, avrg of numbers = %f", toplam, avrg);
    return 0;
}
int main(){
    char random;
    printf("Sum and avrg of random numbers enter R:");
    scanf("%c", &random);
    if (random == 'R')
    {
        randomOp();
    }
    else
    {
    float sum = 0.0, avrg, num;
    int range, i = 1;
    printf("Sayı adedini girin:");
    scanf("%d", &range);
    while (i <= range)
    {
        printf("Enter the number %d:", i);
        scanf("%f", &num);
        sum += num;
        i++;
    }
    avrg = sum/range;
    printf("sum of numbers = %f, avrg of numbers = %f", sum, avrg);
    }
    return 0;
}
