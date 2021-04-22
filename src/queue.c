#include <stdio.h>
#define MAX 3

int list[MAX];
int cnt = 0;

//배열이 비었는지 확인
int IsEmpty(void)
{
    if (cnt == 0)
        return 1;
    else
        return 0;
}
//배열이 가득차있는지 확인
int IsFull(void)
{
    if (cnt >= MAX)
        return 1;
    else
        return 0;
}
//배열에 삽입
int Insertion(int value)
{
    if (IsFull())
    {
        printf("Queue is Full.\n");
        return 0;
    }
    else
    {
        list[cnt++] = value;
        return 1;
    }
}
//배열에서 삭제
int Deletion(int value)
{
    if (IsEmpty())
        printf("list is Empty.\n");
    else
    {
        for (int i = 0; i < cnt; i++)
        {
            if (list[i] == value)
            {
                for (int j = i + 1; j < cnt; j++)
                {
                    list[i] = list[j];
                }
                cnt--;

                break;
            }
        }
    }
}
//배열에 담긴 element확인
int Display()
{
    for (int i = 0; i < cnt; i++)
    {
        printf("      %d", list[i]);
    }
}
//실행
int main()
{
    int option, element;
    while (1)
    {
        printf("1.Insertion \n");
        printf("2.Deletion \n");
        printf("3.Display \n");
        printf("0.Exit \n");

        printf("Selection Option : \n");
        scanf("%d", &option);

        if (option == 1)
        {
            printf("Element : \n");
            scanf("%d", &element);
            if (Insertion(element))
            {
                printf("Successfully Insertion");
                printf("\n");
            }
        }
        else if (option == 2)
        {
            printf("Element : \n");
            scanf("%d", &element);
            // printf("Deletion");
            Deletion(element);
            printf("\n");
        }
        else if (option == 3)
        {
            Display();
            printf("\n");
        }
        else
        {
            printf("Exit");
            printf("\n");
            break;
        }
    }
}