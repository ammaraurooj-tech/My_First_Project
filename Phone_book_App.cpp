#include <iostream>
#include <string>
using namespace std;

class phoneBook;

class Node {
    friend class phoneBook;
private:
    string contnum;
    string name;
    Node* left;
    Node* right;
};

class phoneBook {
private:
    Node* root;

public:
    phoneBook() {
        root = nullptr;
    }

    // Function to insert contact numbers
    void insertion() {
        string num, identity;
        cout << "\nEnter name: ";
        cin >> identity;
        cout << "Enter contact number: ";
        cin >> num;

        Node* newContact = new Node();
        newContact->contnum = num;
        newContact->name = identity;
        newContact->left = nullptr;
        newContact->right = nullptr;

        if (root == nullptr) {
            root = newContact;
            cout << "Contact added successfully!\n";
            return;
        }

        Node* current = root;
        Node* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (identity < current->name)
                current = current->left;
            else
                current = current->right;
        }

        if (identity < parent->name)
            parent->left = newContact;
        else
            parent->right = newContact;

        cout << "Contact added successfully!\n";
    }

    // In-order traversal to display all contacts
    void inorder(Node* node) {
        if (node == nullptr)
            return;
        
        inorder(node->left);
        cout << "Name: " << node->name << "\n";
        cout << "Contact Number: " << node->contnum << "\n\n";
        inorder(node->right);
    }

    void inorder() {
        cout << "\nList of contacts:\n";
        if (root == nullptr) {
            cout << "Phone book is empty!\n";
        } else {
            inorder(root);
        }
    }

    // Search function
    void search(Node* node, string identity) {
        if (node == nullptr) {
            cout << "Contact not found!\n";
            return;
        }

        if (node->name == identity) {
            cout << "Contact found!\n";
            cout << "Name: " << node->name << "\n";
            cout << "Contact Number: " << node->contnum << "\n";
            return;
        }

        if (identity < node->name)
            search(node->left, identity);
        else
            search(node->right, identity);
    }

    void search() {
        string identity;
        cout << "\nEnter name to search: ";
        cin >> identity;
        search(root, identity);
    }
};

int main() {
    phoneBook phbook;
    char choice;
    int number;

    do {
        cout << "\n===== Phone Book Application =====\n";
        cout << "1. Insert Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact by Name\n";
        cout << "Enter your choice: ";
        cin >> number;

        switch (number) {
        case 1:
            phbook.insertion();
            break;
        case 2:
            phbook.inorder();
            break;
        case 3:
            phbook.search();
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;
    } while (choice != 'n' && choice != 'N');

    return 0;
}
