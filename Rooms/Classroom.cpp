#include "Classroom.h"

Classroom::Classroom(string number) : Room(number) {
    accessLevel = GREEN;
}
string Classroom::getType() const {
    return "Classroom";
}