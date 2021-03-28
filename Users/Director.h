#ifndef HW2_DIRECTOR_H
#define HW2_DIRECTOR_H

#include "../Enums.h"
#include "User.h"

class Director : public User {
public:
    Director(string name, string alias, int salary);

    string toString() const override;
};


#endif //HW2_DIRECTOR_H
