#include "Header.h"

int main() {
    setlocale(LC_ALL, "RU");
    int years;
    cout << "¬ведите количество лет работы дл€ поиска: ";
    if (!(cin >> years)) {
        cout << "¬ведено не целое число" << endl;
        cin.clear();
    }
    else {
        Pereschet(years);
    }

    return 0;
}
