#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(string number) : Room(number) {
    accessLevel = YELLOW;
}

string ConferenceRoom::getType() const {
    return "Conference Room";
}