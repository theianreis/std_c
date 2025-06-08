#include <windows.h>
#include <stdio.h>

int main() {

    SetConsoleOutputCP(65001);  // Muda o code page do console para UTF-8
    //identificador numérico (Code Page) do UTF-8 no Windows.

    printf("Olá, mundo com acento!\n");
    return 0;
}
