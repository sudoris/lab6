#include <iostream>
#include "Queue.hpp"
//#include <cstdlib>

using namespace std;

// Constructor
Queue::Queue() {
    front = NULL;
    rear = NULL;
}

// Destructor
Queue::~Queue() {
    
	
	if (!isEmpty()) {
        QueueNode *garbage = front;
        while (garbage->next != front) {
            front = front->next;
			delete garbage;
			garbage = front;	
		}	
		delete garbage;		
    }
	
	// alternative using removeFront() function
	/*
	while (!isEmpty()) {
        removeFront();
    } 
	*/
}

void Queue::addBack(int num) {
    if (isEmpty()) {
        front = new QueueNode(num);
        rear = front;
        front->next = front;
        front->prev = rear;
        
        cout << front->value << " added to the queue." << endl << endl;
    }
    else {
        // when queue is not empty
        rear->next = new QueueNode(num);
        rear->next->prev = rear;
        rear = rear->next;
        rear->next = front;
        
        cout << rear->value << " added to the back of the queue." << endl << endl;
    }
}

// removes value at front of queue and copies it to num
void Queue::removeFront() {
    QueueNode *temp = 0;
    if (isEmpty()) {
        cout << "The queue is empty." << endl;
    }
    else if (front == rear) {
        cout << front->value << " removed from the queue." << endl;
        front = NULL;
		delete rear;			
    }    
    else {
        cout << front->value << " removed from the queue." << endl;
        
        temp = front;
        front = front->next;
        delete temp;
		front->prev = rear;
		rear->next = front; 		
    }
	
	cout << endl;
        
}

// returns true if queue is empty, false if not empty
bool Queue::isEmpty() const {
    if (front == NULL) {
        return true;
    }
    else {
        return false;
    }
}

int Queue::getFront() {
    
    /*  empty check moved to menu
    QueueNode *temp = NULL;
    if (isEmpty()) {
        //throw string("ERROR: The Queue is empty.\n");
        cout << "The queue is empty. 0 returned" << endl;
        return 0;
    }*/
    
    return front->value;
    
}

void Queue::showContents() {
    QueueNode *temp = front;
    
    if (!isEmpty()) {
        cout << "The values in the queue are: ";
    
        while (temp->next != front) {
        cout << temp->value << "  ";
        temp = temp->next;
        }
    
        cout << temp->value << endl;
    }
    else {
        cout << "The queue is empty." << endl;
    }
	
	
    
}

void Queue::clear() {
        
    while (!isEmpty()) {
        removeFront();
    } 
}