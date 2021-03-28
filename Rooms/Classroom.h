#ifndef HW2_CLASSROOM_H
#define HW2_CLASSROOM_H

#include "Room.h"

class Classroom : Room {
public:
    Classroom(string number);
    string getType() const override;
};


#endif //HW2_CLASSROOM_H
