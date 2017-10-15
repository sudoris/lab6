#ifndef QUEUE_HPP
#define QUEUE_HPP

using namespace std;

class Queue {
    
protected:

    struct QueueNode {
        int value;
        QueueNode *next;
        QueueNode *prev;
        
        // Constructor
        QueueNode(int value1, QueueNode *next1 = NULL, QueueNode *prev1 = NULL) {
            value = value1;
            next = next1;
            prev = prev1;
        }
    };
    
    // Pointers to front and end of queue
    QueueNode *front;
    QueueNode *rear;
        
    
public:
    Queue();
    ~Queue();
    
    // Class methods
    void addBack(int);
    void removeFront();
    int getFront();
    void showContents();
    bool isEmpty() const;
    void clear();
        
    
};

#endif /* QUEUE_HPP */
