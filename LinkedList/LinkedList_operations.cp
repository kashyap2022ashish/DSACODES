// LinkedList :


#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
}*first=NULL;

void front(Node **head_ref,int newData){
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=*head_ref;
    *head_ref=newNode;
}

void middle(Node *prev,int newData){
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=prev->next;
    prev->next=newNode;
}

void last(Node **head_ref,int newData){
    Node *newNode=new Node();
    newNode->data=newData;
    newNode->next=NULL;
    
    Node *last=*head_ref;
    
    if(*head_ref==NULL){
        
        *head_ref=newNode;
    }
    
    while(last->next !=NULL){
        last=last->next;
    }
    last->next=newNode;
}

void reversell(Node *q,Node *p){
    if(p){
        reversell(p,p->next);
        p->next=q;
    }
    
    else
        first=q;
}

Node * reverseRecursive(Node * &head)
   {
       if(head==NULL || head->next==NULL){
           return head;
       }
       
       Node *newHead=reverseRecursive(head->next);
       head->next->next=head;
       head->next=NULL;
       
       
       return newHead;
       
   }


void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<"\t";
        p=p->next;
    }
}

int main() {
    cout<<"Singly Linked List : "<<endl;
    Node *head=NULL;
    front(&head,10);
    front(&head,20);
    front(&head,30);
    front(&head,40);
    front(&head,50);
    display(head);
    cout<<endl;
    middle(head->next,70);
    display(head);
    cout<<endl;
    last(&head,100);
    display(head);
    cout<<endl;
    
    cout<<"Reverse Linked List :\n ";
    Node *newhead=reverseRecursive(head);
    display(newhead);
    cout<<endl;
    
    
    
    
}
