#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// Функція для обміну значеннями
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}
// Функція для перевірки, чи є букви унікальними
bool areCharactersUnique(char *word, int start, int end) {
    int i;
    for (i = start; i < end; i++) {
        if (word[i] == word[end]) {
            return false;
        }
    }
    return true;
}
// Функція для генерації анаграм та підрахунку їх кількості
int generateAnagrams(char *word, int start, int end) {
    static int count = 0; // Змінна для підрахунку кількості анаграм
    int i;

    if (start == end && areCharactersUnique(word, 0, end)) {
        count++;
    } else {
        for (i = start; i <= end; i++) {
            swap((word + start), (word + i)); // Зміна розташування двох букв
            generateAnagrams(word, start + 1, end); // Рекурсивний виклик для наступної позиції
            swap((word + start), (word + i)); // Відновлення початкового порядку букв
        }
    }
    return count;
}
int main() {
    // Оголошення змінної
    char word[15];
    // Введення даних користувачем
    printf("Input a word (< 14 symbols): ");
    scanf("%s", word); 

    int length = strlen(word);
    // Перевірка чи задовільняють данні умові
    if (length > 14) {
        printf("Wrong numbers\n");
        return 1; 
    }
    // Оголошення функції і вивід результатів
    int count = generateAnagrams(word, 0, length - 1);
    printf("Quantity of unique anagrams: %d\n", count);
    return 0;
}