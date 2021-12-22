#include <iostream>

using namespace std;

class Counter {
    private:
        int currentCount = 0;
    public:
        int get_value() {
            return currentCount;
        }
        void count() {
            currentCount++;
        }
        void reset() {
            currentCount = 0;
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
