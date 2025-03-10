
#include <iostream>


class Stack {
    // <--- ADD YOUR CODE HERE --->
    private:
    int* arr;   
    int top;    
    int maxSize;  

public:
    
    Stack(int size) {
        maxSize = size;
        arr = new int[maxSize];  
        top = -1; 
    }

    
    ~Stack() {
        delete[] arr;  
    }

    
    void push(int data) {
        if (isFull()) {
            std:: cout << "Stack Overflow\n";  
        } else {
            arr[++top] = data;  
        }
    }

   
    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";  
        } else {
            top--; 
        }
    }

    
    bool isEmpty() {
        return top == -1;  
    }

   
    bool isFull() {
        return top == maxSize - 1;  
    }

    
    void stackTop() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";  
        } else {
            std::cout << arr[top] << std::endl;  
        }
    }

    
    void display() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n";  
        } else {
            for (int i = top; i >= 0; i--) {
                std::cout << arr[i] << " ";  
            }
            std::cout << std::endl;
        }
    }
    
    
};

int main() {
    Stack myStack(5);
    std::string instruction;

    while (true) {
        std::cin >> instruction;

        if (instruction == "push") {
            int data;
            std::cin >> data;
            myStack.push(data);
        } else if (instruction == "pop") {
            myStack.pop();
        } else if (instruction == "display") {
            myStack.display();
        } else if (instruction == "isEmpty") {
            if (myStack.isEmpty()) std::cout << "True\n";
            else std::cout << "False\n";
        } else if (instruction == "isFull") {
            if (myStack.isFull()) std::cout << "True\n";
            else std::cout << "False\n";
        } 
         else if(instruction=="stackTop"){
            myStack.stackTop();
        }
        else if (instruction == "exit") {
            break;
        } 
       
        else {
            std::cout << "Invalid instruction. Valid instructions: push, pop, display, exit.\n";
        }
    }

    return 0;
}




