#include <iostream>
#include "include/change_symbol_text.h"
#include <string>


// Вариант 14: Замена каждого n-го символа old_value на new_value
int main() {
    std::string text;
    int n;
    char old_value; 
    char new_value;

    std::cout << "Введите строку для замены: "; std::cin >> text;
    std::cout << "Введите число n: "; std::cin >> n;
    std::cout << "Введите заменяемый символ: "; std::cin >> old_value;
    std::cout << "Введите новый символ: "; std::cin >> new_value;

    std::cout << change_symbol_text(text, n, old_value, new_value) << std::endl;

    return 0;
}