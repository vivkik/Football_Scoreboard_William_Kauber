#include <iostream>
#include"class.h"
#include"input_validation_extended.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;


int main()
{
  Scoreboard s;
  Team tOne;
  Team tTwo; 
  string newName = ""; 
  string userChoice = ""; 
  string newCoachName = ""; 
  string newCity = "";
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  int newQuarter = 0;
  int newDown = 0;
  int newToGo = 0; 
  double newClock = 0.0;

  tOne.setHome_Status(true); //tOne is the Home Team now   

  //add some initial data to s
 
  
 
  
  do 
  {
      system("clear"); //clear the screen of previous content 
      s.showScoreboard(); //show the current scoreboard data
      //menu choices 
      cout << "\nA = Update Home Team" << endl; 
      cout << "B = Update Home Team Score" << endl; 
      cout << "C = Update Home Coach" << endl; 
      cout << "D = Update Home Status" << endl; 
      cout<< "E = Update Visiting Team" << endl;
      cout<<"F = Update Visiting Team Score" << endl;
      cout<<"G = Update Visiting Team Coach" << endl;
      cout<<"H = Update Quarter" << endl;
      cout<<"I = Update Down Count" << endl;
      cout<<"J = Update To Go Count" << endl;
      cout<<"K = Update Clock" << endl; 

    cout << "X = Exit" << endl;      cout << ">"; 
    
      cin >> userChoice; 

      if(userChoice == "A" || userChoice == "a")//Update Home Team Score 
      {
        cout << "****Update Home Team module*** " << endl; 
        cout << "\nPlease enter a new name for the home team: ";
        newName = validateString(newName);
        tOne.setName(newName); 
        cout << "\nPlease enter the Team's City: ";
        newCity =validateString(newCity);
        tOne.setHome_City(newCity);
      }
      else if(userChoice == "B" || userChoice == "b")
      {
        cout << "\nUpdate Home Score Module****" << endl; 
        cout << "\nPlease enter a new score for the home team: "; 
        newScore = validateInt(newScore);
        tOne.setScore(newScore);         
      }

      else if(userChoice == "C" || userChoice == "c")
      {
          cout << "\nUpdate Home Coach Module****" << endl; 
          cout << "\nPlease enter the home coach Name: "; 
          newCoachName = validateString(newCoachName);
          tOne.setCoach_Name(newCoachName); 
      }
      
      else if(userChoice == "D" || userChoice == "d")
      {
        cout << "\nUpdate Home Status Module****" << endl; 
        cout << "\nWho is the home team: 1 = T1, 2=T2: "; 
        homeTeamQuestion = validateInt(homeTeamQuestion); 
       // cin >> homeTeamQuestion; 
          if(homeTeamQuestion == 1)
          {
            tOne.setHome_Status(true); 
            tTwo.setHome_Status(false); 
          }
          else if(homeTeamQuestion == 2)
          {
            tOne.setHome_Status(false); 
            tTwo.setHome_Status(true);
          }
          else
          {
            cout << "\nInvalid Input!" << endl;
            sleep(2); 
          }
      }
      else if(userChoice == "E" || userChoice == "e")
      {
      
        cout << "****Update Visitor Team Name module*** " << endl; 
        cout << "\nPlease enter a new name for the visitor team: ";
        newName = validateString(newName);
        tTwo.setName(newName); 
        cout << "\nPlease enter the Team's City";
        newCity = validateString(newCity);
        tTwo.setHome_City(newCity);
      }
      else if(userChoice == "F" || userChoice == "f")
      {
        cout << "\nUpdate Visitor Score Module****" << endl; 
        cout << "\nPlease enter a new score for the visitor team: "; 
        newScore = validateInt(newScore);
        tTwo.setScore(newScore);         
      }
      else if(userChoice == "G" || userChoice == "g")
      {
        cout << "\nUpdate Visitor Coach Module****" << endl; 
        cout << "\nPlease enter the visitor coach Name: "; 
        newCoachName = validateString(newCoachName);
        tTwo.setCoach_Name(newCoachName); 
      }
      else if(userChoice == "H" || userChoice == "h")
      {
        cout << "\n****Update Quarter Module****" << endl;
        cout << "\n Please enter the Quarter: ";
        newQuarter = validateInt(newQuarter);
          if (newQuarter >0 && newQuarter < 5)
          {
            s.setQuarter(newQuarter);
          }
          else
          {
            cout << "Invalid Input!" <<endl;
          }
      }
      else if(userChoice =="I" || userChoice == "i")
      {
        cout << "\n****Update Down Count Module****"<< endl;
        cout << "\n Please Enter the Down Count: ";
        newDown = validateInt(newDown);
        s.setDown(newDown);
      }
      else if (userChoice == "J" || userChoice == "j")
      {
        cout << "\n****Update To Go Count Module****"<< endl;
        cout << "\n Please enter the To Go count: ";
        newToGo = validateInt(newToGo);
        s.setToGo(newToGo);
      }
      else if (userChoice == "K" || userChoice == "k")
      {
        cout << "\n****Update Clock Module****"<<endl;
        cout << "Please enter the new time: ";
        newClock = validateDouble(newClock);
        s.setClock(newClock);
      }
      else if(userChoice == "X" || userChoice == "x")
      {
        cout << "Exit chosen." << endl; 
      }
      else //invalid input: default clause
      {
        cout << "\nInvalid input." << endl; 
        sleep(2); //wait two seconds, go to the next process 
      }

      s.setH(tOne); //refresh the data in s to the new updates...
      s.setV(tTwo); //refresh the data

  
  }while(userChoice != "X" && userChoice != "x");


  
  return 0;


}

