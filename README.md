Description:
Code for lab 6 - implementation of doubly-linked circular structure (linked list)

Author:
David Chen

Assignment description:
Goal - implement a linked list abstract data type.

A linked list is a list containing nodes, with each node containing a value and pointers to its next and/or previous node depending on the type of linked list implemented.

For this lab, you will implement a doubly-linked circular structure. You must create the data type on your own, without using any existing containers. The essence of the data structure is as follows:

5 -> 6 -> 10 -> 1 -> 3 -> -1 -> 0 -> 5  (the first node)           

// The front value is the 5, and 0 is the back value. 

Specifications:
Create a struct that is called QueueNode that represents each node. It will contain:

-The value (integer)
-The next pointer that points to the next QueueNode
-The prev pointer that points to the previous QueueNode.

You will create a Queue class, which is the container for the entire data structure.

The Queue class will contain 2 variables:

 -QueueNode *front
 -QueueNode *back
 
Note: You cannot have a size variable to keep track of the size of this container (or the number of nodes you have in the queue)

A queue is FIFO (first in first out), which means the first node added will be removed first. So that means your function should be adding nodes to the back of the queue, and removing nodes from the front of the queue.

Below is the specification of the functions for Queue class:

void addBack(int val) // puts on item at the end of the queue

int getFront() // returns the value at the front of the queue

void removeFront() // removes the front item in the structure

For addBack(), create a new QueueNode and add it to the list. Now the back pointer should point to the newly created node at the back of the queue.

For removeFront(), remove the node that the front pointer is pointing to, and the front pointer should point to the “new” first node in the front of the queue. Don’t forget to free the memory of the removed node to prevent memory leak.

Constructors and destructors are needed for the Queue class, and destructors should free all the memories of the nodes in the queue.

 

Note: It is important to know that after each function operation, you need to reassign the prev, next pointers for the nodes so that the linked list structure is preserved.

HINT: You should sit down and design the whole program before touching a keyboard. For the queue, sit down with a pencil and a piece of paper and study the required pointer manipulations. Figure out how to reassign the prev, next pointers after each adding/removing operation. After you complete the design, you should develop your code first using pseudocode. Then convert it to C++.

 

Testing program

You need to create a menu function for the user to demonstrate that the queue is working correctly.

Your option menu should look like this:

“1. Enter a value to be added to the queue”,

“2. Display first node (front) value”,

“3. Remove first node (front) value”,

“4. Display the queue contents”,

“5. Exit”

 

For example, after you display the menu, the user enters “1”. Your program then reads the integer the user entered and put it in the back of the list. Also, validate the user inputs. You will return an error message if the user attempts to read or remove a value from an empty queue.

 

What to submit:

You will submit the following files in a zip file to Canvas:

Code to implement your queue, both header and source files
Code to test the operations of your queue (menu function)
A makefile
No need to submit a report on this lab
 

Grading

Note：If you do not use a circular linked structure, your lab will receive a grade of 0.

Programming style: 10%
Header file (QueueNode struct with only the data and the two pointer members & Queue class declarations): 5%
Queue class:
Necessary constructors/destructors: 10%
No data members other than the front and back pointers: 10%
Properly implement addBack(): 20%
Properly implement removeFront(): 20%
Properly implement getFront(): 10%
menu function to test your queue: 15%

