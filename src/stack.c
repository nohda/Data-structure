#include <stdio.h>
#include <stdlib.h>
#define MAX 50

unsigned int arr[MAX];
signed int inputValue = 5;

int main(){
    int temp,temp_;
    int position;
    int arr[MAX] = {0, };
    int arr_[MAX] = {0, };
    int i,j,k;

    printf("Enter 5 elements in array: ");

    for(i = 0; i < inputValue; i++){
        scanf("%d", &temp);
        arr[i] = temp;
    }

    printf("Stored element in array: ");
    for(j = 0; j < inputValue; j++) printf("%d ", arr[j]);
    printf("\n");
    
    printf("Enter position for enter element: ");
    scanf("%d", &position);
    printf("Enter new element: ");
    scanf("%d", &temp);

    i = 0;
    j = 0;
    for(k =0; k < inputValue; k++){
        if(position-1 == i){
            arr_[j] = temp;
            j++;
        }
        arr_[j] = arr[i];
        j++;
        i++;
    }
    printf("Stored data in array: ");
    for (j = 0; j < inputValue+1; j++) printf("%d ", arr_[j]);
    printf("\n");
}   