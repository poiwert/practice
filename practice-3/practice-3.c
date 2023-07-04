#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void main() {
    // Кількість розрядів і змінна результату
    int p,result = 0;
    printf("Input quantity of bits(p <=30): ");
    scanf("%d",&p);
    // Перевірка чи задовільняють данні умові
    if (p>30){
        printf("Wrong number");
        return;
    }
    // Основна логіка  програми
    else{
        // Перевірка чи число має достатню кількість розрядів для роботи формули
        if (p<=1){
            result=0;
            printf("Result - %d",result);
            return;
        }
        if (p==2){
            result=2;
            printf("Result - %d",result);
            return;
        }
        // Підрахунок по формулі
        else{
        int temp=p-2;
        result=pow(2,p)-(pow(2,p)-pow(2,(temp))-pow(2,(p-temp)));
        }
    }
    // Виведення результатів
    printf("Result - %d",result);
}
