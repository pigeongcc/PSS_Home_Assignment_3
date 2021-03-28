#ifndef HW2_GUEST_H
#define HW2_GUEST_H

#include "../Enums.h"
#include "User.h"


class Guest : public User {
private:
    string whence;
public:
    Guest(string name, string whence);

    string getWhence();
    string toString() const override;

    void setWhence(string newWhence);
};

#endif //HW2_GUEST_H
