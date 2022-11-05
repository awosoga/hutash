/**
* @author Dr. Anvik <john.anvik@uleth.ca>, LN Wilson <n.wilson@uleth.ca>
* @date 2018, 2020-03
*/
#include <unistd.h>
#include <iostream>
#include "UI.h"
#include "Game.h"
#include <string>
#include <cctype>

int main() {
  std::string response;
UI mainMenu;
usleep(500000);
std::cout << std::endl << std::endl << "\t\t\tWelcome to the \n\n\n";
//usleep(1000000);
std::cout <<
"  ██████╗            ██╗   ██╗           ███╗   ██╗            ██████╗     \n";
std::cout <<
"  ██╔══██╗           ██║   ██║           ████╗  ██║           ██╔════╝     \n";
std::cout <<
"  ██║  ██║           ██║   ██║           ██╔██╗ ██║           ██║          \n";
std::cout <<
"  ██║  ██║           ██║   ██║           ██║╚██╗██║           ██║          \n";
std::cout <<
"  ██████╔╝    ██╗    ╚██████╔╝    ██╗    ██║ ╚████║    ██╗    ╚██████╗    ██╗";
std::cout << std::endl <<
"  ╚═════╝     ╚═╝     ╚═════╝     ╚═╝    ╚═╝  ╚═══╝    ╚═╝     ╚═════╝    ╚═╝";
std::cout << std::endl;
//usleep(1000000);
std::cout << "\n\n\t\t\tSoftware Program." << std::endl << std::endl;
usleep(1500000);
std::cout << "This is the Main Menu\n";
  do {
    Game* g = mainMenu.createGame(std::cin);
    g->play(std::cin);
    delete g;
    std::cout << " This is the Main Menu" << std::endl << std::endl;
    std::cout << "Would you like to play another game? (y/n): ";
    std::cin >> response;
  } while (tolower(response[0]) != 'n');
  std::cout << std::endl << "Quitting program...." << std::endl;
  return 0;
}
