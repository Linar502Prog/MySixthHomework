#include<iostream>
#include <cmath>
#include<Windows.h>

int quert(int first, int second);

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int value = 5, power = 2;
    int result = quert(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;
    value = 3;
    power = 3;
    result = quert(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;
    value = 4;
    power = 4;
    result = quert(value, power);
    std::cout << value << " в степени " << power << " = " << result << std::endl;

    return EXIT_SUCCESS;
}
int quert(int first, int second) {
    return pow(first, second);
}