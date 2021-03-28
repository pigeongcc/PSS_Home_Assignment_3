#include "ConferenceRoom.h"

ConferenceRoom::ConferenceRoom(string number) : Room(number) {
    accessLevel = YELLOW;
}

ConferenceRoom::ConferenceRoom(string number, int floor) : Room(number, floor) {
    accessLevel = YELLOW;
}

string ConferenceRoom::getType() const {
    return "Conference Room";
}