#include <iostream>
struct node {
    int data;
    node* link;
};
class stack {
private:
    node* top;
public:
    stack(); 
    void push(int item);
    int pop();
    ~stack(); 
};
stack::stack() {
    top = NULL;
}
void stack::push(int item) {
    node* temp = new node;
    temp->data = item;
    temp->link = top;
    top = temp;
}
int stack::pop() {
    if (top == NULL) {
        std::cout << std::endl << "Stack is empty";
        return -1; 
    }
    node* temp = top;
    int item = temp->data;
    top = top->link;
    delete temp;
    return item;
}
stack::~stack() {
    while (top != NULL) {
        node* temp = top;
        top = top->link;
        delete temp;
    }
}

int main() {
    stack s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    int i = s.pop();
    std::cout << std::endl << "Item popped=" << i;
    i = s.pop();
    std::cout << std::endl << "Item popped=" << i;
    i = s.pop();
    std::cout << std::endl << "Item popped=" << i;
    return 0;
}

