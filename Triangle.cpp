#include <iostream>

int main() {
    setlocale(LC_ALL, "rus");
    int rows = 0;
    int coef = 1;

    std::cout << "Введите количество строк: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++) {
        for (int space = 1; space <= rows - i; space++)
            std::cout << "  ";

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            }
            else {
                coef = coef * (i - j + 1) / j;
            }

            std::cout << coef << "   ";
        }
        std::cout << std::endl;
    }
    return 0;
}