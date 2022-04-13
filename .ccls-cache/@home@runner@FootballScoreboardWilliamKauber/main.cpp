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
  int homeTeamQuestion = 0; 
  int newScore = 0; 
  
  do 
  {
      system("clear"); //clear the screen of previous content 
      s.showScoreboard(); //show the current scoreboard data
      //menu choices 
      cout << "A = Update Home Team Status" << endl; 
      cout << "B = Update Home Team Score" << endl; 
      cout << "C = Update Home Name" << endl; 
      cout << "D = Update Home Coach" << endl; 
      cout<< "E = Update Visiting Team Score" << endl;
      cout<<"F = Update Visiting Team Name" << endl;
      cout<<"G = Update Visiting Team Coach" << endl;
      cout<<"H = Update Quarter" << endl;
      cout<<"I = Update Down Count" << endl;
      cout<<"J = Update To Go Count" << endl;
      cout<<"K = Update Clock" << endl; 

    cout << "X = Exit" << endl;      cout << ">"; 
    
      cin >> userChoice; 

      if(userChoice == "A" || userChoice == "a")
      {
        cout << "****Update Home Team Name module*** " << endl; 
        cout << "\nPlease enter a new name for the home team: ";
        cin >> newName; 
        tOne.setName(newName); 
      }
      else if(userChoice == "B" || userChoice == "b")
      {
        cout << "\nUpdate Home Score Module****" << endl; 
        cout << "\nPlease enter a new score for the home team: "; 
        cin >> newScore; 
        tOne.setScore(newScore);  //set the new score for tOne        
      }

      else if(userChoice == "C" || userChoice == "c")
      {
          cout << "\nUpdate Home Coach Module****" << endl; 
          cout << "\nPlease enter the home coach Name: "; 
          cin >> newCoachName; 
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
        cin >> newName; 
       
        tTwo.setName(newName); //set tOne's data to the new desired name
      }
      else if(userChoice == "F" || userChoice == "f")
      {
        cout << "\nUpdate Visitor Score Module****" << endl; 
        cout << "\nPlease enter a new score for the visitor team: "; 
        cin >> newScore; 
        tTwo.setScore(newScore);  //set the new score for tTwo        
      }
      else if(userChoice == "G" || userChoice == "g")
      {
          cout << "\nUpdate Visitor Coach Module****" << endl; 
          cout << "\nPlease enter the visitor coach Name: "; 
          cin >> newCoachName; 
          tTwo.setCoach_Name(newCoachName); 
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

      s.setHome(tOne); //refresh the data in s to the new updates...
      s.setVisitor(tTwo); //refresh the data

  
  }while(userChoice != "X" && userChoice != "x");
  
  return 0;

}

