#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_SIZE 8

typedef struct {
  int index;
  int timestamp;
  void* data;
  int data_size;
  
  char* prev_hash;
  char* self_hash;
  void* nounce;
  
} node;


node* constructor_node(int index,int timestamp,void* data,int data_size,char* prev_hash){
  node* new_node = malloc(sizeof(node));
  new_node->index = index;
  new_node->timestamp = timestamp;
  new_node->data = data;
  new_node->data_size = data_size;
  new_node->prev_hash = prev_hash;
  new_node->self_hash = "self_hash";
}

void printer_node(node* node){
  printf("Node index %i \n\tTimestamp: %i\n\tData Size: %i \n\tPrev_hash: %s",node->index,node->timestamp,node->data_size,node->prev_hash);
  return;
}

char* hashFucntion(char* string,int size){
  return 0;
}

int main(){
  char* content = "Hello";
  node* genisis = constructor_node(1,1,&content,6,"prev_hash");
  printer_node(genisis);
  return 0;
}
