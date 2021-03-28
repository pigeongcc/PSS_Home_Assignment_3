#include "Student.h"

/* Constructor */
Student::Student(string name, string alias, int salary, double gpa, string group) : User(name, alias, salary) {
    this->gpa = gpa;
    this->group = group;
    accessLevel = GREEN;
}

/* Getters */
double Student::getGpa() {
    return gpa;
}

string Student::getGroup() {
    return group;
}

string Student::toString() const {
    return "Student " + getName() + " (" + stringAccessLevel(accessLevel) +
           " | @" + getAlias() + ", group " + group + ", GPA = " + to_string(gpa).substr(0,4) + ")";
}

/* Setters */
void Student::setGpa(double gpa) {
    this->gpa = gpa;
}

void Student::setGroup(string group) {
    this->group = group;
}