#include <stdio.h>

#define MOD 12345

// Власна функція для обчислення кількості послідовностей з заданою довжиною n
int countSequences(int n) {
    int dp[n + 1];  // Масив для зберігання проміжних результатів
    dp[0] = 1;  // Початкові значення
    dp[1] = 2;
    dp[2] = 4;

    // Заповнення масиву згідно рекурентної формули
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    return dp[n];  // Повертаємо кількість послідовностей
}

int main() {
    // Оголошення змінних
    int n;
    // Отримання данних від користувача
    printf("Enter the length of the sequence n (1 < n < 10000): ");
    scanf("%d", &n);

    // Перевірка чи задовільняють данні умові
    while (n <= 1 || n >= 10000) {
        printf("Wrong numbers 1 < n < 10000: ");
        scanf("%d", &n);
    }
    // Оголошення функції і вивід результатів
    int result = countSequences(n);  // Обчислення кількості послідовностей
    printf("Number of sequences to be searched: %d\n", result);

    return 0;
}