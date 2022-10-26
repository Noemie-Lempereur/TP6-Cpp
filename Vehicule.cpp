
#include <cstring>
#include "Vehicule.h"
#include <cmath>
#include <iostream>

Vehicule::Vehicule():position(0,0) {
    immatriculation = new char[10*sizeof(char)];
    strcpy(immatriculation,"" );
}

Vehicule::Vehicule(double x,double y):position(x,y) {
    immatriculation = new char[10 * sizeof(char)];
    strcpy(immatriculation, "");
}

Vehicule::~Vehicule() {
    delete immatriculation;
}

Vehicule::Vehicule(const Vehicule &copie) {
    position=copie.position;
    immatriculation=new char[10 * sizeof(char)];
    strcpy(immatriculation,copie.immatriculation);
}

void Vehicule::setPosition(Point pos) {
    position = pos;
}

char *Vehicule::getImmatriculation() const {
    return immatriculation;
}

Point Vehicule::getPosition() const {
    return position;
}

void Vehicule::setImmatriculation(char *imma) {
    int s=strlen((imma));
    for(int i=0;i<s;i++) {
        immatriculation[i] = imma[i];
    }
    for(int j=s;j<10;j++){
        immatriculation[j]='=';
    }
}

float Vehicule::moveTo(Point p) {
    float diffx=position.getX()-p.getX();
    float diffy=position.getY()-p.getY();
    float distance=std::sqrt(diffx*diffx+diffy*diffy);
    setPosition(p);
    return distance;
}

float Vehicule::moveTo(Vehicule v) {
    Point p=v.getPosition();
    float diffx=position.getX()-p.getX();
    float diffy=position.getY()-p.getY();
    float distance=std::sqrt(diffx*diffx+diffy*diffy);
    setPosition(p);
    return distance;
}

float Vehicule::moveTo(double x, double y) {
    Point p(x,y);
    float diffx=position.getX()-p.getX();
    float diffy=position.getY()-p.getY();
    float distance=std::sqrt(diffx*diffx+diffy*diffy);
    setPosition(p);
    return distance;
}

void Vehicule::print() {
    std::cout<<"[";
    for(int i=0;i<strlen(getImmatriculation());i++){
        if(immatriculation[i]!='=') {
            std::cout << immatriculation[i];
        }
    }
    std::cout<<"]";
    std::cout<<" position : x="<<getPosition().getX()<<" y="<<getPosition().getY()<<std::endl;
}

void Vehicule::reset() {
    Point p(0,0);
    setPosition(p);
}

Vehicule::Vehicule(char *string, Point point) {
    immatriculation=new char[10 * sizeof(char)];
    for(int i=0;i<strlen(string);i++){
        immatriculation[i]=string[i];
    }
    position=point;
}

