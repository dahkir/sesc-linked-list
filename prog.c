#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 struct Node{
   int value;
   struct Node * next;
 };
 
 int main() {
   struct Node * head = NULL;
   char str [100];
   //push-front function
   while (scanf("%s", str)!=EOF){
     if (strcmp(str, "push-front")==0){
       int n;
       scanf("%d\n", &n);
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       if (head==NULL){
         head= (struct Node *)malloc(sizeof(struct Node));
         head->value=n;
         printf("%d\n", n);
       }else{
       tempnode->next=head;
       tempnode->value=n;
       head=tempnode;
       printf("%d\n", n);}
       //dump function
     }else if (strcmp(str, "dump")==0){
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       tempnode=head;
       if (head==NULL){
         printf("empty\n");
       }else{
       while(tempnode!=NULL){
         printf("%d ",tempnode->value);
         tempnode=tempnode->next;
       }
       printf("\n");}
       //push-back function
     }else if(strcmp(str, "push-back")==0){
       int n;
       scanf("%d", &n);
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       if (head==NULL){
         head=(struct Node*)malloc(sizeof(struct Node));
         head->value=n;
         printf("%d\n", n);}else{
       tempnode=head;
       while (tempnode->next!=NULL)tempnode=tempnode->next;
       tempnode->next=(struct Node *)malloc(sizeof(struct Node));
       tempnode->next->value=n;
       printf("%d\n", n);}
       //clear function
     }else if(strcmp(str, "clear")==0){
       while (head!=NULL){
       while (head!=NULL){
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       tempnode=head;
       head=head->next;
 @@ -69,7 +69,7 @@ int main() {
       if (head==NULL){printf("empty\n");}else{
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       tempnode=head;
       while(tempnode!=NULL)tempnode=tempnode->next;
       while(tempnode->next!=NULL)tempnode=tempnode->next;
       printf("%d\n", tempnode->value);}
       //pop-front function
     }else if(strcmp(str, "pop-front")==0){
       if(head->next==NULL){printf("empty\n");}else{
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       tempnode=head;
       printf("%d\n", head->value);
       head=head->next;
       free(tempnode);}
       //size function
     } else if(strcmp(str, "size")==0){
       int n=0;
       struct Node * tempnode=(struct Node*)malloc(sizeof(struct Node));
       tempnode=head;
       while(tempnode!=NULL){tempnode=tempnode->next;n++;};
       printf("%d\n", n);
     }else printf("achtung! unknown operation %s\n", str);
   }
   return 0;
 }
