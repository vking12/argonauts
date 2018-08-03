//
//  linked_list.c
//  argonauts
//
//  Created by Vijayraj Mahida on 8/2/18.
//  Copyright © 2018 Vijayraj Mahida. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

typedef struct node {
    int data;
    struct node* next;
} node;

typedef void (*callback)(node* data);

node* createNode(int data, node* next){
    node* new_node = (node*)malloc(sizeof(node));
    
    // error handling in case new node has not enough memory
    if (new_node == NULL){
        printf("Error in creating new node\n");
        exit(0);
    }

    new_node->data = data;
    new_node->next = next;
    
    return new_node;
}

node* prepend(node* head, int data){
    node* new_node = createNode(data, head);
    head = new_node;
    
    return head;
}

node* append(node* head, int data){
    if (head == NULL)
        return NULL;
    
    node *cursor = head;
    while (cursor->next != NULL)
        cursor = cursor->next;
        
    node* new_node = createNode(data, NULL);
    cursor->next = new_node;
    
    return head;
}

int main(int argc, const char * argv[]){
    
    return 0;
}
