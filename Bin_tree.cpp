#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
        int data;
        node* left;
        node* right;
    
    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    
    cout<<"Enter data"<<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<< "Enter data for inserting in left of " << data <<endl;
    root->left = buildTree(root -> left);
    cout<<"Enter data for inserting in right of"<<data<< endl;

    root -> right = buildTree(root -> right);

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while( !q.empty()){
        node* temp = q.front();
        cout<< temp -> data <<" ";
        q.pop();

        if(temp == NULL){
            //Purana level complete ho chuka hai

            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }

        }

        else{
            if(temp -> left){
                q.push(temp -> left);
            }

            if(temp -> right){
                q.push(temp -> right);
            }
        }

        if(temp -> left){
            q.push(temp -> left);
        }

        if(temp -> right){
            q.push(temp -> right);
        }


    }
}

void inorder(node* root){
    // base case


    if(root == NULL){
        return ;
    }

    inorder(root -> left);
    cout<< root -> data <<" ";
    inorder(root-> right);
}

void preorder(node* root){
    // base case

    if(root == NULL){
        return ;
    }

    cout<< root -> data <<" ";
    preorder(root -> left);
    preorder(root-> right);
}
void postorder(node* root){
    // base case


    if(root == NULL){
        return ;
    }

    postorder(root -> left);
    postorder(root-> right);
    cout<< root -> data <<" ";
}

node* buildFromLevelOrder(node* root){
    queue<node*> q;
    cout<<"Enter the data for root "<<endl;
    int data;
    cin>> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for: "<<root -> data <<endl;
        int leftData;
        cin>>leftData;

        if(leftData !=  -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter right node for: "<<root -> data <<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1 ){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}
int main(){
    node* root = NULL;
    buildFromLevelOrder(root);
    levelOrderTraversal(root);

// 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //Creating a Tree
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5  17 -1 -1 -1

    //level order

    cout<<"Printing the level order traversal output " <<endl;
    levelOrderTraversal(root);


    cout<<endl<<"Inorder traversal is:  ";
    inorder(root);
    cout<<endl;
    cout<<endl<<"Postorder traversal is: ";
    preorder(root);

    cout<<endl<<"Postorder traversal is: ";
    postorder(root);

    */

    return 0;
}