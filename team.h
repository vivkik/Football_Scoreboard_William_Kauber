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
    void setName(string);
    void setCoach_Name(string);
    void setHome_City(string);
    void setHome_Status(bool);
    void setScore(int);
    void setTime_count(int);
    string getName();
    string getCoach_Name();
    string getHome_City();
    bool getHome_Status();
    int getScore();
    int getTimeout_Count; 
};

#endif 