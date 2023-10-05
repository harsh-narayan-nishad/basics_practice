#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// ============ INSEARTING AT HEAD ============= 

void insertAthead(node* &head, int val){
    node* n= new node(val);
    n->next = head;
    head = n;
}

// ============ INSEARTING AT TAIL ============= 

void insertAtTail(node* &head, int val){
    node* n= new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = n;
}

// ============ SEARCHING ============= 

bool search(node* head, int key){
    node* temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            return true;
        }

        temp = temp -> next;
    }
    return false;
}

void display(node* head){
    node* temp = head;
    while( temp != NULL){
        cout<<temp-> data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node* head= NULL;

    // making 1->2->3->NULL
    insertAtTail(head , 1);
    insertAtTail(head , 2);
    insertAtTail(head, 3);
    display(head);

    // making 4->1->2->3->NULL

    insertAthead(head, 4);
    display(head);
    // searching
    cout<<search(head, 3)<<endl;
    return 0;
}