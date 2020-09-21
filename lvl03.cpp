#include "upper_to_lower.hpp"
#include "lvl03.hpp"

std::string guess03;
std::vector <std::string> guess_database03;

void level_three()
{
    while (true)
    {
        system("cls");
        std::cout << "\n\tLEVEL 03\n\n\tsomething that rhymes with friday but is shocking:\n\n";
        std::cout << "\t-\t-\tr\t-\t-\ta\t-\t\n\n\t";
        std::getline(std::cin, guess03);
        guess03 = upper_to_lower(guess03);
        guess_database03.push_back(guess03);
        if (guess03 == "faraday")
        {
            std::cout << "\n\tyou win!\n\n";
            std::cout << "\n\tall of your previous guesses are displayed below: \n\n";
            for (int i = 0; i < guess_database03.size(); i++)
            {
                std::cout << "\t" << guess_database03[i]<< "\n";
            }
            
            break;
        }
        
    }
    std::cout << "\n\tyou finished the game in " << guess_database03.size() << " tries.";
    std::cout << "\n\n\tpress enter to continue;";
    getchar();
}