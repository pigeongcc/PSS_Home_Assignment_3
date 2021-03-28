cmake_minimum_required(VERSION 3.17)
project(HW2)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW2 main.cpp Enums.cpp Enums.h Users/User.cpp Users/User.h Rooms/Room.cpp Rooms/Room.h Users/Student.cpp Users/Student.h Users/Professor.cpp Users/Professor.h Users/Employee.cpp Users/Employee.h Users/Admin.cpp Users/Admin.h Users/Director.cpp Users/Director.h Rooms/LectureRoom.cpp Rooms/LectureRoom.h Rooms/Classroom.cpp Rooms/Classroom.h Rooms/Cabinet.cpp Rooms/Cabinet.h Rooms/DirectorCabinet.cpp Rooms/DirectorCabinet.h Rooms/ConferenceRoom.cpp Rooms/ConferenceRoom.h)