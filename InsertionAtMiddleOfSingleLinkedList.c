#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

int size = 0;

void insertMiddle (struct Node **head, int data)
{

  struct Node *newNode = (struct Node *) malloc (sizeof (struct Node));
  newNode->data = data;

  // if the LL was empty
  if (*head == NULL)
    {
      newNode->data = data;
      newNode->next = *head;
      *head = newNode;
      size++;
      return;
    }

  // otherwise
  struct Node *temp = *head;

  // find correct insertion position for middle
  int mid = (size % 2 == 0) ? (size / 2) : (size + 1) / 2;

  // traverse to current mid position
  while (--mid)
    {
      temp = temp->next;
    }

  newNode->next = temp->next;
  temp->next = newNode;
  size++;

}

void display (struct Node *node)
{
  printf ("Linked List : ");

  // as linked list will end when Node is Null
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf ("\n\n");
}

int main ()
{
  //creating 2 pointers of type struct Node
  //So these can point to address of struct type variable
  struct Node *head = NULL;
  struct Node *node2 = NULL;

  // allocate 3 nodes in the heap 
  head = (struct Node *) malloc (sizeof (struct Node));
  node2 = (struct Node *) malloc (sizeof (struct Node));

  head->data = 10;		// data set for head node 
  head->next = node2;		// next pointer assigned to address of node2 

  node2->data = 50;
  node2->next = NULL;

  size = 2;

  display (head);

  insertMiddle (&head, 20);
  display (head);

  insertMiddle (&head, 40);
  display (head);

  insertMiddle (&head, 30);
  display (head);

  return 0;
}
