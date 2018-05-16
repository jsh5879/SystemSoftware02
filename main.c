#include <stdio.h>
#include <string.h>
#include "main.h"

int service = 0;

void new_register();
void allprint();
void personalprint();

int main()
{
    do
    {
        printf("Phone number management\n\n");
        printf("1.Register   2.All search   3.Personal search   4.Exit\n\n");
        printf("Select menu: ");
        scanf("%d", &service);

        switch (service)
        {
            case 1: new_register(); break;
            case 2: allprint(); break;
            case 3: personalprint();
        }
    } while (service != 4);

    return 0;
}
