#include <iostream>

int main() {
    int nota;
    std::cout << "Digite la nota: ";
    std::cin >> nota;
    if (nota >= 65) {
        std::cout << "Usted ha aprobado";
    }
    else {
        std::cout << "Usted ha reprobado";
    }

    return 0;
}
