Phone Book Application - Project Description
The Phone Book Application is a console-based program designed to manage contact information using a binary search tree (BST). It allows users to insert, display, and search for contacts efficiently. This project demonstrates core concepts of Object-Oriented Programming (OOP), Data Structures, and File Management (if extended).

Key Features:
Insert Contact:

Users can add a contact by providing a name and phone number.
The contact is stored as a node in the BST, ensuring alphabetical order by name.
Display Contacts:

All contacts are displayed in alphabetical order using in-order traversal of the BST.
If the phone book is empty, a message is displayed.
Search Contact:

Users can search for a contact by name.
If the contact exists, its details are displayed; otherwise, a "not found" message is shown.
User-Friendly Interface:

Simple menu-driven interface for user interaction.
Clear prompts and output messages.
How It Works:
Binary Search Tree (BST):
The application uses a BST where each node contains a contact's name and phone number. This structure ensures efficient searching, insertion, and deletion (if implemented).

Classes & Objects:

Node Class: Represents each contact with attributes for name, phone number, and pointers to left and right children.
phoneBook Class: Manages the root node and implements contact insertion, display, and search operations.
Concepts Demonstrated:
Data Structures: Binary Search Tree (BST) implementation.
OOP Principles:
Encapsulation: Data members are private, accessible through member functions.
Abstraction: The user interacts with a simple interface without knowing underlying details.
Friend Class: Used for direct access between Node and phoneBook.
Dynamic Memory Management: Contacts are dynamically created using new to avoid static allocation.
Recursion: Used in in-order traversal and contact search functions.
Possible Enhancements:
Contact Deletion: Allow users to delete contacts.
File Storage: Save and load contacts from a file.
Data Validation: Check for duplicate contacts and invalid phone numbers.
GUI Interface: Create a graphical version of the phone book.
