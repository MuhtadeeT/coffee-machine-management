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
        printf("\nWrite action\n1 - fill\n2 - take\n3 - remaining\n4 - exit\n");
        scanf("%d", &input);
        action = input;

  if (action == 3) {
    printf("\nThe coffee machine has:\n%d ml of water\n%d ml of milk\n%d g of coffee beans\n%d disposable cups\n%d taka\n", water, milk, beans, cups, money);

  }

  if (action == 1) {
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

  if (action == 2) {
    printf("\n%d taka withdrawn\n", money);
    money = 0;
  }

  if (action == 4) {
    printf("\nThank You!\n");
    break;
  }

}
    return 0;

}
