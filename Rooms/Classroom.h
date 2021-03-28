#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H

#include "Room.h"

class Classroom : public Room {
public:
    Classroom(string number);
    Classroom(string number, int floor);
    string getType() const override;
};


#endif //HW2_CLASSROOM_H
