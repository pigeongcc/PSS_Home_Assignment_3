#ifndef HW2_ROOM_H
#define HW2_ROOM_H

#include <string>
#include <vector>
#include "../Enums.h"
#include "../Users/Director.h"

class User;

using namespace std;

class Room {
protected:
    string number;
    vector<User*> grantedUsers;
    static bool isEmergency;
    AccessLevel accessLevel;
    Room(string number);
public:
    string getNumber() const;
    vector<User*> getListOfGrantedUsers() const;
    vector<string> getNamesOfGrantedUsers() const;
    AccessLevel getAccessLevel() const;
    bool checkAccess(const User* checkUser) const;
    static bool getIfEmergency();
    virtual string getType() const = 0;

    void setNumber(string number);
    void printAccessLevel() const;
    void addGrantedUser(User& user);
    void removeGrantedUser(User& user);
    void initiateEmergency();
    void terminateEmergency();
};

#endif //HW2_ROOM_H
