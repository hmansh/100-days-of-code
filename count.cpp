#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

struct node * insertStart(struct node *head, int data){    
    struct node *newnode = new struct node;
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL){
        return newnode;
    }

    newnode->next = head->next;
    head->next = newnode;
    return head;
}

struct node * insertLast(struct node *head, int data){
    struct node *newnode = new struct node;
    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL){
        return newnode;
    }

    struct node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = newnode;
    return head;
}

struct node * insertLocation(struct node *head, int data, int idx){
    
    struct node *newnode = new struct node;
    newnode->data = data;
    newnode->next = NULL;
    int count = 1;
    
    if (head == NULL){
        return newnode;
    }

    struct node *temp = head;

    while(count < idx-1){
        count++;
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}

struct node * deleteFirst(struct node *head){
    if (head == NULL){
        throw::invalid_argument("Empty LIST\n");
    }
    head = head->next;
    return head;
}

struct node * deleteLast(struct node *head){
    struct node *newnode = head;
    while(newnode->next->next != NULL){
        newnode = newnode->next;
    } newnode->next = NULL;
    return head;
}

struct node * deleteLocation(struct node *head, int idx){
    struct node *newnode = head;
    int count = 1;
    while(count < idx - 1){
        count++;
        newnode = newnode->next;
    }

    newnode->next = newnode->next->next;
    return head;
}

int listLength(struct node * head){

    struct node *newnode = head;
    int count = 0;
    while(newnode!=NULL){
        newnode = newnode->next;
        count++;
    }
    return count;
}

int count(struct node * head, int number){
    struct node *temp = head;
    int count = 0;
    while( temp!= NULL){
        if (temp->data == number){
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int getNth(struct node* head, int idx){
    struct node * temp = head;
    int count = 0 ;
    while(count < idx - 1){
        count++;
        temp = temp->next;
    }
    return temp->data;
}

struct node* deleteList(struct node * head){
    struct node* temp = new struct node;
    while(head!=NULL){
        temp = head;
        head = head->next;
        delete temp;        
    }
    return NULL;
}

int Pop(struct node* head){
    if (head == NULL){
        throw::invalid_argument("No elements");
    }
    struct node* temp = head;
    head = head->next;
    int data = temp->data;
    delete temp;
    return data;
}

struct node* insertSorted(struct node* head, int data){
    struct node* newnode = new struct node;
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL){
        return newnode;
    }

    struct node* temp = head;
    while(temp->data <= data){
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    return newnode;
}

struct node *head = NULL;
int main(int argc, char const *argv[])
{

    head = insertStart(head, 5);
    head = insertStart(head, 4);
    head = deleteList(head);
    head = insertLast(head, -1);
    head = insertStart(head, 3);
    head = insertStart(head, 2);
    head = insertLast(head, -1);
    head = insertLast(head, -1);
    head = insertStart(head, 1);
    head = insertLast(head, 0);
    head = insertLast(head, -1);
    head = insertLocation(head, 99, 5);

    cout << count(head, 5) << endl;
    cout << getNth(head, 5) << endl;
    cout << Pop(head) << endl;
    return 0;
}
