#include <iostream>
#include <string>
using namespace std;
class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(string n = "", int i = 0, double s = 0.0) : name(n), id(i), salary(s) {}
    void setName(string n) {
        name = n;
    }
    string getName() const {
        return name;
    }
    void setId(int i) {
        id = i;
    }
    int getId() const {
        return id;
    }
    void setSalary(double s) {
        salary = s;
    }
    double getSalary() const {
        return salary;
    }
};
class Manager : public Employee {
private:
    string department;
    double bonus;
public:
    Manager(string n = "", int i = 0, double s = 0.0, string d = "", double b = 0.0)
        : Employee(n, i, s), department(d), bonus(b) {}
    void setDepartment(string d) {
        department = d;
    }
    string getDepartment() const {
        return department;
    }
    void setBonus(double b) {
        bonus = b;
    }
    double getBonus() const {
        return bonus;
    }
};
class Engineer : public Employee {
private:
    string specialty;
    double hours;
public:
    Engineer(string n = "", int i = 0, double s = 0.0, string sp = "", double h = 0.0)
        : Employee(n, i, s), specialty(sp), hours(h) {}
    void setSpecialty(string sp) {
        specialty = sp;
    }
    string getSpecialty() const {
        return specialty;
    }
    void setHours(double h) {
        hours = h;
    }
    double getHours() const {
        return hours;
    }
};
int main() {
    Manager mgr("Teju", 612, 75000, "HR", 5000);
    cout << "Manager Details:" << endl;
    cout << "Name: " << mgr.getName() << endl;
    cout << "ID: " << mgr.getId() << endl;
    cout << "Salary: " << mgr.getSalary() << endl;
    cout << "Department: " << mgr.getDepartment() << endl;
    cout << "Bonus: " << mgr.getBonus() << endl;
    Engineer eng("Viya", 126, 60000, "Software", 25);
    cout << "\nEngineer Details:" << endl;
    cout << "Name: " << eng.getName() << endl;
    cout << "ID: " << eng.getId() << endl;
    cout << "Salary: " << eng.getSalary() << endl;
    cout << "Specialty: " << eng.getSpecialty() << endl;
    cout << "Hours: " << eng.getHours() << endl;
    return 0;
}
