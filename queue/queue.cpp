//small
#include <iostream>
#include <queue>

class DynamicQueue {
private:
    std::queue<int> myQueue;

public:
    // Function to insert an element into the queue
    void enqueue(int element) {
        myQueue.push(element);
        std::cout << "Enqueued: " << element << "\n";
    }

    // Function to display the entire queue
    void display() {
        if (!myQueue.empty()) {
            std::cout << "Queue Elements: ";
            while (!myQueue.empty()) {
                std::cout << myQueue.front() << " ";
                myQueue.pop();
            }
            std::cout << "\n";
        }
        else {
            std::cout << "Queue is empty.\n";
        }
    }
};

int main() {
    DynamicQueue dynamicQueue;

    int choice, element;

    do {
        std::cout << "\n1. Enqueue\n";
        std::cout << "2. Display\n";
        std::cout << "3. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter the element to enqueue: ";
            std::cin >> element;
            dynamicQueue.enqueue(element);
            break;
        case 2:
            dynamicQueue.display();
            break;
        case 3:
            std::cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            std::cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 3);

    return 0;
}
