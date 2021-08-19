#include<stdio.h>
#include<stdlib.h>
struct num //circular linked list
{
char c;
struct num *next;
};
typedef struct num node;
node *first = NULL, *last = NULL;
void create_node(char vowels)
{
node *new = (node*)malloc(sizeof(node));
if(first==NULL)
{
new -> c=vowels;
new-> next = first;
first = last = new;
}
else
{
new -> c = vowels;
new -> next = first;
last -> next = new;
last = new;
}
}
void display()
{
node *temp = first;
do
{
printf("%d\n", temp -> c);
temp = temp -> next;
}
while(temp!= first);
}
int main()
{
create_node('a'); //97
create_node('e'); //101
create_node('i'); //105
create_node('o'); //111
create_node('u'); //117
display();
}
