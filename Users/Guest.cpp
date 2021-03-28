#include "Guest.h"

/* Constructor */
Guest::Guest(string name, string whence) : User(name, "", 0)  {
    this->whence = whence;
    accessLevel = NO_LEVEL;
}

/* Getters */
string Guest::getWhence() {
    return whence;
}

string Guest::toString() const {
    return "Guest " + getName() + " (" + stringAccessLevel(accessLevel) + ") came from " + whence;
}

/* Setters */
void Guest::setWhence(string newWhence) {
    this->whence = newWhence;
}
