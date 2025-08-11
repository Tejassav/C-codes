#include<iostream>

using namespace std;
//creating Node datatype
struct Node{
    int data;
    Node* next;

}*head;
void Display(){
    Node* p = head;

    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}

void Insert(int pos,int x){
        Node* p = head;//p points to first element

        Node* t = new Node;

        if(pos==0){
            t->data = x;
            t->next = head;
            head = t;
        }
        else
        {
            for(int i=1; i<=pos-1 and p;i++){
            p=p->next;
            }

        if(p){t->data = x;
        t->next = p->next;
        p->next==t;}
    }
}

void Append(int x){
    
    if(head==NULL){
        Node* t = new Node;
        head = t;
        t->data = x;
        t->next = NULL;
    }
    else{
        Node* p = head;
        Node* t = new Node;
        t->data = x;
        t->next = NULL;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next = t;

        
        

    }

}

void Delete(int pos){

}

int main(){
    Append(5);
    Append(3);
    Append(4);
    Append(80);
    Append(80);
    Insert(0,10);
    Display();
}