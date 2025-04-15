#include <iostream>
#include <cmath> // Для функции округления
using namespace std;

double numberX() {
    //разрабатывается Developer1 - ветка branch_fun_1
}

double numberY() {
    //разрабатывается Developer2 - ветка branch_fun_2
    double y;
    cin >> y;
    return y;
}

double numberZ() {
   //разрабатывается Developer3 - ветка branch_fun_3
}

double DrobPart(double summ) {
    //разрабатывается Developer4 - ветка branch_fun_4
}

int Okruglenie(double summ) {
    //разрабатывается Developer5 - ветка branch_fun_5
}

int main() {
    setlocale(LC_ALL, "rus");
    double x , y , z ; // Инициализация переменных
    int menu;

    do {
        cout << "Task 1. Ввести вещественное число x" << endl;
        cout << "Task 2. Ввести вещественное число y" << endl;
        cout << "Task 3. Ввести вещественное число z" << endl;
        cout << "Task 4. Найти дробную часть суммы x, y, z" << endl;
        cout << "Task 5. Округлить до ближайшего целого сумму этих 3-х чисел" << endl;
        cout << "Введите номер задачи (0 для выхода): ";
        cin >> menu;

        switch (menu) {
        case 1:
            cout << "Введите число x: ";
            x = numberX();
            break;
        case 2:
            cout << "Введите число y: ";
            y = numberY();
            break;
        case 3:
            cout << "Введите число z: ";
            z = numberZ();
            break;
        case 4: {
            double summ = x + y + z; // Вычисляем сумму здесь
            cout << "Дробная часть суммы: " << DrobPart(summ) << endl;
            break;
        }
        case 5: {
            double summ = x + y + z; // Вычисляем сумму здесь
            cout << "Округленная сумма: " << Okruglenie(summ) << endl;
            break;
        }
        case 0:
            cout << "Выход из приложения." << endl;
            break;
        default:
            cout << "Некорректный выбор. Пожалуйста, попробуйте снова." << endl;
        }
    } while (menu != 0);

    return 0;
}