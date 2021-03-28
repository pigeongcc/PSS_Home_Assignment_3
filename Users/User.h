#ifndef HW2_USER_H
#define HW2_USER_H

#include "../Enums.h"
#include <string>
#include <vector>

class Room;

using namespace std;

class User {
protected:
    string name;
    string alias;
    int salary;
    AccessLevel accessLevel;
    User(string name, string alias, int salary);
public:
    string getName() const;
    string getAlias() const;
    int getSalary() const;
    virtual string toString() const = 0;
    AccessLevel getAccessLevel() const;

    void setName(string name);
    void setAlias(string alias);
    void setSalary(int salary);
    void access(Room& room) const;
};

#endif //HW2_USER_H
