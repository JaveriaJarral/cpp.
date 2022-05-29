#include <iostream>
using namespace std;

struct Person
{
    char name[10];
    int age;
    float salary;
};

int main()
{
    Person p;
    
    cout << "Enter name: ";
    cin.get(p.name,10 );
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout <<"Age: " << p.age << endl;
    cout << "Salary: " << p.salary;

    return 0;
}
