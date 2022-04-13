//Team Class Definition
#ifndef CLASSES_H
#define CLASSES_H
using namespace std; 

//*******************TEAM CLASS***********************

class Team 
{
  private:
    string Name;
    string Coach_Name;
    string Home_City;
    bool Home_Status; 
    int Score;
    int Timeout_Count;
  
  public:

    Team() // Default constructor 
      {
        Name = "Team 1";
        Coach_Name = "Coach";
        Home_City = "Townplace";
        Home_Status = true;
        Score = 0;
        Timeout_Count = 0;
      }

    //Setter Member Functions 
    void setName(string n) 
      { Name = n;}
    
    void setCoach_Name(string cN)
      { Coach_Name = cN;}
    
    void setHome_City(string hC)
      { Home_City = hC;}
  
    void setHome_Status(bool hS)
      { Home_Status = hS;}
    
    void setScore(int s)
      { Score = s;}
    
    void setTimeout_count(int tC) 
      { Timeout_Count = tC;}
    
    // Getter Member Functions 
    string getName() const
      {return Name;}

    string getCoach_Name() const
      {return Coach_Name;}

    string getHome_City() const
      {return Home_City;}

    bool getHome_Status() const
      {return Home_Status;}

    int getScore() const
      {return Score;}

    int getTimeout_Count() const
      {return Timeout_Count;}
};

//*****************SCOREBOARD CLASS************************

class Scoreboard 
{
  private:
    int Quarter;
    int Down; 
    int ToGo;
    double Clock;
    bool Pos; // Posession 
    Team Home; 
    Team Visitor; 

  public: 
    void setQuarter(int q) 
      { Quarter = q; }
    void setDown(int d) 
      { Down = d; }
    void setToGo(int tg) 
      { ToGo = tg;}
    void setClock(double c) 
      { Clock = c;}
    void setPos(bool p) 
      { Pos = p; }
    void setHome(Team h)
      {Home = h;}
    void setVisitor(Team v)
      {v = Visitor;}

    int getQuarter() const
      {return Quarter;}
    int getDown() const 
      {return Down;}
    int getToGo() const 
      {return ToGo;}
    double getClock() const
      {return Clock;}
    bool getPos() const 
      {return Pos;}
    Team getHome() 
      const {return Home;}
    Team getVisitor() 
      const {return Visitor;}
    void showScoreboard()
      {
        
      }

};
#endif 