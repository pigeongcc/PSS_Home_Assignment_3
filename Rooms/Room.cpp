#include "Room.h"
#include <algorithm>
#include <iostream>

using namespace std;

bool Room::isEmergency = false;

/* Constructor */
Room::Room(string number) {
    this->number = number;
}

/* Getters */
string Room::getNumber() const{
    return number;
}

vector<User*> Room::getListOfGrantedUsers() const {
    return grantedUsers;
}

vector<string> Room::getNamesOfGrantedUsers() const {
    vector<string> list;
    for(User* user : grantedUsers) {
        list.push_back((*user).getName());
    }

    return list;
}

AccessLevel Room::getAccessLevel() const {
    return accessLevel;
}

/* Returns if User can access the Room */
bool Room::checkAccess(const User* checkUser) const {
    if (getIfEmergency()) return true;  // in case of emergency situation, all the rooms are accessible for everybody
    if(find(grantedUsers.begin(), grantedUsers.end(), checkUser) != grantedUsers.end()) // if found
        return true;
    else
        return false;
}

/*
 * Returns if there is an emergency situation at the University
 * In case of emergency situation, every User can open every Room
*/
bool Room::getIfEmergency() {
    return isEmergency;
}

/* Setter */
void Room::setNumber(string newNumber) {
    this->number = newNumber;
}

/* Adds User to the list of granted users for this Room */
void Room::addGrantedUser(User& user) {
    if(find(grantedUsers.begin(), grantedUsers.end(), &user) == grantedUsers.end())      // if not found
        grantedUsers.push_back(&user);                                                            // then add
}

/* Removes User from the list of granted users for this Room */
void Room::removeGrantedUser(User& user) {
    auto iter = find(grantedUsers.begin(), grantedUsers.end(), &user);
    if(iter != grantedUsers.end())          // if found
        grantedUsers.erase(iter);           // then remove
}

/* Initiates emergency situation at the University */
void Room::initiateEmergency() {
    Room::isEmergency = true;
    cout << "EMERGENCY SITUATION: room " << getNumber() << ". The doors can be opened with any pass." << endl;
}

/* Terminates emergency situation at the University */
void Room::terminateEmergency() {
    Room::isEmergency = false;
    cout << "Emergency situation has been eliminated." << endl;
}

/* Prints information about access level of the Room */
void Room::printAccessLevel() const {
    cout << "Access level of " << getType() << " #" << getNumber() << " is "
     << stringAccessLevel(getAccessLevel()) << endl;
}
