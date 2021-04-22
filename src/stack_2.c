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

    printf("Enter elements in array: ");

    for(i = 0; i < inputValue; i++){
        scanf("%d", &temp);
        arr[i] = temp;
    }

    printf("Stored element in array: ");
    for(j = 0; j < inputValue; j++) printf("%d ", arr[j]);
    printf("\n");
    
    printf("Enter poss. of element to delete: ");
    scanf("%d", &position);


    i = 0;
    j = 0;
    for(k =0; k < inputValue-1; k++){
        if(position-1 == i){
            i++;
        }
        arr_[j] = arr[i];
        j++;
        i++;
    }
    printf("After deletion elements in array: ");
    for (j = 0; j < inputValue-1; j++) printf("%d ", arr_[j]);
    printf("\n");
}   