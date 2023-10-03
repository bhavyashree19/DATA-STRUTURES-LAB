#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
	};
	struct node* head,*tail=NULL;
	void create(int item){
		struct node* newnode=(struct node*)malloc(sizeof(newnode));
		newnode -> data =item;
		newnode -> next =NULL;
		if(head==NULL){
			head=newnode;
			tail=newnode;
		}
		else{
			tail -> next=newnode;
			tail=tail ->next;
		}
	}
	int display(){
		struct node*current=head;
			if(head==NULL){
				printf("the list is empty");
			}
			else{			
				while(current!=NULL){
					printf("%5d",current ->data);
					current=current ->next;
				}
			}
		}
int main(){
	create(10);
	create(20);
	create(30);
	create(40);
	display();
}


