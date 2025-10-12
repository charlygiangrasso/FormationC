#include <stdio.h>

/**
 * Fonctions :
 *      int fonction() {
 *
 *      }
 */

void hello_world() {
    printf("hello_world\n");
}

int afficher_nombre() {
    int nombre = 11;
    return nombre;
}

int main() {
    printf("%d", afficher_nombre());
}