#include <iostream>
#include <map>
#include <iomanip> 
class ShoppingList {
private:
    std::map<int, double> items; 
public:
    void addItem(int code, double price) {
        items[code] = price;
        std::cout << "Item added: Code " << code << ", Price $" << price << std::endl;
    }
    void deleteItem(int code) {
        std::map<int, double>::iterator it = items.find(code);
        if (it != items.end()) {
            items.erase(it);
            std::cout << "Item with Code " << code << " removed." << std::endl;
        } else {
            std::cout << "Item with Code " << code << " not found." << std::endl;
        }
    }
    void printTotal() const {
        double total = 0.0;
        for (std::map<int, double>::const_iterator it = items.begin(); it != items.end(); ++it) {
            total += it->second; 
        }
        std::cout << "Total value of the order: $" << std::fixed << std::setprecision(2) << total << std::endl;
    }
    void printList() const {
        if (items.empty()) {
            std::cout << "The shopping list is empty." << std::endl;
            return;
        }
        std::cout << "Shopping List:" << std::endl;
        for (std::map<int, double>::const_iterator it = items.begin(); it != items.end(); ++it) {
            std::cout << "Code: " << it->first << ", Price: $" << it->second << std::endl;
        }
    }
};

int main() {
    ShoppingList list;
    list.addItem(101, 29.99);
    list.addItem(102, 15.50);
    list.addItem(103, 45.00);
    list.printList();
    list.printTotal();
    list.deleteItem(102);
    list.printList();
    list.printTotal();
    return 0;
}

