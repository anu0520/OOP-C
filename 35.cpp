#include <iostream>
struct node {
    int data;
    node* link;
};
class queue {
private:
    node* front;
    node* rear;
public:
    queue();           
    void addq(int item);
    int delq();
    ~queue();          
};
queue::queue() {
    front = rear = NULL;
}
void queue::addq(int item) {
    node* temp = new node;
    if (temp == NULL) {
        std::cout << std::endl << "Queue is full";
        return;
    }
    temp->data = item;
    temp->link = NULL;

    if (rear == NULL) { 
        front = rear = temp;
    } else {
        rear->link = temp;
        rear = temp;
    }
}
int queue::delq() {
    if (front == NULL) {
        std::cout << std::endl << "Queue is empty";
        return -1; 
    }
    node* temp = front;
    int item = front->data;
    front = front->link;
    if (front == NULL) { 
        rear = NULL;
    }
    delete temp;
    return item;
}
queue::~queue() {
    while (front != NULL) {
        node* temp = front;
        front = front->link;
        delete temp;
    }
}
int main() {
    queue a;
    a.addq(11);
    a.addq(12);
    a.addq(13);
    a.addq(14);
    a.addq(15);
    a.addq(16);
    a.addq(17);

    int i = a.delq();
    std::cout << std::endl << "Item extracted=" << i;
    i = a.delq();
    std::cout << std::endl << "Item extracted=" << i;
    i = a.delq();
    std::cout << std::endl << "Item extracted=" << i;

    return 0;
}

