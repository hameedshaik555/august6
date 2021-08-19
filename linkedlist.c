  

#include<stdio.h>
#include<stdlib.h>
struct num
{
int data;
struct num *next;
};
typedef struct num node;
node *first = NULL, *last = NULL;
void create_node(int abc)
{
node *new = (node*)malloc(sizeof(node));
if(first == NULL)
{
new -> data = abc;
new-> next = NULL;
first = last = new;
}
else
{
new -> data = abc;
new -> next = NULL;
last -> next = new;
last = new;
}
}
void display()
{
node *temp = first;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
int main()
{
create_node(100);
create_node(200);
create_node(300);
display();
return 0;
}
