#include <iostream>
void jigitFib(int numereit);

int main() {
    setlocale(LC_ALL, "RUS");
    int N{};
    std::cout << "¬ведите число: ";
    std::cin >> N;
    jigitFib(N);

    return EXIT_SUCCESS;

}
void jigitFib(int numereit) {
    if (numereit > 2) {
        long long num1{}, num2{ 1 }, sum{};
        std::cout << num1 << ' ' << num2 << ' ';
        for (int i = 2; i < numereit; i++) {
            sum = num1 + num2;
            std::cout << sum << ' ';
            num1 = num2;
            num2 = sum;
        }
    }
}