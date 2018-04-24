#include <iostream>

enum plainV {EMPTY, POINT, XAXE, YAXE, MID, UPARROW, RTARROW}; //our datatype to create 2D Graph area, by using array plainV[][]


class Function      //its store pointer to function char
{                   //nothing else
public:
    Function(char*);
    virtual ~Function() {}
    char* getfxC()const{return this->fx;}
private:
    char* fx;
};


class Graph
{
public:
    Graph(int=21,int=21);
    ~Graph();
    void print()const;
private:
    plainV *XY;  //pointers to axis arrays
    int rows;
    int columns;

};

class Calculator:public Function
{
    Calculator(Function&);
    virtual ~Calculator();
};