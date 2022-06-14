#include<iostream>
using namespace std;


class Node{
    
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{

    Node* head;
    Node* tail;
    

    public:
        void insertAtBegin(int data){

            Node* newnode = new Node(data);

            if(head == NULL){
                head = newnode;
                tail = newnode;
                return ;
            }

            newnode->next = head;
            head = newnode;

        }

        void insertAtEnd(int data){

            Node* newnode = new Node(data);

            if(tail == NULL){
                insertAtBegin(data);
                return ;
            }

            tail->next = newnode;
            tail = newnode;

        }

        void insertAtMid(int data, int position){

            

        }

};


void main(){

    int ch;
    int value;
    int condition=1;

    do{

        cout<<"\n\nEnter Your Choice : ";
        cout<<"\n1.Insert Node At Begin";
        cout<<"\n2.Insert Node At End";
        cout<<"\n3. Insert Node At Mid";
        cin>>ch;

    }while(condition == 1);


}