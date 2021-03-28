Programming Software Systems 2
=============================
Homework Assignment 3 - Access System Addition
=============================
DESCRIPTION
------------
This program simulates access system of Innopolis University.

There are 4 access levels for each person and room: BLUE, GREEN, YELLOW, RED. There is also NO_LEVEL status for those without determined access level.
There are two main virtual classes: User and Room.

USERS
------------
Every User has:
- alias
- salary
- access level

There are 6 classes inherited from User: Guest, Student, Employee, Professor, Admin, and Director.

Guest has:
- place whence the person came from

Student has:
- grade point average (GPA)
- group name
- GREEN access level

Employee has:
- lab
- YELLOW access level

Professor has:
- joke
- YELLOW access level

Admin has:
- possibility to add/remove Users to/from the list of granted users for a particular Room
- RED access level

Director has:
- RED access level

ROOMS
------------
Every Room has:
- number
- floor
- access level
- list of granted users

* There is also a static parameter isEmergency for Room class. In case of emergency situation, all the rooms are accessible for every User.
* Users from the list of granted users of the Room are allowed to access this Room, regardless of their access level.
* Users with BLUE access level (Guests initially) by default can access all Lecture Rooms and Conference Rooms on the 1st floor only.

There are 5 classes inherited from User: Classroom, Lecture Room, Conference Room, Cabinet, and Director Cabinet

Classroom has:
- GREEN access level

Lecture Room has:
- YELLOW access level

Conference Room has:
- YELLOW access level

Cabinet has:
- YELLOW access level

Director Cabinet has:
- RED access level
- a host in the person of the Director class instance

There are methods for getting, setting and printing info about the host of the director cabinet.

RECOMMENDATIONS
------------
The program was written using 
- C++14
- IDE CLion 2020.2.5
- Builder CMake 3.17

It is recommended to use the same tools for running the program.

HOW TO RUN
------------
Run main.cpp to run the test code for the program.