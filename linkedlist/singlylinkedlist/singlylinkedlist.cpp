#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

        // Constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        ~Node(){
            int value = this->data;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"\n Deleted value : " << this->data << endl;
        }
};

class LinkedList
{

    Node* head=NULL;
    Node* tail=NULL;

public:

    void insertAtBegin(int data){

        // Create new Node
        Node* newNode = new Node(data);

        if(head == NULL){
            // cout << "head is null ... "<<endl;
            head = newNode;
            tail = newNode;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }

    }

    void insertAtEnd(int data){

        // Create Node 
        Node* newNode = new Node(data);

        if( this-> tail == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }

    }

    void insertAtMid(int data, int position){

        if(head == NULL || position == 1 ){
            // cout<<"Linked List is Empty! Insert data at first ... ";
            insertAtBegin(data);
        }
        else{

            // if(position == 1){
            //     insertAtBegin(data);
            // }

            Node* newNode = new Node(data);

            int cnt = 1;
            Node* temp = head;

            while(cnt < position-1){
                if(temp -> next != NULL){
                    temp = temp->next;
                    cnt++;
                }
                else{
                    break;
                }
            }

            // if inserting at end 
            if(temp->next == NULL){
                insertAtEnd(data);
                return ;
            }


            newNode->next = temp->next;
            temp->next = newNode;

        }

    }

    void deleteAtFirst(){

        if(head == NULL){
            cout<<"No Node to delete ... ";
            return ;
        }

        Node* temp = head;

        head = head -> next;
        temp->next = NULL;
        delete temp;

    }

    void deleteAtEnd(){

        if(head == NULL){
            cout<<"No Node to delete ... ";
            return ;
        }

        Node* prev = NULL;
        Node* curr = head;

        while(curr->next != NULL){
            prev = curr;
            curr = curr-> next;
        }

        prev->next = NULL;
        tail = prev;

        delete curr;


    }

    void deleteAtMid(int position){

        if(head == NULL){
            cout<<"No Node to delete ... ";
            return ;
        }

        if(position == 1){
            deleteAtFirst();
            return;
        }

        Node* curr = head;
        Node* prev = NULL;

        int count = 1;

        while(count<position){

            if(curr->next != NULL){
                prev = curr;
                curr = curr->next;
                count++;
            }
            else{
                break;
            }

        }

        if(curr->next == NULL){
            deleteAtEnd();
            return ;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }



    void print(){

        if(head == NULL){
            cout<<"List is Empty .... ";
            return ;
        }


        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout<<endl;

    }

};





int main(){

    int ch;
    int data;
    LinkedList list1;
    bool condition = true;

    do{

        cout<<"Enter Your Choice : ";
        cout<<"\n1. Insert At Begin";
        cout<<"\n2. Insert At End";
        cout<<"\n3. Insert At Mid";
        cout<<"\n4. Delete At Start";
        cout<<"\n5. Delete At Mid";
        cout<<"\n6. Delete At End";
        cout<<"\n8. Display";
        cout<<"\n9. Exit";
        cin>>ch;

        switch(ch){

            case 1:
                
                cout<<"\nEnter the data : ";
                cin>>data;
                list1.insertAtBegin(data);
                break;

            case 2:  
                cout<<"\nEnter the data : ";
                cin>>data;
                list1.insertAtEnd(data);
                break;

            case 3:  
                int pos;
                cout<<"\nEnter the data : ";
                cin>>data;
                cout<<"\nEnter the position : ";
                cin>>pos;
                list1.insertAtMid(data, pos);
                break;

            case 4:
                list1.deleteAtFirst();
                break;

            case 5:
                cout<<"\nEnter the Position : ";
                cin>>pos;
                list1.deleteAtMid(pos);
                break;

            case 6:
                list1.deleteAtEnd();
                break;

            case 8:
                list1.print();
                break;
        
            case 9:
                condition = false;
                break;

            default:
                cout<<"\nYou Entered Wrong Choice .... ";
        }

    }while(condition);

    return 0;

}