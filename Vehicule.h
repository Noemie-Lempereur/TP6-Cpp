
#ifndef TP5_VEHICULE_H
#define TP5_VEHICULE_H
#include "point.h"

class Vehicule {
private:
    char* immatriculation;
    Point position;
public:
    char *getImmatriculation() const;
    void setImmatriculation(char *imma);
    Point getPosition() const;
    Vehicule();
    Vehicule(double x, double y);
    Vehicule(char *string, Point point);
    ~Vehicule();
    Vehicule(Vehicule const& copie);
    void setPosition(Point pos);
    float moveTo(Point p);
    float moveTo(Vehicule v);
    float moveTo(double x, double y);
    void print();
    void reset();
};


#endif //TP5_VEHICULE_H
