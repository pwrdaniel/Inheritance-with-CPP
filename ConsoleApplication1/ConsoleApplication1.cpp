#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string m_name = {};
    int m_age = {};

    Person(const string& name = "", int age = 0)
        : m_name{ name }, m_age{ age }
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
        : m_battingAverage{ battingAverage }, m_homeRuns{ homeRuns }
    {
    }

};

class Employee : public Person 
{
public:
    double m_placa = {};

    Employee(double placa = 0.0) : m_placa{placa} {}
};


int main()
{
    BaseballPlayer john;
    john.m_name = "John"; // Našemu igralcu je ime John
    john.m_age = 27; 
    john.m_battingAverage = 127.8;
    
    //Izpis bo vseboval atribute iz obeh knjiznic
    cout << john.getName() << "\n" << john.getAge() << "\n" << john.m_battingAverage;
    cout << endl;


    Employee employee;
    employee.m_name = "Janez";
    employee.m_age = 19;
    employee.m_placa = 724.89;

    cout << employee.getName() << endl;
    cout << employee.getAge() << endl;
    cout << employee.m_placa << endl;
}

