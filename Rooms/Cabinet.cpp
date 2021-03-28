#include "Cabinet.h"

Cabinet::Cabinet(string number) : Room(number) {
    accessLevel = YELLOW;
}
string Cabinet::getType() const {
    return "Cabinet";
}