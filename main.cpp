#include <iostream>
#include "point.h"
#include "Vehicule.h"
using namespace std;

void vehiculeIdTest();
void vehiculeIdTest2();
void vehiculeCopyTest();
void vehicleMoveTests();

int main() {
    vehiculeIdTest();
    cout<<"----------"<<endl;
    vehiculeIdTest2();
    cout<<"----------"<<endl;
    vehiculeCopyTest();
    cout<<"----------"<<endl;
    vehicleMoveTests();
    return 0;
}

void vehiculeIdTest() {
    Point position(0,10);
    char identifier[] = "ML-888-VK";
    Vehicule vehicle(identifier, position);
    vehicle.print(); // affichage 1
    char * retrieveId = vehicle.getImmatriculation();
    retrieveId[0] = 'X'  ;
    vehicle.print(); // affichage 2
}

void vehiculeIdTest2() {
    Point position(0,10);
    char identifier[] = "ML-888-VK";
    Vehicule vehicle(identifier, position);
    vehicle.print(); // affichage 1
    identifier[0] = 'X';
    vehicle.print(); // affichage 2
}

void vehiculeCopyTest(){
    Vehicule v1("JK-857-FA",Point(0,0));
    Vehicule v2 = v1;
    v1.setImmatriculation("XXX");
    v1.print();
    v2.print();
}

void vehicleMoveTests(){
    Vehicule v1(  "JK-857-FA", Point(0,0));
    Vehicule v2(  "ML-888-VK", Point(0,10 ));
    Point p = v1.getPosition();
    float distance = 0;
    distance = v1.moveTo(v2);
    std::cout << "distance : " << distance << std::endl; // affichage 1
    v1.print(); // affichage 2
    p.setY(50);
    std::cout << p.getY();
    std::cout<<std::endl;
    v1.print(); // affichage 3
    distance = v1.moveTo(p);
    std::cout << "distance : " << distance << std::endl; // affichage 4
    v1.print(); // affichage 5
    distance = v1.moveTo(0, 80);
    std::cout << "distance : " << distance << std::endl; //   affichage 6
    v1.print(); // affichage 7
    v2.print(); // affichage 8
}