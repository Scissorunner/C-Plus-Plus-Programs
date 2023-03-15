#include <iostream>
#include <ctime>


int main()
{
   char player;
   char computer;

   int player_wins = 0;
   int computer_wins = 0;

   // Intro
   std::cout << "------------------------------------\n";
   std::cout << "      Rock-Paper-Scissors Game!\n";
   std::cout << "Win 5 games and you're the Champion!\n";
   std::cout << "------------------------------------\n";

   do
   { // repeat all code until player or computer has 5 wins

   do
   {
   std::cout << "\nEnter one of the following:\n";
   std::cout << "===========================\n";
   std::cout << "'r' for rock\n";
   std::cout << "'p' for paper\n";
   std::cout << "'s' for scissors\n";
   std::cout << "'q' to quit\n";
   std::cout << "===========================\n";
   std::cout << "--> ";
   std::cin >> player;
   
   } while (player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S' && player != 'q');
   
   if (player == 'q')
   {
      break;
   }
   
   // print players choice
   std::cout << "Your choice: ";

   switch(player)
   {
   case 'r':
      std::cout << "Rock\n";
      break;
   case 'p':
      std::cout << "Paper\n";
      break;   
   case 's':
      std::cout << "Scissors\n";
      break;   
   default:
      break;
   }

   // get random number 1-3 from computer
   srand(time(0)); // enter 0 or NULL
   int num = rand() % 3 + 1;
   switch (num)
   {
   case 1:
      computer = 'r';
      break;
   case 2:
      computer = 'p';
      break;
   case 3:
      computer = 's';
      break;  
   default:
      break;
   }
   
   // print computers choice
   std::cout << "Computer's choice: ";

   switch(computer)
   {
   case 'r':
      std::cout << "Rock\n";
      break;
   case 'p':
      std::cout << "Paper\n";
      break;   
   case 's':
      std::cout << "Scissors\n";
      break;
   
   default:
      break;
   }

   // determines who wins, print results
   if (player == 'r' && computer == 'r')
   {
      std::cout << "\tIt's a tie\n";
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 'p' && computer == 'r')
   {
      std::cout << "\tPaper covers Rock, you win!\n";
      player_wins = player_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 's' && computer == 'r')
   {
      std::cout << "\tRock crushes Scissors, you lose!\n";
      computer_wins = computer_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
      
   else if (player == 'p' && computer == 'p')
   {
      std::cout << "\tIt's a tie\n";
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 's' && computer == 'p')
   {
      std::cout << "\tScissors cuts Paper, you win!\n";
      player_wins = player_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 'r' && computer == 'p')
   {
      std::cout << "\tPaper covers Rock, you lose!\n";
      computer_wins = computer_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }

   else if (player == 's' && computer == 's')
   {
      std::cout << "\tIt's a tie\n";
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 'r' && computer == 's')
   {
      std::cout << "\tRock crushes Scissors, you win!\n";
      player_wins = player_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }
   else if (player == 'p' && computer == 's')
   {
      std::cout << "\tScissors cuts Paper, you lose!\n";
      computer_wins = computer_wins + 1;
      std::cout << "\tPlayer wins: " << player_wins << " --> " << "Computer wins: " << computer_wins << '\n';
   }

   // count who wins 5 games
   if (computer_wins == 5)
   {
      std::cout << "\n===================================\n";
      std::cout << "Computer Wins! Stinking computer!\n";
      std::cout << "Your score: " << player_wins << " --> Computers score: " << computer_wins << '\n';
      std::cout << "===================================\n";
      break;
   }
   if (player_wins == 5)
   {
      std::cout << "\n===================================\n";
      std::cout << "You're the Champion!!!\n";
      std::cout << "Your score: " << player_wins << " --> Computers score: " << computer_wins << '\n';
      std::cout << "===================================\n";
      break;
   }
   	
   } while (player != 'q');

   std::cout << "\t\n***Thanks for playing!***\n\n";

   return 0;
}