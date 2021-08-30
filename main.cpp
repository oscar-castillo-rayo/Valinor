#include <iostream>

void oddOrEven();

void courseApproval();

void menu();

int main() {
    menu();
    return 0;
}

void menu() {
    int option;

    do {

        std::cout << "*** MENU DEL SISTEMA ***" << std::endl << std::endl
                  << "1. Número Par/Impar" << std::endl
                  << "2. Nota Curso" << std::endl
                  << "3. Salir" << std::endl << std::endl;


        std::cout << "Digite una opción:" << std::endl;
        std::cin >> option;
        switch (option) {
            case 1:
                oddOrEven();
                break;
            case 2:
                courseApproval();
                break;
            case 3:
                std::cout << "Gracias y adiós " << std::endl;
                break;
            default:
                std::cout << "No existe la opción. Intenta de nuevo" << std::endl;
        }

    } while (option != 3);
}

void oddOrEven() {
    int n;
    std::cout << "Digite un número: ";
    std::cin >> n;
    if (n % 2 == 0) {
        std::cout << "El número es par" << std::endl;
    }
    else {
        std::cout << "El número " << n << " es impar." << std::endl;
        std::cout << "Rayo, te gane!!!" << std::endl;
    }
}

void courseApproval() {
    int nota;
    std::cout << "Digite la nota del curso: ";
    std::cin >> nota;
    if (nota >= 65) {
        std::cout << "Felicidades, estimado Oscar. Esto es Code With Me!!!!";
    }
    else {
        std::cout << "Bienvenido a code with me";
    }
}