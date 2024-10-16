# Quickselect-implementation
This repository contains implementations of four different tasks related to data structures and algorithms, focusing on array-based and linked list-based solutions. These implementations were done in C and Python and cover concepts like sorting, stacks, queues, linked lists, and order statistics.

## Tasks
**Quicksort to Find the ith Order Statistic**:

This task implements the Quickselect algorithm based on Quicksort to find the ith order statistic in an unsorted array. The Quickselect algorithm works in O(n) expected time by partially sorting the array and finding the required element at the ith index.

Functionality:
Finds the ith smallest element in an unsorted array.
Uses partitioning similar to Quicksort to reduce the problem size.

 **Stack Implementation using fixed size C style arrays**:

This task involves implementing a Stack using a fixed-size array with C-style integers. The stack follows the LIFO (Last In, First Out) principle and supports operations such as PUSH, POP, and PEEK.


Functionality:
Fixed-size array-based stack implementation.
Supports standard stack operations (PUSH, POP, PEEK).
Demonstrates overflow and underflow conditions.

**Queue Implementation using fixed size C style arrays**:

This task implements a Queue using a fixed-size array with C-style integers. The queue follows the FIFO (First In, First Out) principle and supports operations like ENQUEUE and DEQUEUE.

Functionality:
Fixed-size array-based circular queue.
Supports enqueueing and dequeueing elements with overflow and underflow detection.

**Singly Linked List Implementation using fixed size c style arrays**:

This task implements a Singly Linked List using a fixed-size array to store the nodes. The list uses integers (C-style) for data storage and provides functionality for inserting and deleting nodes at the front.

Functionality:
Uses an array to simulate a linked list structure.
Implements insertion and deletion of nodes at the front of the list.
Provides a simple structure for linked list traversal.

## Example Usage
For the quicksort implementation, example has been provided in the source code. To run the file type in the following command in the terminal: `python3 quickselect.py`

For the rest of the programs, compile using `gcc -o filename filename.c` and then type in `./filename`
