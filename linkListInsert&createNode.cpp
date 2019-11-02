#include <iostream>

using namespace std;

class node{
public:
    int data;
    node *next;

};
void create_node(node **head_ref,int new_data){

     node *new_node=new node();

     new_node->data=new_data;
     new_node->next=*head_ref;
     *head_ref=new_node;

}


void printData(node *d){

while(d !=NULL){

    cout<<d->data<<endl;
    d=d->next;
}

}

int main()
{

//New Node Initialize
node *head=NULL;
node *second=NULL;
node *third=NULL;

// Allot memory in heep
head = new node();
second =new node();
third = new node();

// data insert
head->data=12;
head->next=second;

second->data=13;
second->next=third;

third->data=15;
third->next=NULL;


create_node(&head,16);
create_node(&head,26);
create_node(&head,36);
create_node(&head,46);

printData(head);
return 0;
}
