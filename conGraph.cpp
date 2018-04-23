#include "conGraph.h"

/////// Function clas implementations
Function::Function(char *PTF)
:fx(PTF)    {}
/////// End of Function implementations

Graph::Graph(int COL, int ROW)
:rows(ROW), columns(COL)  //default values
{
      //axis lenght from -10 to 10
      //in future we made it scalable by user~~~~ NOW JUST REMOVE CONST before int rows&columns

    XY = new plainV[rows*columns]; // this is pseudo 2d array, contains numer of all blocks in
   // array, instead XY[x][y] we use XY[y*columns+x]

   //now we are creating axis
    for(int i=0;i<rows;i++)
        XY[i*columns+(columns/2)] = YAXE;         //Y axis
    for(int i=0;i<columns;i++)
        XY[(rows/2)*columns+i] = XAXE;             //X axis
    XY[(rows/2)*columns+(columns/2)] = MID; //center of coordinate system
    XY[0*columns+(columns/2)] = UPARROW;
    XY[(rows/2)*columns+columns] = RTARROW;
}

void Graph::print()const       //this will print our nice graph :3
{
    for(int i=0; i<(rows*columns); i++)
    {
        if(XY[i] == EMPTY)
            std::cout << " ";
        if(XY[i] == XAXE)
            std::cout << "-";
        if(XY[i] == YAXE)
            std::cout << "|";
        if(XY[i] == POINT)
            std::cout << ".";
        if(XY[i] == MID) 
            std::cout << "+";
        if(XY[i] == UPARROW)
            std::cout << "^";
        if(XY[i] == RTARROW)
            std::cout << ">";
        if(i%columns == 0)  //new line
            std::cout << std::endl;
    }
    std::cout << 
}

Graph::~Graph()
{
    delete [] XY;
}
