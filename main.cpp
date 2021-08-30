#include <iostream>

int main() {
    int nota;
    std::cout << "Digite la nota del curso: ";
    std::cin >> nota;
    if (nota >= 65) {
        std::cout << "Felicidades, estimado estudiante. Usted ha aprobado el curso.";
    }
    else {
        std::cout << "Salado papillo. Siga participando. Mejor suerte la proxima vez.";
    }
    return 0;
}
