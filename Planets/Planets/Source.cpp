//Ben Germany
//3/26/2020
//<Planet> -- detrmin the weight of each planet 
//CSIS 111-002



//Include statements
#include <iostream>
#include <string>

using namespace std;

//Global declarations: Constants and type definitions only -- no variables
enum planetType { Mercury, Venus, Earth, Moon, Mars, Jupiter, Saturn, Uranus, Neptune, Pluto};

//Function prototypes
bool ValidPlanet(string userInput, planetType& planet);
double CalculateWeight(planetType planet, double weight);

int main()
{
	//In cout statement below substitute your name and lab number
	cout << "Ben Germany -- Lab 7 -- Planets" << endl << endl;

	//Variable declarations
	double weight;
	string planetInput;
	planetType planet;
	bool valid = false;
	double finalVal;
	
	//Program logic

		//get user input
	cout << "what is your weight in lbs? " << endl << ">";
	cin >> weight;
		

while (valid == false) {
	cin.ignore();

	cout << "what planet are you calculating for? " << endl << ">";
	cin >> planetInput;

		//validate if planet is corectly used
		valid = ValidPlanet(planetInput , planet);
	}

	finalVal = CalculateWeight(planet, weight);

	cout << "your weight is " << finalVal;

	//Closing program statements
	return 0;
}

//Function Definitions

bool ValidPlanet(string userInput, planetType& planet) {
	
	if (userInput == "Mercury" || userInput == "MERCURY" || userInput == "mercury") {
		planet = Mars;
		return true;
	}else if(userInput == "Venus" || userInput == "VENUS" || userInput == "venus"){
		planet = Venus;
		return true;
	}else if (userInput == "Earth" || userInput == "EARTH" || userInput == "earth") {
		planet = Earth;
		return true;
	}else if (userInput == "Moon" || userInput == "MOON" || userInput == "moon") {
		planet = Moon;
		return true;
	}else if (userInput == "Mars" || userInput == "MARS" || userInput == "mars") {
		planet = Mars;
		return true;
	}else if (userInput == "Jupiter" || userInput == "JUPITER" || userInput == "jupiter") {
		planet = Jupiter;
		return true;
	}else if (userInput == "Saturn" || userInput == "SATURN" || userInput == "saturn") {
		planet = Saturn;
		return true;
	}else if (userInput == "Uranus" || userInput == "URANUS" || userInput == "uranus") {
		planet = Uranus;
		return true;
	}else if (userInput == "Neptune" || userInput == "NEPTUNE" || userInput == "neptune") {
		planet = Neptune;
		return true;
	}else if (userInput == "Pluto" || userInput == "PLUTO" || userInput == "pluto") {
		planet = Pluto;
		return true;
	}else {
		cout << "incorrect planet type please try again" << endl;
		return false;
	}
	
	
}

double CalculateWeight(planetType planet, double weight) {
	double finalWeight;

	switch (planet)
	{
	case Mercury:
		finalWeight = weight * 0.4155;
		break;
	case Venus:
		finalWeight = weight * 0.8975;
		break;
	case Earth:
		finalWeight = weight * 1.0;
		break;
	case Moon:
		finalWeight = weight * 0.166;
		break;
	case Mars:
		finalWeight = weight * 0.3507;
		break;
	case Jupiter:
		finalWeight = weight * 2.5374;
		break;
	case Saturn:
		finalWeight = weight * 1.0677;
		break;
	case Uranus:
		finalWeight = weight * 0.8947;
		break;
	case Neptune:
		finalWeight = weight * 1.1794;
		break;
	case Pluto:
		finalWeight = weight * 0.0899;
		break;
	default:
		break;
	}

	return finalWeight;
}
