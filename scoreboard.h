//Scoreboard Class Definition 
#ifndef SCOREBOARD_H
#define SCOREBOARD_H

class Scoreboard 
{
  private:
    int Quarter;
    int Down; 
    int ToGO;
    bool Pos; // Posession 
    Team Home; 
    Team Visitor; 

  public: 
    void setQuarter(int);
    void setDown(int);
    void setToGo(int);
    void setPos(bool);
    void setHome(Team);
    void setVisitor(Team);
    int getQuarter();
    int getDown();
    int getToGo();
    bool getPos();
    Team getHome();
    Team getVisitor();

};
#endif