#include <iostream>
#define MAX 10
class queue {
private:
    int arr[MAX];
    int front, rear;
public:
    queue() {
        front = -1;
        rear = -1;
    }
    void addq(int item) {
        if ((rear == MAX - 1 && front == 0) || (rear + 1 == front)) {
            std::cout << "\nQueue is full";
            return;
        }
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
        arr[rear] = item;
        if (front == -1)
            front = 0;
    }
    int delq() {
        if (front == -1) {
            std::cout << "\nQueue is empty";
            return -1; 
        }
        int data = arr[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            if (front == MAX - 1)
                front = 0;
            else
                front = front + 1;
        }
        return data;
    }
};
int main() {
    queue a;
    a.addq(11);
    a.addq(12);
    a.addq(13);
    a.addq(14);
    a.addq(15);
    a.addq(16);
    a.addq(17);
    a.addq(18);
    a.addq(19);
    a.addq(20);
    a.addq(21); 
    for (int i = 0; i < 3; i++) {
        int item = a.delq();
        std::cout << "\nItem deleted=" << item;
    }
    return 0;
}

