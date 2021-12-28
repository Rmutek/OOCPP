#include <iostream>

using namespace std;

class CashRegister {
public:
    void clear();
    void add_item(double item_price);
    int get_count() const;
    double get_total() const;
private:
    int item_count;
    double total_price;
};

void CashRegister::add_item(double price) {
    item_count++;
    total_price += price;
}

void CashRegister::add_items(int quantity, double price)
{
    for(int i = 1; i <= quantity; i++) {
        add_item(price);
    }
}

int main() {
    return 0;
}