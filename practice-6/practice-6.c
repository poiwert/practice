#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main() {
    // Оголошення змінних
    int x1,x2,y1,y2;
    float result;
    // Отримання данних від користувача 
    printf("Input x1 x2 y1 y2 - ");
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    // Підрахунок довжини вектора
    result=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    // Модуль вектора
    result=fabs(result);
    // Вивведення результатів
    printf("Result - %0.6f\n",result); 
}