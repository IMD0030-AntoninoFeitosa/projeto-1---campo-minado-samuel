#include "settings.h"
#include <iostream>
//using namespace std;

//Shows help instructions to the player
void get_help(){
  std::cout << "Hello!! It's nice to have you here!" <<   std:: endl;
  std::cout << "This is a MINESWEEPER GAME!" << std::endl;
  std:: cout << "Welcome to this adcting world and its  beautiful interface!" << std:: endl;
  std::cout << "There are three main commands you can use to interact with this program: " << std::endl;
  std::cout << "1) '-h' OR '--help', which brings you to this set of instructions whenever you wish;" << std::endl;
  std::cout << std::endl;
  std::cout << "2) '-r' OR '--records', which shows you the 10 greatest scores ever obtained in this game and their respective owners;" << std::endl;
  std::cout << std::endl;
  std::cout << "3) '-d' OR '--difficulty', which MUST* be followed by some of the given difficulty options below:" << std::endl;
  std::cout << "  3.1) '-b' OR '--begginer';" << std::endl;
  std::cout << "  3.2) '-i' OR '--intermediary'; OR" << std::endl;
  std::cout << "  3.3) '-a' OR '--advanced'" << std::endl;
  std::cout << std::endl;
  std::cout << "   *Examples of valid commands:" << std::endl;
  std::cout << "   '-d -b' == ''-d --begginer' == '--difficulty -b' == '--diffculty --begginer'" << std::endl;
}

//Exhibits records of the best 10 scores
void show_records(){

}

//Defines the game difficulty level
void set_difficulty(){
  std::string difficulty;
  std::getline (std::cin, difficulty);

  if(difficulty=="-b" || difficulty=="--begginer"){
    std::cout << "BEGGINER" << std::endl;
  } else if(difficulty=="-i" || difficulty=="--intermediary"){
    std::cout << "INTERMEDIARY" << std::endl;
  } else if(difficulty=="-a" || difficulty=="--advanced"){
    std::cout << "ADVANCED" << std::endl;
  }
}



int main (){

  std::string command0;
  std::getline (std::cin, command0);

  if(command0=="-h" || command0=="--help"){
    get_help();
  } else if(command0=="-r" || command0=="--records"){
      show_records();
  } else if(command0=="-d" || command0=="--dificulty"){
      set_difficulty();
  } else if(command0=="-r" || command0=="--rev"){
    
  }
  
  std::cout << "Olá Mundo!";
  
  return 0;
}