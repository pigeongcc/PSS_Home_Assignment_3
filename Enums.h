#ifndef HW2_ENUMS_H
#define HW2_ENUMS_H

#include <string>

using namespace std;

enum AccessLevel {
    NO_LEVEL = 0,
    BLUE = 1,
    GREEN = 2,
    YELLOW = 3,
    RED = 4
};

string stringAccessLevel(AccessLevel accessLevel);

enum Lab {
    ROBOTICS = 0,
    SOFTWARE_SYSTEMS = 1,
    ARTIFICIAL_INTELLIGENCE = 2,
    COGNITIVE_SYSTEMS = 3,
    OPERATING_SYSTEMS_PROGRAMMING_LANGUAGES_AND_COMPILERS = 4,
    MACHINE_LEARNING_AND_DATA_REPRESENTATION = 5,
    NETWORKS_AND_BLOCKCHAIN_TECHNOLOGIES = 6,
    PROGRAM_ENGINEERING = 7
};

string stringLab(Lab lab);

#endif //HW2_ENUMS_H
