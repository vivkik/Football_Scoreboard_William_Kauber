//Scoreboard Class Definition 
#ifndef SCOREBOARD_H
#define SCOREBOARD_H
#include "team.h"

class Scoreboard 
{
  private:
    int Quarter;
    int Down; 
    int ToGO;
    double Clock;
    bool Pos; // Posession 
    Team Home; 
    Team Visitor; 

  public: 
    void setQuarter(int q); { Quarter = q; }
    void setDown(int d); { Down = d; }
    void setToGo(int tg); { ToGo = tg;}
    void setClock(double c); { Clock = c;}
    void setPos(bool p); { Pos = p; }
    void setHome(Team h); {Home = h;}
    void setVisitor(Team v); {v = visitor;}

    int getQuarter(); const {return Quarter;}
    int getDown(); const {return Down;}
    int getToGo(); const {return ToGo;}
    double getClock(); const {return Clock;}
    bool getPos(); const {return Pos;}
    Team getHome(); const {return Home;}
    Team getVisitor(); const {return Visitor}
    void showScoreboard();

};
#endif