#include <stdio.h>
#include <stdlib.h>

typedef struct node_t{
    // string to be stored
    char* data;
    struct node_t* next;
}node_t;

node_t* create_head(){
    node_t* head = (node_t*)malloc(sizeof(node_t));
    head->next = NULL;
    head->data = "This is the head";
    return head;
}

int node_push(node_t* list, char *data){
    while(list->next != NULL){
        list = list->next;
    }
    list->next = (node_t*)malloc(sizeof(node_t));
    list->next->next = NULL;
    list->next->data = data;
    return 0;
}

int list_print(node_t* list){
    while(list != NULL){
        printf("%s\n", list->data);
        list = list->next;
    }
    return 0;
}

int main(int argc, char *argv[]){
    node_t* head = create_head();
    node_push(head, "hello there");
    list_print(head);
    return 0;
}
