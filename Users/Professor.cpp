#include "Professor.h"
#include <iostream>

/* Constructor */
Professor::Professor(string name, string alias, int salary, string joke) : User(name, alias, salary) {
    this->joke = joke;
    accessLevel = YELLOW;
}

/* Getters */
string Professor::getJoke() {
    return joke;
}

string Professor::toString() const {
    return "Professor " + getName() + " (" + stringAccessLevel(accessLevel) + " | @" + getAlias() + ")";
}

/* Setters */
void Professor::setJoke(string joke) {
    this->joke = joke;
}

/* Make joke method allows professor to joke right into the console */
void Professor::makeJoke() {
    cout << "Professor " << getName() << ": \"" << joke << "\"" << endl;
}