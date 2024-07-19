#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    Item(int itemNo, string name, double price) : itemNo(itemNo), name(name), price(price) {}

    int getItemNo() const { return itemNo; }
    string getName() const { return name; }
    double getPrice() const { return price; }

private:
    int itemNo;
    string name;
    double price;
};

class DiscountedItem : public Item {
public:
    DiscountedItem(int itemNo, string name, double price, double discountPercent)
        : Item(itemNo, name, price), discountPercent(discountPercent) {}

    double getDiscountedPrice() const {
        return getPrice() * (1 - discountPercent / 100);
    }

private:
    double discountPercent;
};

void printBill(DiscountedItem items[], int n) {
    double total = 0.0;
    for (int i = 0; i < n; i++) {
        DiscountedItem item = items[i];
        double discountedPrice = item.getDiscountedPrice();
        cout << "Item No: " << item.getItemNo() << ", Name: " << item.getName()
                  << ", Price: " << item.getPrice() << ", Discounted Price: " << discountedPrice << endl;
        total += discountedPrice;
    }
    cout << "Total: " << total << endl;
}

int main() {
    DiscountedItem items[] = {
        DiscountedItem(1, "Item1", 100, 10),
        DiscountedItem(2, "Item2", 200, 20),
        DiscountedItem(3, "Item3", 300, 30)
    };

    int n = sizeof(items) / sizeof(DiscountedItem);
    printBill(items, n);

    return 0;
}
