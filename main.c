#include <stdio.h>
#include <stdbool.h>

void chapitre_variables(void)
{
    // integer
    int variable; // declaration sans valeur
    variable = 3; // la tu changes ta variable

    int variable_bis = 3;

    // float
    float flottant = 3.0;

    // string / char
    char character = 'F';
    char characters[] = "Charly";

    // boolean
    int boolean = 12 > 18;
    bool boolean_bis = 10 < 18; // bool uniquement en important la librairie <stdbool.h>

    // %d -> pour afficher un int (entier)
    // n.b : pour aller a la ligne, oublie pas de faire \n
    printf("%d", variable);

    // %f -> pour afficher un float (decimal)
    printf("%f", flottant);

    // %c -> pour afficher une chaine de caractere (string / char)
    printf("%c", character);

    // %d -> pour afficher un booleun car entier (bool)
    printf("%d", boolean);

    // pour afficher plusieurs variables
    printf("%c + %.3f + %d", character, flottant, boolean);
}

void chapitre_scanf(void)
{
    // saisir quelque chose dans la console
    int age;
    printf("Entrez votre age : ");
    scanf("%d", &age);
    printf("%d\n", age);
}

// Exercices
int main(void)
{
    // ========== Compiler le code ==========
    // Pour compiler le code, il faut faire la commande suivante :
    // - gcc main.c -o main; ./main.exe

    /**
     * Exercice 1 : niveau simple
     *
     * Creer une variable de type entier et 
     * l'afficher dans la console
     */



    /**
     * Exercice 2 : niveau simple
     *
     * Creer deux variables de type float et les 
     * afficher dans la console
     */



    /**
     * Exercice 3 : niveau moyen
     *
     * - Creer 2 variable de type chaine
     * - Creer une variable qui concatene* ces 2 variables   ->   * concatene = les fusionner / les additionner
     * - Afficher cette variable dans la console
     */



    /**
     * Exercice 4 : niveau moyen
     *
     * - Creer 2 variable de type float
     * - Additionner ces deux variables dans une nouvelle variable
     * - Afficher cette le resultat (1 chiffre apres la virgule)
     */



    /**
     * Exercice 5 : niveau moyen
     *
     * - Creer une variable de type boolean qui verifie si le resultat du precedent exercice est superieur a 5
     * - Afficher le resultat dans la console
     */



    return 0;
}