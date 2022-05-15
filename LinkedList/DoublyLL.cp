// Double LL :

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

void front(Node **head_ref,int newData){
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=*head_ref;
    newNode->prev=NULL;
    
    if((*head_ref)!=NULL)
        (*head_ref)->prev=newNode;
    
    *head_ref=newNode;
}

void insertAfter(Node *prev_node,int newData){
    if(prev_node==NULL){
        cout<<"given node cant be null\n";
    return;
    }
    
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=prev_node->next;
    
    prev_node->next=newNode;
    newNode->prev=prev_node;
    
    if(newNode->next !=NULL)
        newNode->next->prev=newNode;
   
    
}

void append(Node **head_ref,int newData){
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=NULL;
    
    Node *last=*head_ref;
    
    if(*head_ref==NULL){
        newNode->prev=NULL;
        *head_ref=newNode;
        return;
    }
    
    while(last->next !=NULL){
        last=last->next;
    }
    
    last->next=newNode;
    newNode->prev=last;
    return;
    
}


void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<"\t";
        p=p->next;
    }
}

int main() {
    cout<<"Doubly LinkList :\n";
    Node *head=NULL;
    front(&head,1);
    front(&head,2);
    front(&head,3);
    front(&head,4);
    front(&head,5);
    display(head);
    cout<<endl;
    insertAfter(head->next,6);
    cout<<"middle insert in Doubly LL :\n";
    display(head);
    cout<<endl;
    
    cout<<"Last insert in Doubly LL :\n";
    append(&head,10);
    display(head);
    cout<<endl;
    return 0;
}
