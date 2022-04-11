//Team Class Definition
#ifndef Team_H
#define Team_H
class Team 
{
  private:
    string Name;
    string Coach_Name;
    string Home_City;
    bool Home_Status; 
    int Score
    int Timeout_Count
  
  public:
    //Setter Member Functions 
    void setName(string n); 
      { Name = n;}
    
    void setCoach_Name(string cN); 
      { Coach_Name = cN;}
    
    void setHome_City(string hC); 
      { Home_City = hC;}
  
    void setHome_Status(bool hS); 
      { Home_Status = hS;}
    
    void setScore(int s); 
      { Score = s;}
    
    void setTimeout_count(int tC); 
      { Timeout_Count = tC;}
    
    // Getter Member Functions 
    string getName(); const
      {return Name;}

    string getCoach_Name(); const
      {return Coach_Name;}

    string getHome_City(); const
      {return Home_City;}

    bool getHome_Status(); const
      {return Home_Status;}

    int getScore(); const
      {return Score;}

    int getTimeout_Count; const
      {return Timeout_Count;}
};

#endif 