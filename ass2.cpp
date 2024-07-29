#include <iostream>
#include <vector>
#include <string>
class Item {
public:
    std::string code;
    double price;

    Item(const std::string &c, double p) : code(c), price(p) {}
};
class ShoppingList {
private:
    std::vector<Item> items;
public:
    void addItem(const std::string &code, double price) {
        items.push_back(Item(code, price));
        std::cout << "Item with code " << code << " and price " << price << " added to the shopping list.\n";
    }
    void deleteItem(const std::string &code) {
        for (auto item = items.begin(); it != items.end(); ++it) {
            if (it->code == code) {
                items.erase(it);
                std::cout << "Item with code " << code << " removed from the shopping list.\n";
                return;
            }
        }
        std::cout << "Item with code " << code << " not found in the shopping list.\n";
    }
    double totalValue() const {
        double total = 0.0;
        for (const auto &item : items) {
            total += item.price;
        }
        return total;
    }
    void showList() const {
        if (items.empty()) {
            std::cout << "Shopping list is empty.\n";
        } else {
            std::cout << "Shopping list:\n";
            for (const auto &item : items) {
                std::cout << "Code: " << item.code << ", Price: " << item.price << "\n";
            }
        }
    }
};
int main() {
    ShoppingList shoppingList;
    shoppingList.addItem("A101", 23.50);
    shoppingList.addItem("B202", 45.00);
    shoppingList.addItem("C303", 15.75);
    std::cout << "Shopping List:\n";
    shoppingList.showList();
    shoppingList.deleteItem("B202");
    std::cout << "Updated Shopping List:\n";
    shoppingList.showList();
    double total = shoppingList.totalValue();
    std::cout << "Total value of the order: $" << total << "\n";
    return 0;
}

