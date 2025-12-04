#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<time.h>
#include<vector>

void randLine(std::ifstream& file) {
    std::string lineOne;
    std::vector<std::string> lineTwo;

    int maxLineNum = 0;

    while (file >> lineOne) {
        maxLineNum++;
        lineTwo.push_back(lineOne);
    }//End while

    int randNum = rand() % maxLineNum;

    std::cout << lineTwo[randNum];
}//End void randLine

void actNode() {
    std::ifstream file("ActionAPI.txt");
    randLine(file);
}//End void actioNode

void nameNode() {
    std::ifstream file("NameAPI.txt");
    randLine(file);
}//End void nameNode

int main() {
    srand(time(NULL));

    //use these to make the text files once then you can delete the code and edit the text files to your will
    //std::ofstream OutFile("NameAPI.txt");
    //std::ofstream OutFile("ActionAPI.txt");

    //feel free to edit to make your own Madlib below use nameNode for Names and actNode for actions
    std::cout << "So today ";
    nameNode();

    std::cout << " did ";
    actNode();

    std::cout << " ";
    nameNode();

    std::cout << ". This was because ";
    nameNode();

    std::cout << " ";
    actNode();

    std::cout << " ";
    nameNode();

    std::cout << ".";
    return 0;
}//End int main
