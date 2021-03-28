#ifndef HW2_CABINET_H
#define HW2_CABINET_H

#include "Room.h"

class Cabinet : public Room {
public:
    Cabinet(string number);
    Cabinet(string number, int floor);
    string getType() const override;
};


#endif //HW2_CABINET_H
