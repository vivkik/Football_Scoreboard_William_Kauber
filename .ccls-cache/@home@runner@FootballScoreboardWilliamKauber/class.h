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
        
        cout << "Home Team: " << H.getHome_City() <<" " <<     H.getName() << "\tCoach: " << H.getCoach_Name()<<endl;
        cout << "Visiting Team: " << V.getHome_City() << " "<< V.getName() << "\tCoach: " << V.getCoach_Name()<< endl;
        cout << "\n---------------------------------------------------"<<endl;
        cout << "\t\t\t\t\t" <<getClockMin() <<" : "<<getClockSec()<<endl;
        cout << "HOME: " <<H.getScore()<< "\t\t\t\t\t\t\t\t\tVISITOR: " <<V.getScore()<<endl;
        cout <<"\t\t\t\t\t QTR: " <<getQuarter() <<endl;
        cout <<"\t\t" <<getDown() <<" DOWN\t\t\t\t\t"<< getToGo()<< " TOGO\n" << endl; 
        if(getPos() == true)
          cout << "\t\t\t * HOME HAS POSESSION *\n";
        else 
          cout << "\t\t\t * VISITOR HAS POSESSION *\n";
        cout << "---------------------------------------------------"<<endl;
      }

};
#endif 