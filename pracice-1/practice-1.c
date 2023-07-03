#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    // Оголошення змінних (час за який гості з'їдять пиріг)
    int t1,t2,t3;
    // Введення даних користувачем
    printf("Input data about first guest (not more than 10000)\n");
    scanf("%d",&t1);
    printf("Input data about second guest (not more than 10000)\n");
    scanf("%d",&t2);
    printf("Input data about third guest (not more than 10000)\n");
    scanf("%d",&t3);
    // Перевірка чи задовільняють данні умові
    if (t1>10000||t2>10000||t3>10000)
    {
        printf("Wrong numbers");
        return;
    }
    else{
    // Оголошення змінної (загальний час), підрахунок загального часу і представлення його в годинах
    float sumarry_time = 1.0 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));
    // Виведення даних
    printf("\n\tTime summary - %.2f hours", sumarry_time);
    }
}
