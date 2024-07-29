#include <iostream>
#define MAX 10

class stack {
private:
    int arr[MAX];
    int top;

public:
    stack() {
        top = -1;
    }

    void push(int item) {
        if (top == MAX - 1) {
            std::cout << "\nStack is full";
            return;
        }
        top++;
        arr[top] = item;
    }

    int pop() {
        if (top == -1) {
            std::cout << "\nStack is empty";
            return -1; 
        }
        int data = arr[top];
        top--;
        return data;
    }
};

int main() {
    stack s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    s.push(19);
    s.push(20);
    s.push(21); 
    for (int i = 0; i < 4; i++) {
        int item = s.pop();
        std::cout << "\nItem popped=" << item;
    }

    return 0;
}

