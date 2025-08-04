#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};
int main(){
struct node *head, *nn, *temp;
head = NULL;
int choice=0;
while (choice==0){
	nn=(struct node*) malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &nn->data);
	nn->next = NULL;
	if(head==NULL){
		head = temp = nn;}
	else {
		temp->next = nn;
		temp = nn; }
printf("enter your choice  ");
scanf("%d", &choice);
}
int count = 1;
temp = head;
while(temp->next!=NULL){
	count++ ;
	temp=temp->next;
	}
printf("%d", count) ;
int k;
printf("enter the value of k");
scanf("%d", &k);

temp = head;
int i = 0;
while(i<(count-k)){
	temp= temp->next;
	i++;
	}
printf("%d",temp->data);
