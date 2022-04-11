//Scoreboard Class Definition 
#ifndef SCOREBOARD_H
#define SCOREBOARD_H

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

};
#endif