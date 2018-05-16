#include <stdio.h>
#include <string.h>

extern int k;
extern char name[30][10];
extern char phone_number[30][15];

void allprint()
{
    int i;
    printf("\n<<Phone list>>\n");
    for (i = 0; i<k; i++)
        printf("%s %s\n", name[i], phone_number[i]);
    printf("\n");
}
