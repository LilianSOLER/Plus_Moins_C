#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const int MIN = 1, MAX = 100;
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN,nombrePropose = 0;

    printf("Bienvenu sur le jeu du plus ou moins.\n"
               "Vous devez devinez un nombre compris entre %d et %d\n\n",MIN,MAX);

    while(nombreMystere != nombrePropose)
    {
        printf("Quel est le nombre ?\n");
        scanf("%d",&nombrePropose);
        if(nombrePropose < nombreMystere)
        {
            printf("C'est plus !\n\n");
        }
        else if(nombrePropose > nombreMystere)
        {
            printf("C'est moins !\n\n");
        }
    }
    printf("Bravo vous avez gagnez, le nombre était bien %d \n\n", nombreMystere);
    return 0;
}
