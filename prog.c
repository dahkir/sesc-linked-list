#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int value;
  struct Node * next;
};

int main() {
  struct Node * head = (struct Node*)malloc(sizeof(struct Node));
  head->next=NULL;
  char str [100];
  //push-front func
  while (scanf("%s", str)!=EOF){
    if (strcmp(str, "push-front")==0){
      int n;
      scanf("%d", &n);
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode->next=head;
      tempnode->value=n;
      head=tempnode;
      printf("%d\n", n);
      //dump func
    }else if (strcmp(str, "dump")==0){
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      if (head->next==NULL){
        printf("empty\n");
      }else{
      while(tempnode->next!=NULL){
        printf("%d ",tempnode->value);
        tempnode=tempnode->next;
      }
      printf("\n");}
      //push-back func
    }else if(strcmp(str, "push-back")==0){
      int n;
      scanf("%d", &n);
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      while (tempnode->next!=NULL)tempnode=tempnode->next;
      tempnode->next=(struct Node *)malloc(sizeof(struct Node));
      tempnode->value=n;
      printf("%d\n", n);
      //clearfunc
    }else if(strcmp(str, "clear")==0){
      while (head->next!=NULL){
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      head=head->next;
      free(tempnode);
      }
      printf("empty\n");
      //peek-front func
    }else if(cmp(str, "peek-front")==0){
      if (head->next==NULL){printf("empty\n");}else{
      printf("%d\n", head->value);}
      //peek-back func
    }else if(strcmp(str, "peek-back")==0){
      if (head->next==NULL){printf("empty\n");}else{
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      while(tempnode->next->next!=NULL)tempnode=tempnode->next;
      printf("%d\n", tempnode->value);}
      //pop-front function
    }else if(strcmp(str, "pop-front")==0){
      if(head->next==NULL){printf("empty\n");}else{
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      printf("%d\n", head->value);
      head=head->next;
      free(tempnode);}
      //pop-back function
    }else if(strcmp(str, "pop-back")==0){
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      while(tempnode->next->next->next!=NULL)tempnode=tempnode->next;
      printf("%d\n",tempnode->next->value);
      free(tempnode->next);
      tempnode->next->next=NULL;
      //print size
    }else if(strcmp(str, "size")==0){
      int n=0;
      struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
      tempnode=head;
      while(tempnode->next!=NULL){tempnode=tempnode->next;n++;};
      printf("%d\n", n);
    }else printf("achtung! unknown operation %s\n", str);
  }
  return 0;
}