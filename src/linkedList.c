#include <stdio.h>
#include <stdlib.h>

#define MAX 50
signed int inputValue = 5;

//링크리스트 구조체
typedef struct linkedList{
    struct node *head;
    struct node *current;
    struct node *tail;
    signed int length;
} LinkedList;

//노드 구조체
typedef struct node{
    int data;
    struct node *next;
} Node;

//링크리스트 배열에 값 추가 메소드
void append(LinkedList *linkedList, int data){
    Node *node = (Node*)malloc(sizeof(Node)); 
    node->data = data;
    node->next = NULL;

    if(linkedList->head == NULL && linkedList->tail == NULL){
        linkedList->head = node;
        linkedList->tail = node;
    }
    else{
        linkedList->tail->next = node;
        linkedList->tail = node;
    }
    linkedList->current = node;
    linkedList->length++;
}
//링크리스트의 데이터 값으로 리스트 찾는 메소드
void search(LinkedList *linkedList, int data){
    linkedList->current = linkedList->head;
    while(linkedList->current->data == data){
        linkedList->current = linkedList->current->next;
    }
}
//링크 리스트에서 입력된 값 앞에 노드 추가 메소드
void insertSearch(LinkedList *linkedList, int data, int position){
    linkedList->current = linkedList->head;

    Node *node = (Node*)malloc(sizeof(Node)); 
    node->data = data;
    node->next = NULL;

    Node *object = NULL;
    int i = 1;
    while(i < position-1){
        linkedList->current = linkedList->current->next;
        object = linkedList->current->next;
        i++;
    }

    linkedList->current->next = node;
    node->next = object;
    linkedList->length ++;
}
//링크리스트 전체 출력 메소드
void printNodeData(LinkedList *linkedList){
    linkedList->current = linkedList->head;
    for(int i = 0; i<linkedList->length; i++){
        printf("%d ", linkedList->current->data);
        linkedList->current = linkedList->current->next;
    }
}
//메인 메소드
int main(){
    LinkedList *linkedList = (LinkedList *)malloc(sizeof(LinkedList));
    linkedList->current = NULL;
    linkedList->head = NULL;
    linkedList->tail = NULL;
    linkedList->length = 0;
    
    int i,temp,newElePos,newEle;

    printf("Enter elements in array: ");
    for(i = 0; i < inputValue; i++){
        scanf("%d", &temp);
        append(linkedList,temp);
    }

    printf("Stored element in array: ");
    printNodeData(linkedList);
    printf("\n");
    
    printf("Enter position for enter element: ");
    scanf("%d", &newElePos);

    printf("Enter new element: ");
    scanf("%d", &newEle);

    insertSearch(linkedList,newEle,newElePos);
    printNodeData(linkedList);
    printf("\n");
}   