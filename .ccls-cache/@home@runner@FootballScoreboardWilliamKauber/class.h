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
    Team()
    {
      Name = "";
      Coach_Name ="";
      Home_City = "";
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
    
    void setTimeout_Count(int tC) 
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
    int ClockSec;
    int ClockMin;
    bool Pos; // Posession 
    Team H; 
    Team V; 

  public: 
    Scoreboard()
      {
        Quarter = 1;
        Down = 0;
        ToGo = 0;
        ClockMin = 11;
        ClockSec = 11;
        Pos = true; 
        H.setName("Cowboys");
        H.setHome_City("Dallas");
        H.setScore(0);
        H.setCoach_Name("Mike McCarthy");
        H.setHome_Status(true);
        V.setName("Rams");
        V.setHome_City("LA");
        V.setScore(0);
        V.setCoach_Name("Sean McVay");
      }




    void setQuarter(int q) 
      { Quarter = q; }
    void setDown(int d) 
      { Down = d; }
    void setToGo(int tg) 
      { ToGo = tg;}
    void setClockMin(int cm) 
      { ClockMin = cm;}
    void setClockSec(int cs)
{      ClockSec = cs;}
    void setPos(bool p) 
      { Pos = p; }
    void setH(Team h)
      {H = h;}
    void setV(Team v)
      {V = v;}

    int getQuarter() const
      {return Quarter;}
    int getDown() const 
      {return Down;}
    int getToGo() const 
      {return ToGo;}
    int getClockMin() const
      {return ClockMin;}
    int getClockSec() const  
      {return ClockSec;}
    bool getPos() const 
      {return Pos;}
    Team getH() 
      const {return H;}
    Team getV() 
      const {return V;}
    void showScoreboard()
      {
        
        cout << "\x1b[31;1mHome Team:\x1b[0m " << H.getHome_City() <<" " <<     H.getName() << "\t \x1b[31;1mCoach:\x1b[0m " << H.getCoach_Name()<<endl;
        cout << "\x1b[34;1mVisiting Team:\x1b[0m " << V.getHome_City() << " "<< V.getName() << "\t \x1b[34;1mCoach:\x1b[0m " << V.getCoach_Name()<< endl;
        cout << "\n\x1b[42;1m---------------------------------------------------\x1b[0m\n"<<endl;
        cout << "\t\t\t\t\t  " <<getClockMin() <<" : "<<getClockSec()<<endl;
        cout << "HOME: " <<H.getScore()<< "\t\t\t\t\t\t\t\t   VISITOR: " <<V.getScore()<<endl;
        cout <<"\t\t\t\t\t   QTR: " <<getQuarter() <<endl;
        cout <<"\t\t  " <<getDown() <<" DOWN\t\t\t\t  "<< getToGo()<< " TOGO\n" << endl; 
        if(getPos() == true)
          cout << "\t\t\t   \x1b[31;1m* HOME HAS POSESSION *\x1b[0m\n\n";
        else 
          cout << "\t\t\t \x1b[34;1m* VISITOR HAS POSESSION *\x1b[0m\n\n";
        cout << "\x1b[42;1m---------------------------------------------------\x1b[0m"<<endl;
      }

};
#endif 