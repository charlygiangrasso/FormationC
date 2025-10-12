#include <stdio.h>

/**
 * boucle for :
 *     for (int i = 0 ; condition ; i++) {
 *          ...code
 *     }
 * 
 * boucle while
 *      while (condition) {
 *          ...code
 *      }
 */

int main() {
    // boucle for
    for (int i = 0; i < 100; i++) {
        printf("%d\n", i);
    }

    // boucle while
    int entier;
    while (1) {
        printf("Entrez un nombre : "); 
        scanf("%d", &entier);

        if (entier > 10) {
            break;
        }
    }


}