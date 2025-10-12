#include <stdio.h>

/**
 * Condition 'if'
 * 
 *      if (condition) {
 *          ...code
 *      } else if (condition) {
 *          ...code
 *      } else {
 *          ...code
 *      }
 */

int main(void) {
    int age = 12;

    // Condition if
    if (age >= 21) {
        printf("Vous etes majeur en E-U");
    } else if (age >= 18) {
        printf("Vous etes majeur en france");
    } else {
        printf("Vous etes mineur");
    }

    int inventaire = 21;

    if (inventaire <= 25) {
        printf("Tu as %d dans ton inventaire, ca va...", inventaire);
    } else if (inventaire <= 50) {
        printf("%d dans ton inventaire la moitie", inventaire);
    } else if (inventaire <= 75) {
        printf("%d dans ton inventaire. Attention bientot remplis", inventaire);
    } else if (inventaire <= 100) {
        printf("Fais attention a ton inventaire : %d", inventaire);
    } else if (inventaire == 100) {
        printf("Plus de place dans l'inventaire : %d", inventaire);
    } else {
        printf("Ton inventaire est vide");
    }
    
}