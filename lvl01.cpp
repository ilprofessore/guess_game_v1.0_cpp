#include "upper_to_lower.hpp"
#include "lvl01.hpp"

std::string guess01;
std::vector <std::string> guess_database01;

void level_one()
{
    while (true)
    {
        system("cls");
        std::cout << "\n\tLEVEL 01\n\n\tsomething that changes with circumstances:\n\n";
        std::cout << "\tr\t-\t-\ta\t-\t-\tv\t-\t-\ty\t\n\n\t";
        std::getline(std::cin, guess01);
        guess01 = upper_to_lower(guess01);
        guess_database01.push_back(guess01);
        if (guess01 == "relativity")
        {
            std::cout << "\n\tyou win!\n\n";
            std::cout << "\n\tall of your previous guesses are displayed below: \n\n";
            for (int i = 0; i < guess_database01.size(); i++)
            {
                std::cout << "\t" << guess_database01[i]<< "\n";
            }
            
            break;
        }
        
    }
    std::cout << "\n\tyou finished the game in " << guess_database01.size() << " tries.";
    std::cout << "\n\n\tpress enter to continue;";
    getchar();
}