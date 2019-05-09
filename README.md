# Recursion-and-Linked-List-Program
In this assignment we will read random integers from a file and insert them into a linked list in sorted order. A struct will be used to create dynamic nodes on the fly. We will then use recursion to find out basic information about the data stored in the list. Below is an example of the input file list.txt:
3 5 10 4 1 13 15 2 2 8
After readFile(string & file) the linked list will look like the following:
head -> 1 -> 2 -> 2 -> 3 -> 4 -> 5 -> 8 -> 10 -> 13 -> 15 -> NULL
We are looking for the list average. We will implement two functions to compute the sum and count recursively then use them to find the average. Recursion for sum and count is mandatory. Here is example of the console output after average is called from main:
The average is: 6.3
The sorted list will be written back to list.txt twice; inorder and reversed order as shown below (recursion is required for reversed order):
1 2 2 3 4 5 8 10 13 15
15 13 10 8 5 4 3 2 2 1
A destructor will be necessary to delete the dynamic memory once its no longer needed. It must delete recursively starting with the last entry.
Starter code has been provided. Submit main.cpp, linkedlist.h, and linkedlist.cpp on Titanium and the Github link in the comments section.
