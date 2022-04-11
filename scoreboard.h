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
    void setQuarter(int);
    void setDown(int);
    void setToGo(int);
    void setClock(double);
    void setPos(bool);
    void setHome(Team);
    void setVisitor(Team);
    int getQuarter();
    int getDown();
    int getToGo();
    double getClock();
    bool getPos();
    Team getHome();
    Team getVisitor();

};
#endif