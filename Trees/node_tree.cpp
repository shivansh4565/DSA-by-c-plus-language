#include <iostream>
using namespace std;

class Node{  ///pre node
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(Node* root){
    if(root==NULL)return;
    cout<<root->val;
    cout <<endl;
    display (root->left);
    display(root->right);
}

int main()
{
Node* a = new Node(0);
Node* b = new Node(1);
Node* c = new Node(2);
Node* d = new Node(3);
Node* e = new Node(4);
Node* f = new Node(5);
Node* g = new Node(6);
Node* h = new Node(7);
Node* i = new Node(8);
Node* j = new Node(9);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
d->right=h;
d->left=i;
e->left=j;

display(a);
}