#include "Cabinet.h"

Cabinet::Cabinet(string number) : Room(number) {
    accessLevel = YELLOW;
}

Cabinet::Cabinet(string number, int floor) : Room(number, floor) {
    accessLevel = YELLOW;
}

string Cabinet::getType() const {
    return "Cabinet";
}