#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int continuerPartie = 1;
    while(continuerPartie == 1)
    {
        const int MIN = 1;
        int nombreMystere = 0,nombrePropose = 0, essais = 0,MAX = 100,difficulte = 1;

        printf("Choississez vôtre difficulté : (1 ou 2 ou 3 ) //le niveau par défaut est le 1\n\n");
        scanf("%d",&difficulte);
        switch (difficulte)
        {
            case 2:
                MAX = 1000;
                printf("\nD'accord, vous avez choisit le niveau 2\n\n");
                break;
            case 3:
                printf("\nOh, vous avez choisit le niveau 3\n\n");
                MAX = 10000;
                break;
            default:
                printf("\nParfait, vous avez choisit le niveau 1\n\n");
                break;
        }
        nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

        printf("Bienvenu sur le jeu du plus ou moins.\n"
               "Vous devez devinez un nombre compris entre %d et %d\n\n",MIN,MAX);

        while (nombreMystere != nombrePropose) {
            printf("Quel est le nombre ?\n");
            scanf("%d", &nombrePropose);
            if (nombrePropose < nombreMystere) {
                printf("C'est plus !\n\n");
            } else if (nombrePropose > nombreMystere) {
                printf("C'est moins !\n\n");
            }
            essais++;
        }
        printf("Bravo vous avez gagnez en %d coup, le nombre était bien %d \n\n", essais, nombreMystere);
        printf("Pour continuer tapez 1, et appuyer sur n'importe quel autre touche pour arreter\n\n");
        scanf("%d",&continuerPartie);
    }
    return 0;
}
