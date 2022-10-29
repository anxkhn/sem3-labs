 ## Linked List
 The code starts by declaring a struct node. <br>
 The data member of the struct node is an int, and the next member points to another struct node. <br>
 The code then declares a function insert that takes two parameters: head and num. <br>
 This function allocates memory for a new struct node, initializes it with num as its data member, and sets its next pointer to NULL. <br>
 If temp is not NULL or if head->data >= num then the new structure will be inserted at first condition in place of head. <br>
 The code is a function that inserts an element into the linked list. <br>
 The function starts by allocating memory to create a new node and then initializes it with the value of num. <br>
 Next, the function checks if there is already an element in the list with a greater data value than num or not. <br>
 If so, then head is assigned as new's next pointer and temp becomes head's previous pointer. <br>
 If not, then head is assigned as new's next pointer and temp becomes new's previous pointer. <br>
 The code starts by declaring a variable called head. <br>
 The code then declares another variable called temp, which is initialized to point to the head node of the list. <br>
 If the temp pointer points to an empty list, then it prints out "EMPTY LL". <br>
 Otherwise, if there are nodes in between that point and the head node, they will be deleted from their positions before being replaced with new nodes that were created. <br>
 The first thing this function does is delete at first. <br>
 It checks whether or not its current position has reached num (the number of items in our list). <br>
 If so, it deletes itself and returns back to its original position as shown below: if (temp->data == num) { head = temp->next; free(temp); } else {
 The code is a function that deletes the node with the given number of data. <br>
 The first line of code sets up the variable head to point to the node that is being deleted. <br>
 The next two lines are used for looping and deleting nodes until there are no more nodes left in the list. <br>
 The first line of code checks if temp->next == NULL, which means that it has reached the end of its list and then returns head. <br>
 If it does not find any other nodes, it prints "EMPTY LL". <br>
 This will cause a return from del() because there are no more nodes in the list to delete. <br>
