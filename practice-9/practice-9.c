#include <stdio.h>
#include <stdlib.h>

int minSteps(int x, int y) {
    // Розрахунок різниці між x і y
    int diff = y - x;
    
    // Перевірка, чи різниця від'ємна
    if (diff < 0) {
        diff = -diff;  // Якщо так, використовуємо абсолютне значення
    }
    
    // Визначення мінімальної кількості кроків
    int steps = 0;
    while (diff > 0) {
        if (diff == 1 || diff == 2) {
            steps += diff;
            break;
        }
        steps += diff / 2;
        diff = diff % 2 + 1;
    }
    
    return steps;
}
int main() {
    // Оголошення змінних
    int x, y;
    // Отримання данних від користувача
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);
    // Оголошення функції і вивід результатів
    int result = minSteps(x, y);
    printf("Мінімальна кількість кроків: %d\n", result);
    return 0;
}