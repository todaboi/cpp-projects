#include <iostream>
int main()
{
    int gryffindor, hufflepuff, ravenclaw, slytherin = 0;
    int answer1, answer2, answer3, answer4;
    std::cout << "The Sorting Hat Quiz!\n";
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
    std::cout << "  1) The Good\n  2) The Great\n  3) The Wise\n  4) The Bold\n";
    std::cin >> answer1;
    if (answer1 == 1)
    {
        hufflepuff += 1;
    }
    else if (answer1 == 2)
    {
        slytherin += 1;
    }
    else if (answer1 == 3)
    {
        ravenclaw += 1;
    }
    else if (answer1 == 4)
    {
        gryffindor += 1;
    }
    else
    {
        std::cout << "Invalid input\n";
    }

    std::cout << "Q2) Dawn or Dusk?\n";
    std::cout << "  1) Dawn\n  2) Dusk\n";
    std::cin >> answer2;
    if (answer2 == 1)
    {
        gryffindor += 1;
        ravenclaw += 1;
    }
    else if (answer2 == 2)
    {
        hufflepuff += 1;
        slytherin += 1;
    }
    else
    {
        std::cout << "Invalid input\n";
    }

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n   1) The violin\n   2) The trumpet\n   3) The piano\n   4) The drum\n";
    std::cin>>answer3;
    if (answer3 == 1)
    {
        slytherin += 1;
    }
    else if (answer3 == 2)
    {
        hufflepuff += 1;
    }
    else if (answer3 == 3)
    {
        ravenclaw += 1;
    }
    else if (answer3 == 4)
    {
        gryffindor += 1;
    }
    else
    {
        std::cout << "Invalid input\n";
    }

    std::cout << "Q4) Which road tempts you most?\n   1) The wide, sunny grassy lane\n   2) The narrow, dark, lantern-lit alley\n   3) The twisting, leaf-strewn path through woods\n   4) The cobbled street lined (ancient buildings)\n";
    std::cin>>answer4;
    if (answer4 == 1)
    {
        hufflepuff += 1;
    }
    else if (answer4 == 2)
    {
        slytherin += 1;
    }
    else if (answer4 == 3)
    {
        gryffindor += 1;
    }
    else if (answer4 == 4)
    {
        ravenclaw += 1;
    }
    else
    {
        std::cout << "Invalid input\n";
    }
    int max;
    std::string house;
    if (gryffindor > max)
    {
        max = gryffindor;
        house = "Gryffindor";
    }
    else if (ravenclaw > max)
    {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    else if (hufflepuff > max)
    {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    else
    {
        house = "Slytherin";
    }
    std::cout << house << "!..";
}
