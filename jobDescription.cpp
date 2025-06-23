#include <iostream>

using namespace std;

int main()
{
    // ()
    // !
    // &&
    // ||
    bool isUSCitizen = true;
    bool hasBachelorDegree = true;
    short yearsOFExperience = 1;
    bool isEligible = (isUSCitizen) && (hasBachelorDegree || yearsOFExperience >= 2);

    cout << boolalpha << isEligible;

    return 0;
}