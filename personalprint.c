#include <stdio.h>
#include <string.h>

extern int k;
extern char name[30][10];
extern char phone_number[30][15];

void personalprint()
{
    int i;
    char find[15];
    printf("Name to search for: ");
    scanf("%s", find);
    for (i = 0; i<k; i++){
        if(!strcmp(find, name[i]))
        {
            printf("\n%s %s\n\n", name[i], phone_number[i]);
        }
        else
            printf("\nNo result.\n\n");
    }
}
