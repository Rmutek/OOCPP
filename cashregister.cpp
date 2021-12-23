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

int main() {
    return 0;
}