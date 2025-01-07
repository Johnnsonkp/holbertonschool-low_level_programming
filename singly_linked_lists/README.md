# C - Singly linked lists

### What is a Linked Lists?

* A data structure for storing objects in linear order 
* Objects in a linked list have data and a pointer to the next object in the list
* Similar to arrays, except the pointer determines ordering not array indices 

### Why?

Some use cases of linked lists are:
* Implement other data structures: Stacks, queues, hash tables 
* Dynamic memory allocation

### How?

* Linked lists contain objects that store both data & a pointer to the first node of the next object in the linked list
* There are 3 kinds of linked lists
	* Singly-linked List: The pointers face/ go in one direction only
	* Double-linked list: Each object contains a previous pointer, pointing to the object previous to it in the chain
	* Circular list: The previous pointer of the tail object points to the head and the  

### Q/A

1. What's a node?
	a. It’s a structure with a pointer to the next node and value information
	b. It’s a space allocated in memory

2. What’s the “head” of a linked list?
	a. It’s the first node

3. What’s the “tail” of a linked list?
	a. It’s the node with the pointer to the next equals to NULL

4. In a singly linked list, what are possible directions to traverse it?
	a. Forward

5. Arrays Vs Linked Lists
	a. We can add elements indefinitely to a linked list
	b. Linked list can contain as value a structure
	c. Array can contain as value a structure
	d. We can easily remove an element from a Linked list
	e. Memory is aligned for an Array - each elements are back to back in the memory


