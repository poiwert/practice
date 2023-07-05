#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Власна функція пошуку точок перетину двох кіл
int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Обчислення відстані між центрами кола
    int distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    if (distance == 0 && r1 == r2) {
        // Кола співпадають, безліч точок перетину
        return -1;
    } else if (distance > r1 + r2 || distance < abs(r1 - r2)) {
        // Кола не перетинаються
        return 0;
    } else if (abs(r1 - r2) <= distance && distance <= r1 + r2) {
        // Кола перетинаються
        return 2;
    } else {
        // Кола дотикаються ззовні або всередині
        return 1;
    }
}
int main() {
    // Оголошення змінних
    int x1, y1, r1, x2, y2, r2;
    // Отримання даних від користувача
    printf("Enter the coordinates and radii of the circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
    // Оголошення функції і вивід результатів
    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2);
    printf("Number of intersection points: %d\n", intersectionPoints);
    return 0;
}
