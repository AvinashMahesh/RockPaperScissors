#include <iostream>
#include <time.h>
#include <iomanip>
 
using namespace std;
 
int main()
{
 int userscore = 0, cpu_score = 0, cpu_choice1;
 char userinput;
 string userchoice, cpu_choice2;
  while(userscore < 3 && cpu_score < 3)
 {
   cout<<"Choose one: 'r' is Rock, 'p' is Paper, and 's' is Scissors"<<endl;
   cin>>userinput;
  
   switch(userinput)
   {
     case 'r' :
     case 'R' : userchoice = "Rock";
     break;
    
     case 'p' :
     case 'P' : userchoice = "Paper";
     break;
    
     case 's' :
     case 'S' : userchoice = "Scissors";
     break;
    
     default : cout<<"Invalid"<<endl;
     break;
   }
  
   srand(time(NULL));
  
   cpu_choice1 = rand()%3+1;
  
   switch(cpu_choice1)
   {
     case 1 : cpu_choice2 = "Rock";
     break;
    
     case 2 : cpu_choice2 = "Paper";
     break;
    
     case 3 : cpu_choice2 = "Scissors";
     break;
    
     default : cout<<cpu_choice1<<cpu_choice2<<endl;
     break;
   }
  
   cout<<""<<endl;
  
   cout<<setw(40)<<"Score (You vs Computer): "<<setw(2)<<userscore<<setw(3)<<"to"<<setw(2)<<cpu_score<<endl;
 
  
   cout<<""<<endl;
  
   cout<<"You: "<<userchoice<<endl;
   cout<<"Comp: "<<cpu_choice2<<endl;
  
   cout<<""<<endl;
  
   if(userchoice == "Rock" && cpu_choice2 == "Scissors" || userchoice == "Paper" && cpu_choice2 == "Rock" || userchoice == "Scissors" && cpu_choice2 == "Rock")
   {
     cout<<"+1 to You"<<endl;
    
     cout<<""<<endl;
    
     userscore++;
    
   }
   else
   {
     if(userchoice == "Rock" && cpu_choice2 == "Rock" || userchoice == "Paper" && cpu_choice2 == "Paper" || userchoice == "Scissors" && cpu_choice2 == "Scissors")
     {
       cout<<"Its a tie!"<<endl;
      
       cout<<""<<endl;
     }
     else
     {
       cout<<"+1 to the Computer"<<endl;
      
       cout<<""<<endl;
      
       cpu_score++;
     }
   }
  
   cout<<"------------------------------------------------------------------"<<endl;
  
 }
 
 cout<<setw(40)<<"Final Score: "<<setw(2)<<userscore<<setw(3)<<"to"<<setw(2)<<cpu_score<<endl;
  cout<<""<<endl;
  if(userscore == 3)
 {
   cout<<setw(40)<<"You WIN" <<endl;
 }
 else
 {
   cout<<setw(40)<<"You LOSE"<<endl;
 }
  return 0;
}
