#ifndef HW2_ADMIN_H
#define HW2_ADMIN_H

#include "../Enums.h"
#include "User.h"
#include "../Rooms/Room.h"

class Admin : public User {
public:
    Admin(string name, string alias, int salary);

    string toString() const override;

    void giveAccess(User& user, Room& room);
    void depriveAccess(User& user, Room& room);
};


#endif //HW2_ADMIN_H
