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
    double Clock;
    bool Pos; // Posession 
    Team H; 
    Team V; 

  public: 
    Scoreboard()
      {
        Quarter = 0;
        Down = 0;
        ToGo = 0;
        Clock =0.0;
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
    void setClock(double c) 
      { Clock = c;}
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
    double getClock() const
      {return Clock;}
    bool getPos() const 
      {return Pos;}
    Team getH() 
      const {return H;}
    Team getV() 
      const {return V;}
    void showScoreboard()
      {
        
        cout << "Home Team: " << H.getHome_City() <<" " <<     H.getName() << " Coach: " << H.getCoach_Name()<<endl;
        cout << "Visiting Team: " << V.getHome_City() << " "<< V.getName() << " Coach: " << V.getCoach_Name()<< endl;
        cout << "\n--------------------------------------------"<<endl;
        cout << "|" << endl; cout << "|" << endl; cout << "|" << endl; 
        
      }

};
#endif 