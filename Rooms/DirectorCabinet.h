#ifndef HW2_DIRECTORCABINET_H
#define HW2_DIRECTORCABINET_H

#include "Room.h"

class DirectorCabinet : public Room {
private:
    Director* host;
public:
    DirectorCabinet(string number, Director& host);
    DirectorCabinet(string number, Director& host, int floor);

    const Director& getHost() const;
    string getType() const override;

    void setHost(Director& newHost);
    void printHost() const;
};


#endif //HW2_DIRECTORCABINET_H
