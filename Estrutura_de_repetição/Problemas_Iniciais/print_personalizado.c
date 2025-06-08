#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);  // Para suportar UTF-8 no Windows

    char traco = '-';

    for (int i = 0; i <= 10; i++) {
        printf("\n%d\n%c\n", i, traco);
    }

    return 0;
}
