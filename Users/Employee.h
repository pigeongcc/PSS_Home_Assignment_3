#ifndef HW2_EMPLOYEE_H
#define HW2_EMPLOYEE_H

#include "../Enums.h"
#include "User.h"


class Employee : public User {
private:
    Lab lab;
public:
    Employee(string name, string alias, int salary, Lab lab);

    string getLab();
    string toString() const override;

    void setLab(Lab lab);
};


#endif //HW2_EMPLOYEE_H
