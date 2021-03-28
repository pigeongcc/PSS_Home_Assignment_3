#include "LectureRoom.h"

LectureRoom::LectureRoom(string number) : Room(number) {
    accessLevel = YELLOW;
}

string LectureRoom::getType() const {
    return "Lecture Room";
}