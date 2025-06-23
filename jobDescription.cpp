#include <iostream>

using namespace std;

int main()
{
    // ()
    // !
    // &&
    // ||
    bool isUSCitizen = false;
    bool hasBachelorDegree = true;
    short yearsOFExperience = 3;
    bool isEligible = (isUSCitizen) && (hasBachelorDegree || yearsOFExperience >= 2);

    cout << boolalpha << isEligible;

    return 0;
}