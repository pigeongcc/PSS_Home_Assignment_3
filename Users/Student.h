#ifndef HW2_STUDENT_H
#define HW2_STUDENT_H

#include "../Enums.h"
#include "User.h"

class Student : public User {
private:
    double gpa;
    string group;
public:
    Student(string name, string alias, int salary, double gpa, string group);

    double getGpa();
    string getGroup();
    string toString() const override;

    void setGpa(double gpa);
    void setGroup(string group);
};


#endif //HW2_STUDENT_H
