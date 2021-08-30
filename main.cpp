#include <iostream>

int main() {
    int nota;
    std::cout << "Digite la nota " << std::endl;
    std::cin >> nota;
    if (nota >= 70) {
        std::cout << "Usted ha aprobado";
    }
    else {
        std::cout << "Usted ha reprobado";
    }

    return 0;
}
