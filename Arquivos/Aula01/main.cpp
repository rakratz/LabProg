#include <iostream>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    std::cout << "Ol�, Mundo!" << std::endl;
    return 0;
}
