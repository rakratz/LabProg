#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    std::cout << "Olá, Mundo!" << std::endl;
    return 0;
}
