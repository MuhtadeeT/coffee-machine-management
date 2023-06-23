#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#define SIZE 128

void print_image(FILE *fptr);

int splash(void)
{
    char *filename = "welcome.txt";
    FILE *fptr;

    fptr = fopen(filename, "r");

    if(fptr == NULL)
    {
        fprintf("error opening %s\n", filename);
        return 1;
    }

    print_image(fptr);

    fclose(fptr);

    sleep(1);
    system("cls");

    return 0;
}

void print_image(FILE *fptr)
{
    char read_string[SIZE];

    while(fgets(read_string, sizeof(read_string), fptr) != NULL)
        printf("\t\t\t\t\t\t%s", read_string);
}

