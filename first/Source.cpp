#include "Header.h"

int main() {
    setlocale(LC_ALL, "RU");
    int years;
    cout << "������� ���������� ��� ������ ��� ������: ";
    if (!(cin >> years)) {
        cout << "������� �� ����� �����" << endl;
        cin.clear();
    }
    else {
        Pereschet(years);
    }

    return 0;
}
