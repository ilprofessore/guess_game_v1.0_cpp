#include "upper_to_lower.hpp"
#include "lvl02.hpp"

std::string guess02;
std::vector <std::string> guess_database02;

void level_two()
{
    while (true)
    {
        system("cls");
        std::cout << "\n\tLEVEL 02\n\n\tthe busiest city of the world:\n\n";
        std::cout << "\t-\tl\t-\t-\tt\t-\t-\tc\t-\t-\ty\t\n\n\t";
        std::getline(std::cin, guess02);
        guess02 = upper_to_lower(guess02);
        guess_database02.push_back(guess02);
        if (guess02 == "electricity")
        {
            std::cout << "\n\tyou win!\n\n";
            std::cout << "\n\tall of your previous guesses are displayed below: \n\n";
            for (int i = 0; i < guess_database02.size(); i++)
            {
                std::cout << "\t" << guess_database02[i]<< "\n";
            }
            
            break;
        }
        
    }
    std::cout << "\n\tyou finished the game in " << guess_database02.size() << " tries.";
    std::cout << "\n\n\tpress enter to continue;";
    getchar();
}