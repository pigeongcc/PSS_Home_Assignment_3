#ifndef HW2_PROFESSOR_H
#define HW2_PROFESSOR_H

#include "../Enums.h"
#include "User.h"


class Professor : public User {
private:
    string joke;
public:
    Professor(string name, string alias, int salary, string joke);

    string getJoke();
    string toString() const override;

    void setJoke(string joke);
    void makeJoke();
};


#endif //HW2_PROFESSOR_H
