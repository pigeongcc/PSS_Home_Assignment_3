#include "Enums.h"
#include <string>

using namespace std;

string stringAccessLevel(AccessLevel accessLevel) {
    switch (accessLevel) {
        case BLUE:     return "BLUE";
        case GREEN:     return "GREEN";
        case YELLOW:    return "YELLOW";
        case RED:       return "RED";
        default:        return "NO LEVEL";
    }
}

string stringLab(Lab lab) {
    switch (lab) {
        case ROBOTICS: return "Robotics";
        case SOFTWARE_SYSTEMS: return "Software Systems";
        case ARTIFICIAL_INTELLIGENCE: return "AI";
        case COGNITIVE_SYSTEMS: return "Cognitive Systems";
        case OPERATING_SYSTEMS_PROGRAMMING_LANGUAGES_AND_COMPILERS: return "Operating systems, programming languages and compilers";
        case MACHINE_LEARNING_AND_DATA_REPRESENTATION: return "ML and data representation";
        case NETWORKS_AND_BLOCKCHAIN_TECHNOLOGIES: return "Networks and blockchain technologies";
        case PROGRAM_ENGINEERING: return "Program engineering";
        default: return "IU";
    }
}
