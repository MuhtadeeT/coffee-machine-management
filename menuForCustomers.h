#include <stdio.h>
#include <stdlib.h>

int customerMenu(void)
{
    const input;
    int water = 400;
    int milk = 540;
    int beans = 120;
    int cups = 9;
    int money = 550;

     int buy;
     while(buy != 4)
     {
     printf("\nWhat do you want to buy?\n1 - Espresso [$4]\n2 - Latte [$7]\n3 - Cappuccino [$6]\n4 - Exit:\n");
     scanf("%d", &buy);
    switch (buy) {
      case (1) : {
        if (water>=250) {
          if (beans>=16) {
            water -= 250;
            beans -= 16;
            money += 4;
            cups--;
            printf("\nI have enough resources, making you a coffee!\n");

          } else {
            printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
          }
        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (2) : {
        if (water>=350) {
          if (milk>=75) {
            if (beans>=20) {
              water -= 350;
              milk -= 75;
              beans -= 20;
              money += 7;
              cups--;
              printf("\nI have enough resources, making you a coffee!\n");

            } else {
              printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
            }
          } else {
            printf("\nSorry, not enough milk! Please call a member of admin team. Sorry for the inconvenience.\n");
          }

        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (3) : {
        if (water>=200) {
          if (milk>=100) {
            if (beans>=12) {
              water -= 200;
              milk -= 100;
              beans -= 12;
              money += 6;
              cups--;
              printf("\nI have enough resources, making you a coffee!\n");

            } else {
              printf("\nSorry, not enough coffee beans! Please call a member of admin team. Sorry for the inconvenience.\n");
            }
          } else {
            printf("\nSorry, not enough milk! Please call a member of admin team. Sorry for the inconvenience.\n");
          }

        } else {
          printf("\nSorry, not enough water! Please call a member of admin team. Sorry for the inconvenience.\n");
        }
        break;
      }

      case (4) : continue;

    }
  }
}


