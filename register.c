#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *password = "qwer1234";
extern int service;
int k = 0;
char name[30][10];
char phone_number[30][15];

void new_register()
{
    static int fail_number = 1;
    int i, j;
    char *enter;

    enter = (char*)malloc(sizeof(char)*10);

    while(1)
    {
        printf("\nPassword: ");
        scanf("%s", enter);

        for(i=0; i<8; i++){
            if(*(enter+i) != *(password+i)){
                j = 0;
                break;
            }
            j = 1;
        }
        if(j){
            printf("\nName to register: ");
            scanf("%s", name[k]);
            printf("Phone number: ");
            scanf("%s", phone_number[k]);
            printf("%s Complete registration!\n\n", name[k]);
            k++;
            break;
        }
        else{
            if(fail_number<=2){
                printf("Password(%dth failed): ", fail_number);
                fail_number++;
            continue;
            }
            else{
                printf("Password(3th failed): you can't register!\n\n");
                printf("Exit the program.\n");
                service = 4;
                break;
            }
        }
    }
}
