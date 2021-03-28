#include "Classroom.h"

Classroom::Classroom(string number) : Room(number) {
    accessLevel = GREEN;
}

Classroom::Classroom(string number, int floor) : Room(number, floor) {
    accessLevel = GREEN;
}

string Classroom::getType() const {
    return "Classroom";
}