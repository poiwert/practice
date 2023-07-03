#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Функція для знаходження НСД двох чисел
int NSD(int a, int b) {
    if (b == 0)
        return a;
    // Використовуємо рекурсивний алгоритм Евкліда (Обчислення залишку від ділення a на b)
    return NSD(b, a % b);
}
// Функція для знаходження НСК двох чисел
int NSK(int a, int b) {
    // Використовуємо формулу для знаходження НСК через НСД
    return (a * b) / NSD(a, b);
}
int main() {
    // Кількість чисел
    int p;
    // Введення кількості
    printf("Input quantity of numbers(2<= p <=20): ");
    scanf("%d", &p);
    // Перевірка чи задовільняють данні умові
    if (p < 2 || p > 20) {
        printf("Wrong numbers");
        return 0;
    }
    // Введення чисел через пробіл в один рядок
    printf("Input numbers(with spaces)\n");
    int numbers[p];
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }
    int result = numbers[0];
    // Знаходимо НСК для всіх введених чисел
    for (int i = 1; i < p; i++) {
        result = NSK(result, numbers[i]);
    }
    printf("Result: %d\n", result);
    return 0;
}
