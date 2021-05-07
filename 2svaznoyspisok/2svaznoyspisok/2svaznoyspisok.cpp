#include <stdlib.h>
#include <iostream>

using namespace std;
struct Node {
    int x;                             
    Node* Next, * Prev;                 
};

class ListNode{
private:
    Node* Head, * Tail;  
    Node* Curr;
    int _size;
public:
    ListNode(){
        Node lastNode;
        lastNode.x = 0;
        lastNode.Next = NULL;
        lastNode.Prev = NULL;

        Head = &lastNode;
        Tail = &lastNode;

        _size = 0;

        
    };  

    ListNode operator=(ListNode lNode);
    ~ListNode();
    void Show();
    void AddLast(int x);
    void AddFirst(int x);
    void DeleteFirst();
    void DeleteLast();
    int GetFirst();
    int GetLast();
    int Size();
    void DeleteAll(int element);
};  

ListNode::~ListNode(){

    while (Head){
        Tail = Head->Next;             
        delete Head;                   
        Head = Tail;                   
    }
}

ListNode ListNode::operator=(ListNode lNode) {
    ListNode result;
    Node tmp;
    tmp.x = lNode.Head->x;
    result.AddLast(tmp.x);
    lNode.Curr = lNode.Head;

    while (lNode.Curr != lNode.Tail) {
        lNode.Curr = lNode.Curr->Next;
        result.AddLast(lNode.Curr->x);
    }

    return result;
}

void ListNode::Show(){

    //ВЫВОДИМ СПИСОК С НАЧАЛА
    Node* temp = Head;
    while (temp != Tail) {
        cout << temp->x << " ";        
        temp = temp->Next;             
    }
    cout << "\n";
}



void ListNode::AddLast(int x) {
    Node newNode;
    newNode.x = x;
    newNode.Next = NULL;
    newNode.Prev = this->Tail;
    this->Head->Next = &newNode;
    this->Head = &newNode;
    _size++;
}
void ListNode::AddFirst(int x) {
    Node newNode;
    newNode.x = x;
    newNode.Prev = NULL;
    newNode.Next = this->Head;
    this->Head->Prev = &newNode;
    this->Head = &newNode;
    _size++;
}
void ListNode::DeleteFirst() {
    this->Head = this->Head->Next;
    this->Head->Prev = NULL;
    _size--;
}
void ListNode::DeleteLast() {
    this->Tail = this->Tail->Prev;
    this->Tail->Next= NULL;
    _size--;
    
}
int ListNode::GetFirst() {
    return this->Head->x;
}
int ListNode::GetLast() {
    return this->Tail->x;
}
int ListNode::Size() {
    return _size;
}
void ListNode::DeleteAll(int element) {
    Node* temp = Head;
    while (temp != this->Tail) {
        if (temp->x == element) {
            temp->Prev->Next = temp->Next;
            temp->Next->Prev = temp->Prev;
        }
        temp = temp->Next;
    }
}

void swap(ListNode a, ListNode b) {
    ListNode c = a;
    a = b;
    b = c;
}

