#include <iostream>
#include <cstring>

using namespace std;

struct Film {
    char name[50];
    int money;
    char rejis[50];
};

Film films[] = {
    {"101 Долматинец", 350, "Керри Джим"},
    {"Тупой и еще тупее", 470, "Фаррели Питер"},
    {"Живая сталь", 440, "Леви Шон"},
    {"Трансформеры", 330, "Бэй Майкл"},
    {"Помни", 345, "Шелби Леонард"},
    {"Левый руль", 320, "Лещенко Лев"}
};

void alfavit() {
    setlocale(LC_ALL, "RU");
    int numFilms = sizeof(films) / sizeof(films[0]);

    // Сортировка фильмов по алфавиту
    for (int i = 0; i < numFilms - 1; ++i) {
        for (int j = i + 1; j < numFilms; ++j) {
            if (strcmp(films[i].rejis, films[j].rejis) > 0) {
                // Обмен местами
                Film temp = films[i];
                films[i] = films[j];
                films[j] = temp;
            }
        }
    }

    // Вывод отсортированных фильмов
    for (int i = 0; i < numFilms; ++i) {
        cout << "Фильм: " << films[i].name << endl;
        cout << "Бюджет: " << films[i].money << " миллионов долларов" << endl;
        cout << "Режиссер: " << films[i].rejis << endl;
        cout << endl;
    }
}

int main() {
    alfavit();
    return 0;
}
