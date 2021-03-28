#include "DirectorCabinet.h"
#include <iostream>

using namespace std;

DirectorCabinet::DirectorCabinet(string number, Director& host) : Room(number) {
    this->host = &host;
    accessLevel = RED;
}

DirectorCabinet::DirectorCabinet(string number, Director& host, int floor) : Room(number, floor) {
    this->host = &host;
    accessLevel = RED;
}

string DirectorCabinet::getType() const {
    return "Director Cabinet";
}

const Director& DirectorCabinet::getHost() const{
    return *host;
}

void DirectorCabinet::setHost(Director& newHost) {
    this->host = &newHost;
}

/* Prints information about the host of the Director Cabinet */
void DirectorCabinet::printHost() const {
    cout << "Host of director cabinet #" << getNumber() << " is " << getHost().toString() << " with the salary of "
         << getHost().getSalary() << endl;
}
