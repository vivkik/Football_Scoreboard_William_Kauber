//Team Member Functions

void Team::setName(string n);
{
  Name = n;
}
void Team::setCoach_Name(string cn)
{
  Coach_Name = cn;
}
void Team::setHome_City(string hc)
{
  Home_City = hc;
}
void Team::setHome_Status(bool hs)
{
  Home_Status = hs; 
}
void Team::setScore(int s)
{
  Score = s;
}
void Team::setTimeout_count(int tc)
{
  Timeout_count = tc;
}
string Team::getName()
{
  return Name; 
}
string Team::getCoach_Name()
{
  return Coach_Name;
}
string Team::getHome_City()
{
  return Home_City;
}
bool Team::getHome_Status()
{
  return Home_Status; 
}
int Team::getScore()
{
  return Score; 
}
int Team::getTimeout_Count;
{
  return Timeout_Count; 
}