#include <iostream>
using std::string;

class Employee {
    private:
        string Name;
        string Company;
        string Email;
        int Age;

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
        Employee(string name, string company, int age) {
            Name = name;
            Company = company;
            Age = age;
        }
        void IntroduceYourSelf() {
            std::cout << "Hello, I am " << Name << std::endl;
            std::cout << "I work at " << Company << std::endl;
            std::cout << "I am " << Age << " Years old" << std::endl;
        };
};

int main()
{
    Employee employee1 = Employee("Rebecca", "Google", 30);
    employee1.IntroduceYourSelf();

    Employee employee2 = Employee("John", "Google", 34);
    employee2.IntroduceYourSelf();
    return 0;
}