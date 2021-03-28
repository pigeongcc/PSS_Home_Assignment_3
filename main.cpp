#include <iostream>
#include "Users/User.h"
#include "Rooms/Room.h"
#include "Rooms/Classroom.h"
#include "Rooms/LectureRoom.h"
#include "Rooms/ConferenceRoom.h"
#include "Rooms/Cabinet.h"
#include "Rooms/DirectorCabinet.h"
#include "Users/Student.h"
#include "Users/Employee.h"
#include "Users/Professor.h"
#include "Users/Admin.h"

using namespace std;

int main() {

    // 1 director
    Director director = Director("Kirill Seminikhin", "seme4ko", 1000000);
    // 2 admins
    Admin admin1 = Admin("Nikita Odmenov", "0dman", 50000);
    Admin admin2 = Admin("Semen Nikitin", "g0ddamn", 49999);
    // 4 professors
    Professor prof1 = Professor("Giancarlo Succi", "su4", 500000, "Students' opinion matters.");
    Professor prof2 = Professor("Adil Khan", "adilhan", 400000, "I don't create the pressure. Raise your hand, who feels the pressure.");
    Professor prof3 = Professor("Alexandr Tormasov", "Tormass", 100000, "I don't want to go into the details. I just want to emphasize you that...");
    Professor prof4 = Professor("Eugene Zouev", "z0uev", 12345678, "Class is just a type! Nothing more!");
    // 8 employees
    Employee emp1 = Employee("Artur", "employka", 45000, ROBOTICS);
    Employee emp2 = Employee("Andrey", "ployka", 45000, SOFTWARE_SYSTEMS);
    Employee emp3 = Employee("Alexandr", "sloyka", 45000, ARTIFICIAL_INTELLIGENCE);
    Employee emp4 = Employee("Arlan", "kroyka", 45000, COGNITIVE_SYSTEMS);
    Employee emp5 = Employee("Anton", "troyka", 45000, OPERATING_SYSTEMS_PROGRAMMING_LANGUAGES_AND_COMPILERS);
    Employee emp6 = Employee("Artem", "dvoyka", 45000, PROGRAM_ENGINEERING);
    Employee emp7 = Employee("Albert", "noy_ka", 45000, NETWORKS_AND_BLOCKCHAIN_TECHNOLOGIES);
    Employee emp8 = Employee("Adrian", "ne_noy_ka", 45000, MACHINE_LEARNING_AND_DATA_REPRESENTATION);
    // 16 students
    Student stud1 = Student("Sergey Golubev", "pigeon_gcc", 36000, 5.00, "B20-02");
    Student stud2 = Student("Iskander Nafikov", "nafik", 36000, 5.00, "B20-02");
    Student stud3 = Student("Eduard Zaripov", "edick", 36000, 5.00, "B20-02");
    Student stud4 = Student("Dzhemilya Gizutdinova", "jam", 36000, 5.00, "B20-02");
    Student stud5 = Student("Seva Gamer", "idontcare", 36000, 5.00, "B20-02");
    Student stud6 = Student("Rodion Chernitsa", "rodick", 36000, 5.00, "B20-02");
    Student stud7 = Student("Dinar Pavlov", "pavlu6a", 16000, 3.80, "B20-02");
    Student stud8 = Student("Egor Khlopunov", "xlopushka", 6000, 4.20, "B19-03");
    Student stud9 = Student("Lev Pushkov", "pushka", 26000, 3.55, "B20-01");
    Student stud10 = Student("Vitaliy Bespalov", "pes_pavlova", 12000, 4.05, "B20-06");
    Student stud11 = Student("Daniil Trikhleb", "paparobot", 30000, 4.80, "B17-05");
    Student stud12 = Student("Akakiy Movsisyan", "akamo", 3000, 4.80, "B18-04");
    Student stud13 = Student("Mike Ivanov", "l1va", 36000, 4.75, "B20-03");
    Student stud14 = Student("Artem Murashko", "murashka", 32000, 4.00, "B17-02");
    Student stud15 = Student("Eugene Zoo", "queue", 19000, 3.50, "B19-03");
    Student stud16 = Student("Wolf Auf", "better_to_have_a_friend", 3000, 4.78, "B19-04");

    // Information about users
    cout << endl;
    cout << director.toString() << endl;
    cout << admin1.toString() << endl;
    cout << prof2.toString() << endl;
    cout << emp3.toString() << endl;
    cout << stud4.toString() << endl;
    cout << endl;

    // Initialization of Rooms
    Classroom class1 = Classroom("313");
    Classroom class2 = Classroom("318");
    LectureRoom lec1 = LectureRoom("108 West");
    LectureRoom lec2 = LectureRoom("105 East");
    Cabinet cab1 = Cabinet("319");
    ConferenceRoom conf1 = ConferenceRoom("3.1");
    ConferenceRoom conf2 = ConferenceRoom("4.2");
    DirectorCabinet directorCab1 = DirectorCabinet("425", director);

    directorCab1.printAccessLevel();        // prints access level of Director Cabinet
    directorCab1.printHost();               // prints info about the host of Director Cabinet
    director.access(directorCab1);       // Kirill Semenikhin tries to access his Cabinet
    cout << endl;

    stud5.access(directorCab1);     // Student Seva Gamer tries to access the Director Cabinet
    admin1.giveAccess(stud5, directorCab1);      // Admin Nikita gives Seva access to the Director Cabinet
    stud5.access(directorCab1);                     // and tries one more time
    admin2.depriveAccess(stud5, directorCab1);   // Admin Semen deprives Seva access to the Director Cabinet
    stud5.access(directorCab1);                     // but Seva still tries
    cout << endl;

    prof2.access(directorCab1);     // Adil Khan tries to access the Director Cabinet
    prof2.makeJoke();                  // After he is rejected, he makes a joke
    cout << endl;

    cab1.initiateEmergency();           // Emergency situation is initiated
    prof3.access(directorCab1);     // Alex Tormasov escapes through the colleague's cabinet
    stud2.access(directorCab1);     // Student Iskander follows him
    stud14.access(lec1);            // Student Artem decides to escape through the Lecture Room
    cab1.terminateEmergency();         // Emergency is terminated
    stud3.access(lec1);      // Student Eduard didn't escape through the Lecture Room, yet there's no more neediness

    return 0;
}
