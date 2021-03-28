#include "Employee.h"

/* Constructor */
Employee::Employee(string name, string alias, int salary, Lab lab) : User(name, alias, salary)  {
    this->lab = lab;
    accessLevel = YELLOW;
}

/* Getters */
string Employee::getLab() {
    return stringLab(lab);
}

string Employee::toString() const {
    return "Employee " + getName() + " (" + stringAccessLevel(accessLevel) + " | @" + getAlias() + ", Lab: " + stringLab(lab) + ")";
}

/* Setters */
void Employee::setLab(Lab lab) {
    this->lab = lab;
}
