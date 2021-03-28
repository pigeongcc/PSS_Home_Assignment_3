#include "User.h"
#include "../Rooms/Room.h"
#include <iostream>

using namespace std;

/* Constructor */
User::User(string name, string alias, int salary) {
    this->name = name;
    this->alias = alias;
    this->salary = salary;
}

/* Getters */
string User::getName() const {
    return name;
}

string User::getAlias() const {
    return alias;
}

int User::getSalary() const {
    return salary;
}

AccessLevel User::getAccessLevel() const {
    return accessLevel;
}

/* Setters */
void User::setName(string name) {
    this->name = name;
}

void User::setAlias(string alias) {
    this->alias = alias;
}

void User::setSalary(int salary) {
    this->salary = salary;
}

/*
 * Access method
 * Prints a line with the result of an attempt to access a Room by a User
*/
void User::access(Room& room) const {
    string roomName = room.getType() + " #" + room.getNumber();

    // if User's access level is higher or equal OR User has a special access
    if (getAccessLevel() >= room.getAccessLevel() || room.checkAccess(this))
        cout << this->name << " [" << stringAccessLevel(getAccessLevel()) << "] successfully accessed "
        << roomName << " [" << stringAccessLevel(room.getAccessLevel()) << "]." << endl;
    else
        cout << this->name << " [" << stringAccessLevel(getAccessLevel()) << "] doesn't have access to "
        << roomName << " [" << stringAccessLevel(room.getAccessLevel()) << "]." << endl;
}