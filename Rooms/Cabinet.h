#ifndef HW2_CABINET_H
#define HW2_CABINET_H

#include "Room.h"

class Cabinet : public Room {
public:
    Cabinet(string number);
    string getType() const override;
};


#endif //HW2_CABINET_H
