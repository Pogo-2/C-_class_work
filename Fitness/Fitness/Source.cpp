#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

const double SENIOR_CITIZEN_DISCOUNT = 0.30;
const double TWELVE_OR_MORE_MONTHS_MEMBERSHIP_DISOUNT = 0.15;
const double SIX_OR_MORE_PERSONAL_TRAINING_SESSIONS_DISCOUNT = 0.20;

void setPrices(double& regMemPricePerMth, double& personalTrSesCost);

void getInfo(bool& senCitizen, bool& bSixOrMoreSess, bool& paidTwMnth,
    int& nOfMonths, int& nOfPersonalTrSess);
double membershipCost(double regMemPricePerMth, int nOfMonths,
    double personalTrSesCost, int nOfPersonalTrSess,
    bool senCitizen, bool bSixOrMoreSess, bool paidTwMnth);
void displayCenterInfo();


int main()
{
    bool seniorCitizen;
    bool boughtSixOrMoreSessions = false;
    bool paidTwelveOrMoreMonths = false;

    int numberOfMembershipMonths;
    int numberOfPersonalTrainingSessions;
    double regularMembershipChargesPerMonth;
    double costOfOnePersonalTrainingSession;

    //double memberCost;

    displayCenterInfo();
    setPrices(regularMembershipChargesPerMonth, costOfOnePersonalTrainingSession);
    getInfo(seniorCitizen,boughtSixOrMoreSessions,paidTwelveOrMoreMonths,numberOfMembershipMonths,numberOfPersonalTrainingSessions);

    if (numberOfMembershipMonths > 12) {
        paidTwelveOrMoreMonths = true;
    }

    if (numberOfPersonalTrainingSessions > 6) {
        boughtSixOrMoreSessions = true;
    }

    double totalPrice = membershipCost(regularMembershipChargesPerMonth,numberOfMembershipMonths,costOfOnePersonalTrainingSession,numberOfPersonalTrainingSessions,seniorCitizen,boughtSixOrMoreSessions,paidTwelveOrMoreMonths);
    cout << "The membership cost = $" << fixed << setprecision(2) << totalPrice << endl;
}

void setPrices(double& regMemPricePerMth, double& personalTrSesCost) {
    cout << "Enter the cost of a regular membership per month: ";
    cin >> regMemPricePerMth;
    cout << "Enter the cost of one personal training session: ";
    cin >> personalTrSesCost;
}

void getInfo(bool& senCitizen, bool& bSixOrMoreSess, bool& paidTwMnth, int& nOfMonths, int& nOfPersonalTrSess) {
    string srCheck;
    bool compCheck = false;

    cout << "Are you a senior citizen(Y/N): ";
    cin >> srCheck;

    if (srCheck == "y" || srCheck == "Y") {
        compCheck = true;
        senCitizen = true;
    }

    if (srCheck == "n" || srCheck == "N") {
        compCheck = true;
        senCitizen = false;
    }

    if (compCheck == false){
        exit(0);
    }

    cout << "Enter the number of personal training sessions bought: ";
    cin >> nOfPersonalTrSess;

    cout << "Enter the number of months you are paying for: ";
    cin >> nOfMonths;
}

double membershipCost(double regMemPricePerMth, int nOfMonths,
    double personalTrSesCost, int nOfPersonalTrSess,
    bool senCitizen, bool bSixOrMoreSess, bool paidTwMnth) {
    
    double reg_price = (regMemPricePerMth * nOfMonths);
    double train_price = (nOfPersonalTrSess * personalTrSesCost);

    if (bSixOrMoreSess == true) {
        train_price = train_price* SIX_OR_MORE_PERSONAL_TRAINING_SESSIONS_DISCOUNT;
    }
    
    if (paidTwMnth == true) {
        reg_price = reg_price * TWELVE_OR_MORE_MONTHS_MEMBERSHIP_DISOUNT;
    }

    double total = train_price + reg_price;

    if (senCitizen == true) {
        total = total * SENIOR_CITIZEN_DISCOUNT;
    }
    
    return(total);
}

void displayCenterInfo() {
    string x;

    x = "Welcome to Stay Healty and Fit center.\nThis program determines the cost of a new membership.\nIf you are a senior citizen, then the discount is 30 % of of the regular membership price.\nIf you buy membership for twelve monthsand pay today, the discount is 15 % .\nIf you buy and pay for 6 or more personal training session today, the discount on each session is 20 % .\n\n\n";

    cout << x;
}