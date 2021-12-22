#include <iostream>
using std::string;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    string Email;
    int Age;
    int PerformanceRating;

public:
    void setName(string name) {
        Name = name;
    }
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18) {
            Age = age;
        }
    }
    int getAge() {
        return Age;
    }
    Employee(string name, string company, int age, int rating) {
        Name = name;
        Company = company;
        Age = age;
        PerformanceRating = rating;
    }
    void IntroduceYourSelf() {
        std::cout << "Hello, I am " << Name << std::endl;
        std::cout << "I work at " << Company << std::endl;
        std::cout << "I am " << Age << " Years old" << std::endl;
    };
    void AskForPromotion() {
        if (PerformanceRating >= 90) {
            std::cout << Name << " was promoted!!" << std::endl;
        } else if (PerformanceRating >= 80) {
            std::cout << Name << " you will be re-evaluated for a promotion in 3 months" << std::endl;
        } else {
            std::cout << Name << " sorry no promotion for you" << std::endl;
        }
    };

};

int main()
{
    Employee employee1 = Employee("Rebecca", "Google", 30, 94);
    employee1.IntroduceYourSelf();
    employee1.AskForPromotion();

    Employee employee2 = Employee("John", "Google", 34, 80);
    employee2.IntroduceYourSelf();
    employee2.AskForPromotion();

    Employee employee3 = Employee("Sal", "Pizza Pi Co.", 32, 76);
    employee3.IntroduceYourSelf();
    employee3.AskForPromotion();
    return 0;
}