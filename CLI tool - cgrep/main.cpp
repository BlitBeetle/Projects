#include <iostream>
#include <fstream>
#include <string>

//The purpose of this project is to create source code for a CLI search tool that works similarly to grep.
//I've written notes throughout this program to explain the functions of each section.
//To use it, in the terminal write ./cgrep <search> <file> where <search> is the word you are searching for and <file> is the file you search throug.

int main(int argc, char* argv[])
{
    //If the correct number of arguments is not provided, display a usage message.
    if (argc != 3)
    {
        std::cout << "Usage: ./cgrep <search> <file>\n";
        return 1;
    }

    std::string searchTerm = argv[1]; //This is what the user is searching for.
    std::string filename = argv[2]; //This is the file that the user is searching in.

    std::ifstream file(filename); //This opens the file.

    if (!file)
    {
        std::cout << "Error: Could not open file: " << filename << '\n';
        return 1;
    }

    std::string line;

    while (std::getline(file, line)) //Reads the file one line at a time.
    {
        if (line.find(searchTerm) != std::string::npos)
        {
            std::cout << line <<'\n'; //if the term is found, print the line.
        }
    }

    return 0;
}