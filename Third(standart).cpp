#include <iostream>
int jigitFib(int numereit);

int main() {
    setlocale(LC_ALL, "RUS");
    int N{};
    std::cout << "¬ведите число: ";
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cout << jigitFib(i) << ' ';
    }

    return EXIT_SUCCESS;

}
int jigitFib(int numereit) {
    int num1{}, num2{ 1 };
    if (numereit <= 1) {
        return num1;
    }
    if (numereit == 2) {
        return num2;
    }
    return jigitFib(numereit - 1) + jigitFib(numereit - 2);
}