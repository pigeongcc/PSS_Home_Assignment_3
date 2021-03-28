#include "Admin.h"

/* Constructor */
Admin::Admin(string name, string alias, int salary) : User(name, alias, salary) {
    accessLevel = RED;
}

string Admin::toString() const {
    return "Admin " + getName() + " (" + stringAccessLevel(accessLevel) + " | @" + getAlias() + ")";
}

/*
 * Give access method
 * Adds User to the list of access to Room
*/
void Admin::giveAccess(User& user, Room& room) {
    room.addGrantedUser(user);
}

/*
 * Deprive access method
 * Removes User from the list of access to Room
*/
void Admin::depriveAccess(User& user, Room& room) {
    room.removeGrantedUser(user);
}
