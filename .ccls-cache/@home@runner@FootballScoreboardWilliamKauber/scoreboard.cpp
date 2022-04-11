//scoreboard member functions 
#include "scoreboard.h"
using namespace std; 


void Scoreboard::setQuarter(int q);
{
  Quarter = q; 
}
    
void Scoreboard::setDown(int d);
{
  Down = d
}

void Scoreboard::setToGo(int tg);
{
  ToGo = tg; 
}

void Scoreboard::setClock(double c);
{
  Clock = c; 
}
   
void Scoreboard::setPos(bool p);
{
  Pos = p;
}
   
void setHome(Team);
    void setVisitor(Team);
    int getQuarter();
    int getDown();
    int getToGo();
    double getClock();
    bool getPos();
    Team getHome();
    Team getVisitor();
    void showScoreboard();