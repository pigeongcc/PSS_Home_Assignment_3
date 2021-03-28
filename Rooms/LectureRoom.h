#ifndef HW2_LECTUREROOM_H
#define HW2_LECTUREROOM_H

#include "Room.h"

class LectureRoom : public Room {
public:
    LectureRoom(string number);
    string getType() const override;
};


#endif //HW2_LECTUREROOM_H
