#include <iostream>

// Definition for a binary tree node
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a node into the binary tree
TreeNode* insertNode(TreeNode* root, int value) {
    // Base case: if the current subtree is empty, create a new node with the given value
    if (root == nullptr) {
        return new TreeNode(value);
    }

    // If the value is less than the current node's data, insert into the left subtree
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    }
    else {  // If the value is greater or equal, insert into the right subtree
        root->right = insertNode(root->right, value);
    }

    return root;  // Return the modified root of the subtree
}

// Function to perform in-order traversal of a binary tree
void inOrderTraversal(TreeNode* root) {
    // Base case: if the current node is not null
    if (root != nullptr) {
        // Traverse the left subtree
        inOrderTraversal(root->left);

        // Process the current node (e.g., print its value)
        std::cout << root->data << " ";

        // Traverse the right subtree
        inOrderTraversal(root->right);
    }
}

int main() {
    TreeNode* root = nullptr;  // Initialize the root of the binary tree

    // Allow the user to enter nodes until a sentinel value (e.g., -1) is entered
    int inputValue;
    std::cout << "Enter binary tree nodes (enter -1 to finish): ";
    while (true) {
        std::cin >> inputValue;
        if (inputValue == -1) {
            break;  // Exit the loop if the sentinel value is entered
        }
        // Insert the entered value into the binary tree
        root = insertNode(root, inputValue);
    }

    // Perform in-order traversal and print the values
    std::cout << "In-order traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    // Clean up: release memory
    // Note: In a real-world scenario, you would typically use smart pointers or other memory management techniques.
    // Ensure you delete the nodes to avoid memory leaks.
    // Example: delete root;

    return 0;  // Return 0 to indicate successful execution
}
