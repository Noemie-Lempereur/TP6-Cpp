

#ifndef TP2_CLASSES_POINT_H
#define TP2_CLASSES_POINT_H

class Point{
    private:
    float x=0;
    float y=0;
    public:
    Point();
    Point(double x, double y);
    Point(Point const& copie);
    void setX(double x); //le nom de l'argument est le même que l'attribut de la classe
    void setY(double y); //le nom de l'argument est le même que l'attribut de la classe
    double getX(); //pour récupérer X
    double getY(); //pour récupérer Y

};


#endif //TP2_CLASSES_POINT_H
