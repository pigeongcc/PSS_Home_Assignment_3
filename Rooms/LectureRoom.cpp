#include "LectureRoom.h"

LectureRoom::LectureRoom(string number) : Room(number) {
    accessLevel = YELLOW;
}

LectureRoom::LectureRoom(string number, int floor) : Room(number, floor) {
    accessLevel = YELLOW;
}

string LectureRoom::getType() const {
    return "Lecture Room";
}