#include <iostream>
#include "Queue.hpp" 

using namespace std;

void menu() {
    
    Queue intQueue;
    
    int selection = 0;
    
    while (true) {
        cout << "1. Enter a value to add to the queue" << endl ;
        cout << "2. Display first node (front) value" << endl;
        cout << "3. Remove first node (front) value" << endl;
        cout << "4. Display the queue contents" << endl;
        cout << "5. Exit" << endl;
        
        cin >> selection;
        
        cout << endl;
        
        if (selection == 5) {
            break;
        }
        else if (selection == 1) {
            
            int value = 0;
            
            cout << "Enter value to be added:" << endl;
            cin >> value;
            
            // input validation for value
            while (cin.fail()) {
            cin.clear();
			cin.ignore(256, '\n');
            cout << "Invalid input. Please enter an integer: ";
            cin >> value;
            }
            
            // add value to the back of the queue
            intQueue.addBack(value);
        }
        else if (selection == 2) {
            
            if (!intQueue.isEmpty()) {
                cout << "The value in the first node is " << intQueue.getFront() << endl; 
            } else {
                cout << "The queue is empty." << endl; 
            }
			
			cout << endl;
            
        }
        else if (selection == 3) {
            intQueue.removeFront();
        }
        else if (selection == 4) {
            intQueue.showContents();
			cout << endl;
        }
        else {			// input validation
            cout << "Invalid selection. Please choose a number from the menu." << endl;
            
			cout << endl;
			
            cin.clear();
            cin.ignore(256, '\n');
        }
    } 
}

int main() {
    
    menu();
    
    return 0;
}
