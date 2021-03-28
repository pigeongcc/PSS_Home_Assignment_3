#ifndef HW2_CONFERENCEROOM_H
#define HW2_CONFERENCEROOM_H

#include "Room.h"

class ConferenceRoom : public Room {
public:
    ConferenceRoom(string number);
    string getType() const override;
};

#endif //HW2_CONFERENCEROOM_H
