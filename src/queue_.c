#include <stdio.h>
int list[MAX];

int main(){
    int arr[3] = {0,};
    int choice, number, i;
    char answer;
    char brea;
    while (1)
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. display\n`");
        printf("4. exit\n");

        printf("Enter your choice : \n");
        scanf("%d", &choice);

        if (choice == 1)
        {
            i = 0;
            while (1)
            {
                printf("Enter your choice : ");
                printf("%d", &choice);
                printf("Pushed an element(Y/N) : \n");
                scanf("%c", &answer);
                if (answer == 'y' || answer == 'Y')
                {
                    scanf("%d", &number);
                    printf("Enter element in stack : \n");
                    arr[i] = number;
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        else if (choice == 2)
        {
            printf("Enter your choice : ");
            printf("%d", &choice);

            scanf("%d", &number);
            printf("Enter element in stack : \n");
            for (int j = 0; j < 3; j++)
            {
                if (arr[j] == number)
                {
                }
            }
        }
        else if (choice == 3)
        {
            printf("Enter your choice : ");
            printf("%d", &choice);
            for (int j = 0; j < 3; j++)
            {
                printf("%d/n", arr[j]);
            }
        }

        else if (choice == 4)
        {
            printf("Enter your choice : ");
            printf("%d", &choice);
            break;
        }
    }