#include <iostream>
#define o(a,b) cout<<#a<<':'<<b<<'\n';
using namespace std;

class Node
{
    Node* nextNode;
    Node* prevNode;
    int a;
    public:
        Node(Node* prevNode,Node* nextNode,int a):prevNode(prevNode),nextNode(nextNode),a(a){}
        int getContent(){return a;}
        Node* getNextNode(){return nextNode;}
        Node* getPrevNode(){return prevNode;}
        void setNextNode(Node* n){nextNode = n;n->setprevNode(this);}
        void setprevNode(Node* n){prevNode = n;}
};

class Stack  //LIFO
{
    Node* baseNode;
    Node* currentNode;
    public:

    bool isEmpty()
    {
        return currentNode==NULL;
    }
    Stack(int a){baseNode = new Node(NULL,NULL,a);currentNode = baseNode;}
    int pop()
    {
        o(remove element,currentNode==NULL?-999:(currentNode->getContent()))
        if(currentNode == NULL)return -999999999;
        return currentNode->getContent();
        currentNode = currentNode->getPrevNode();
    }
    void push(int a)
    {
        o(add element,a)
        Node* n = new Node(currentNode,NULL,a);
        currentNode->setNextNode(n);
        currentNode = currentNode->getNextNode();
    }
};


class Queue //FIFO
{
    Node* baseNode;
    Node* currentNode;
    Node* currentReadNode;
    public:
    bool isEmpty()
    {
        return currentReadNode==NULL;
    }
    Queue(int a){baseNode = new Node(NULL,NULL,a);currentNode = currentReadNode = baseNode;}
    int pop()
    {
        o(remove element,currentNode==NULL?-999:(currentNode->getContent()))

        if(currentReadNode == NULL)return -999999999;
        return currentReadNode->getContent();
        currentReadNode = currentReadNode->getNextNode();
    }
    void push(int a)
    {
        o(add element,a)
        Node* n = new Node(currentNode,NULL,a);
        currentNode->setNextNode(n);
        currentNode = currentNode->getNextNode();
    }
};

int main()
{
    Stack* s = NULL;
    Queue* q = NULL;

    int n = 0;
    cout<<"Stack:\n"<<"Enter Element:\n";
    cin>>n;
    s = new Stack(n);
    while(true)
    {
        cout<<"Enter Element:\n";

        cin>>n;
        if(n==-999999)
            break;
        s->push(n);
    }
    while(!s->isEmpty())
        cout<<"\nElement:"<<s->pop();


    cout<<"Queue:\n"<<"Enter Element:\n";
    cin>>n;
    q = new Queue(n);
    while(true)
    {
        cout<<"Enter Element:\n";

        cin>>n;
        if(n==-999999)
            break;
        q->push(n);
    }
    while(!q->isEmpty())
        cout<<"\nElement:"<<q->pop();
}
