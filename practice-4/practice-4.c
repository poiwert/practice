#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main() {
    // Оголошення змінної натурального числа
    int n;
    // Отримання данних від користувача 
    printf("Input natural number - ");
    scanf("%d",&n);
    // Перевірка чи задовільняють данні умові(натуральних чисел)
    if (n<=0||n>149)
    {
        printf("Wrong numbers\n");
        return;
    }
    else{
    // Оголошення змінних для роботи форумли
    int remainder,share,EtD_counter=0;
    // Цикл підрахунку
    for (int i=1; i <= n; i++)
    {
        remainder=n%i;
        share=n/i;
        if (remainder==share)
        {       
            EtD_counter++; 
        }
    }
    // Вивведення результатів
    printf("Result - %d\n",EtD_counter++); 
    }
}
