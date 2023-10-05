#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
    
};

void insertAtHead(Node* &head, int val){
    Node* new_node=new Node(val);
    new_node->next = head;
    head= new_node;
}

void insertAtTail(Node* &head, int val){
    Node* new_node = new Node(val);
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next == NULL){
            temp ->next = new_node;
            new_node=NULL;
            return;
        }
        temp= temp->next;
    }
}

void insertAtPosition(Node* &head, int val, int pos){
    if(pos == 0){
        insertAtHead(head, val);
        return;
    }

    Node* new_node= new Node(val);
    Node* temp = head;
    int current_pos;
    while(temp!=NULL){
        temp=temp->next;
        current_pos++;
        if(current_pos == pos -1){
            new_node->next = temp->next;
            temp->next= new_node;
        }
    }
}

void updateAtPosition(Node* &head, int val, int pos){
    Node* temp = head;
    int current_pos =0 ;
    /*
    while(temp != NULL){
        if(current_pos == pos-1){
        temp = temp->next;
        current_pos++;
        }
    }
    */


   while(current_pos != pos){
    temp= temp->next;
    current_pos++;
   }

    // After completion of this loop temp will be at position of updation

    temp -> val= val;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int  main(){
    Node* head= NULL;
    insertAtHead(head,2);
    display(head);
    insertAtHead(head,1);
    display(head);

    insertAtHead(head, 4);

    insertAtHead(head,7);
    display(head);

    insertAtTail(head,11);
    display(head);
    insertAtPosition(head, 55, 3);
    display(head);
    updateAtPosition(head, 666, 3);
    display(head);

    return 0;

}