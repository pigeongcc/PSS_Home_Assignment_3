#include "Director.h"

/* Constructor */
Director::Director(string name, string alias, int salary) : User(name, alias, salary) {
    accessLevel = RED;
}

string Director::toString() const {
    return "Director " + getName() + " (" + stringAccessLevel(accessLevel) + " | @" + getAlias() + ")";
}
