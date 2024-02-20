#include <iostream>

class Stack {
private:
    static const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {} // Constructor to initialize the top of the stack

    bool isEmpty() {
        return top == -1; // Check if the stack is empty
    }

    bool isFull() {
        return top == MAX_SIZE - 1; // Check if the stack is full
    }

    void push(int element) {
        if (!isFull()) { // Check if the stack is not full
            arr[++top] = element; // Increment top and insert the element into the stack
            std::cout << "Pushed: " << element << "\n"; // Display message indicating successful push
        }
        else {
            std::cout << "Stack is full. Cannot push.\n"; // Display message indicating stack overflow
        }
    }

    void pop() {
        if (!isEmpty()) { // Check if the stack is not empty
            std::cout << "Popped: " << arr[top--] << "\n"; // Remove and return the top element of the stack
        }
        else {
            std::cout << "Stack is empty. Cannot pop.\n"; // Display message indicating stack underflow
        }
    }

    void display() {
        if (!isEmpty()) { // Check if the stack is not empty
            std::cout << "Stack: ";
            for (int i = 0; i <= top; ++i) { // Iterate over the elements of the stack
                std::cout << arr[i] << " "; // Display each element of the stack
            }
            std::cout << "\n";
        }
        else {
            std::cout << "Stack is empty.\n"; // Display message indicating stack is empty
        }
    }
};

int main() {
    Stack stack;

    int choice, element;

    do {
        std::cout << "\n1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Display\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice; // Accept user's choice

        switch (choice) {
        case 1:
            std::cout << "Enter the element to push: ";
            std::cin >> element; // Accept element from user
            stack.push(element); // Push the element onto the stack
            break;
        case 2:
            stack.pop(); // Pop the element from the stack
            break;
        case 3:
            stack.display(); // Display the elements of the stack
            break;
        case 4:
            std::cout << "Exiting the program. Goodbye!\n"; // Exit the program
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option.\n"; // Display message for invalid choice
        }

    } while (choice != 4); // Repeat the loop until user chooses to quit

    return 0;
}
