#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"\nMemory is free for node with data "<< val << "\n\n";
    }
};

// Doubly linked list
class LinkedList
{
    Node* head = NULL;
    Node* tail = NULL;

    public:
    void insertAtBegin(int data)
    {
        Node* newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        newNode->next = head;
        head->prev = newNode;

        head = newNode;

    }

    void insertAtEnd(int data){
        
        Node* newNode = new Node(data);
        if(tail == NULL){
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;

        tail = newNode;

    }

    void insertAtMid(int data, int position){

        if(head == NULL || position == 1)
        {
            insertAtBegin(data);
            return ;
        }

        Node* temp = head;
        int cnt = 1;
        while(cnt < position-1){

            if(temp->next != NULL){
                temp = temp->next;
                cnt++;
            }
            else{
                break;
            }

        }

        if(temp->next == NULL){
            insertAtEnd(data);
        }

        Node* newNode = new Node(data);

        newNode->next = temp->next;
        newNode->prev = temp;

        temp->next->prev = newNode;
        temp->next = newNode;

    }

    void deleteAtFirst(){

        if(head == NULL){
            cout<<"\n No Node to delete ... ";
            return ;
        }

        Node* temp = head;
        temp -> next -> prev = NULL;
        head = head -> next;
        temp-> next = NULL;

        delete temp;

    }


    void deleteAtEnd(){

        if(tail == NULL){
            cout<<"\n\nNo Node to delete .... ";
            return ;
        }

        Node* temp = tail;
        tail = tail -> prev;
        temp -> prev -> next = NULL;
        temp -> prev = NULL;

        delete temp;

    }

    void deleteAtMid(int position){

        if(head == NULL){
            cout<<"\n\nNo Node to delete .... ";
            return ;
        }

        if(position == 1){
            deleteAtFirst();
            return;
        }

        int cnt = 1;
        Node* temp = head;

        while(cnt < position){

            if(temp->next != NULL){
                temp = temp->next;
                cnt++;
            }
            else{
                break;
            }

        }

        if(temp->next == NULL){
            deleteAtEnd();
            return ;
        }

        temp -> prev -> next = temp -> next;
        temp -> next -> prev = temp -> prev;

        temp -> next = NULL;
        temp -> prev = NULL;

        delete temp;


    }


    void print(){

        if(head == NULL){
            cout<<"\nList is Empty ... ";
            return ;
        }

        Node* temp = head;

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next; 
        }
        cout<<endl;

    }

};



int main(){

    int ch;
    int condition = 1;
    int data;
    int pos;

    LinkedList list1;

    do{

        cout<<"\n\nEnter Your Choice : ";
        cout<<"\n1. Insert At Start";
        cout<<"\n2. Insert At End";
        cout<<"\n3. Insert At Mid";
        cout<<"\n4. Delete at Start";
        cout<<"\n5. Delete At End";
        cout<<"\n6. Delete At Mid";
        cout<<"\n8. Display";
        cout<<"\n9.Exit";
        cin >> ch;

        switch(ch){
            case 1:
                cout<<"Enter the data : ";
                cin>>data;
                list1.insertAtBegin(data);
                break;

            case 2:
                cout<<"Enter the data : ";
                cin>>data;
                list1.insertAtEnd(data);
                break;

            case 3:
                cout<<"Enter the data : ";
                cin>>data;
                cout<<"Enter the position : ";
                cin>>pos;
                list1.insertAtMid(data, pos);
                break;

            case 4:
                list1.deleteAtFirst();
                break;

            case 5:
                list1.deleteAtEnd();
                break;

            case 6:
                cout<<"\n\nEnter the position : ";
                cin>>pos;
                list1.deleteAtMid(pos);
                break;

            case 8:
                list1.print();
                break;

            case 9: 
                condition = 0;
                break;

            default:
                cout<<"You Entered Wrong Choice ... ";
        }


    }while(condition == 1);

}