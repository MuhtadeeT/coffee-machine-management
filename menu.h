#include <stdio.h>
#include <stdlib.h>

int menu(void)
{
    const input;
    int action = 0;
    int water = 400;
    int milk = 540;
    int beans = 120;
    int cups = 9;
    int money = 550;
    while (action != '5') {
        printf("\nWrite action\n1 - buy\n2 - fill\n3 - take\n4 - remaining\n5 - exit\n");
        scanf("%d", &input);
        action = input;

        if (action == 1) {
     int buy;
     printf("\nWhat do you want to buy?\n1 - espresso [4 taka]\n2 - latte [7 taka]\n3 - cappuccino [6 taka]\n4 - back to main menu:\n");
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
            printf("\nSorry, not enough coffee beans!\n");
          }
        } else {
          printf("\nSorry, not enough water!\n");
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
              printf("\nSorry, not enough coffee beans!\n");
            }
          } else {
            printf("\nSorry, not enough milk!\n");
          }

        } else {
          printf("\nSorry, not enough water!\n");
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
              printf("\nSorry, not enough coffee beans!\n");
            }
          } else {
            printf("\nSorry, not enough milk!\n");
          }

        } else {
          printf("\nSorry, not enough water!\n");
        }
        break;
      }

      case (4) : continue;

    }
  }

  if (action == 4) {
    printf("\nThe coffee machine has:\n%d ml of water\n%d ml of milk\n%d g of coffee beans\n%d disposable cups\n%d taka\n", water, milk, beans, cups, money);

  }

  if (action == 2) {
    int water1;
    printf("Write how many ml of water you want to add:\n");
    scanf("%d", &water1);
    int milk1;
    printf("Write how many ml of milk you want to add:\n");
    scanf("%d", &milk1);
    int beans1;
    printf("Write how many grams of coffee beans you want to add:\n");
    scanf("%d", &beans1);
    int cups1;
    printf("Write how many disposable coffee cups you want to add:\n");
    scanf("%d", &cups1);
    water += water1;
    milk += milk1;
    beans += beans1;
    cups += cups1;
  }

  if (action == 3) {
    printf("\n%d taka withdrawn\n", money);
    money = 0;
  }

  if (action == 5) {
    printf("\nThank You!\n");
    break;
  }

}
    return 0;

}
