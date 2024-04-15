#include "Header.h"

struct Fio {
    char name[20];
    char sur[20];
    char otch[20];
};

struct WORKER {
    Fio NAME;
    int YEAR;
    string POS;
};

WORKER ivani4 = { {"Сергей"," Б.","И."}, 2014 , "Инженер-Строитель" };
WORKER dmitri4 = { {"Боров"," Ы.","Д."}, 2002 , "Бухгалтер" };
WORKER georgi4 = { {"Ахмед"," В.","Г."}, 2004 , "SEO-Менеджр" };
WORKER limoni4 = { {"Брусника"," Д.","Л."}, 2005 , "Бухгалтер" };
WORKER papi4 = { {"Андрюха"," Р.","П."}, 2001 , "Специалист по работе с людьми" };
WORKER vitali4 = { {"Петр"," М.","В."}, 1995 , "Психолог" };
WORKER fedori4 = { {"Адам"," Г.","Ф."}, 2022 , "Йога-мастер" };
WORKER tanil4 = { {"Семён"," Н.","Т."}, 2011 , "Инжир" };

void Pereschet(int years) {
    WORKER workers[] = { ivani4, dmitri4, georgi4, limoni4, papi4, vitali4, fedori4, tanil4};
    int numWorkers = sizeof(workers) / sizeof(workers[0]);
    bool found = false;

    for (int i = 0; i < numWorkers; ++i) {
        int workedYears = 2024 - workers[i].YEAR;
        if (workedYears >= years) {
            cout << "Сотрудник: " << workers[i].NAME.name << " " << workers[i].NAME.sur << " " << workers[i].NAME.otch << endl;
            cout << "Должность: " << workers[i].POS << endl;
            cout << "Работает " << workedYears << " лет." << endl;
            cout << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Таких работников нет" << endl;
    }
}

