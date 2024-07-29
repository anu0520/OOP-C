#include <iostream>
using namespace std;
const int m = 50;
class items {
    int itemcode[m];
    float itemprice[m];
    int count;
public:
    void cnt(void) { count = 0; }
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitems(void);
};
void items::getitem(void) {
    cout << "Enter item code: ";
    cin >> itemcode[count];
    cout << "Enter item cost: ";
    cin >> itemprice[count];
    count++;
}
void items::displaysum(void) {
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum = sum + itemprice[i];
    cout << "\nTotal value: " << sum << "\n";
}
void items::remove(void) {
    int a;
    cout << "Enter item code to remove: ";
    cin >> a;
    for (int i = 0; i < count; i++)
        if (itemcode[i] == a)
            itemprice[i] = 0;
}
void items::displayitems(void) {
    cout << "\nCode    Price\n";
    for (int i = 0; i < count; i++) {
        cout << itemcode[i] << "   " << itemprice[i] << "\n";
    }
}
int main() {
    items order;
    order.cnt();
    int x;
    do {
        cout << "\nYou can do the following;\n"
             << "Enter appropriate number\n";
        cout << "\n1: Add an item";
        cout << "\n2: Display total value";
        cout << "\n3: Delete an item";
        cout << "\n4: Display all items";
        cout << "\n5: Quit";
        cout << "\n\nWhat is your option? ";
        cin >> x;
        switch (x) {
            case 1:
                order.getitem();
                break;
            case 2:
                order.displaysum();
                break;
            case 3:
                order.remove();
                break;
            case 4:
                order.displayitems();
                break;
            case 5:
                cout << "Quitting program.\n";
                break;
            default:
                cout << "Error in input\n";
        }
    } while (x != 5);
    return 0;
}

