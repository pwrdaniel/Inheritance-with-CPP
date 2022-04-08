#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string m_name = {};
    int m_age = {};

    Person(const string& name = "", int age = 0)
 : this->m_name{ name }, this->m_age{ age }
    {
    }

    const string& getName() { return m_name; }
    int getAge() { return m_age; }

};

class BaseballPlayer : public Person
{

public:
    double m_battingAverage{};
    int m_homeRuns{};

    BaseballPlayer(double battingAverage = 0.0, int homeRuns = 0)
        : this->m_battingAverage{ battingAverage }, this->m_homeRuns{ homeRuns }
    {
    }

};

class Employee : public Person 
{
public:
    double m_salary = {};

    Employee(double salary = 0.0) : this->m_salary{salary} {}

    double getSalary() : return{m_salary}
};


int main()
{
    BaseballPlayer john;
    john.m_name = "John"; // Our guys name is John
    john.m_age = 27; 
    john.m_battingAverage = 127.8;
    
    //Output contains from both classes that we inherited
    cout << john.getName() << "\n" << john.getAge() << "\n" << john.m_battingAverage;
    cout << endl;

    //Without the functions output
    Employee employee;
    employee.m_name = "Janez";
    employee.m_age = 19;
    employee.m_salary = 724.89;

    //Output with the functions
    cout << employee.getName() << endl;
    cout << employee.getAge() << endl;
    cout << employee.getSalary() << endl;
}

