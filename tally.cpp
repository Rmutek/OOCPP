#include <iostream>

using namespace std;

class Counter {
private:
    int value = 0;
public:
    int get_value() const {
        return value;
    }
    void count() {
        value++;
    }
    void reset() {
        value = 0;
    }
};

int main()
{
    Counter tally;
    tally.reset();
    tally.count();
    tally.count();
    int result = tally.get_value();
    cout << result << endl;

    tally.count();
    tally.count();
    result = tally.get_value();
    cout << result << endl;

    tally.reset();

    tally.count();
    result = tally.get_value();
    cout << result << endl;
    return 0;
}
