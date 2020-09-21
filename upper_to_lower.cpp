#include "upper_to_lower.hpp"

std::string upper_to_lower(std::string input_string)
{
    std::string output_string;
    for (int i = 0; i < input_string.size(); i++)
    {
        output_string += tolower(input_string[i]);
    }
    
    return output_string;
}