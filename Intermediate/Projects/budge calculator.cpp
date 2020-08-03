#include <iostream>
using namespace std;
 
double income()
{
    double studentLoan, grantsETC, parentsGuardians, job, savings, anyOther,totalIncome;
 
    cout << "INCOME Section" << endl;
 
    cout << "Please enter your student loan amount, if any." << endl;
    cin >> studentLoan;
 
    cout << "Please enter the amount you expect to receive in grants, bursaries or sponsorship" << endl;
    cin >> grantsETC;
 
    cout << "Please enter the amount, if any you expect to receive for parents/guardians" << endl;
    cin >> parentsGuardians;
 
    cout << "Please enter the of income you receive from your job, if you have one" << endl;
    cin >> job;
 
    cout << "Please enter the amount of savings you wish to spend, if any" << endl;
    cin >> savings;
 
    cout << "Please enter any other income you may have" << endl;
    cin >> anyOther;
 
    //totalling up the income
    totalIncome = studentLoan+grantsETC+parentsGuardians+job+savings+anyOther;
 
    return totalIncome;
}//income()
 
double essentialOutgoing()
{
    double totalEssentialOutgoing, rent, travel, insurance, carBills, utilityBills, mobilePhone, tvLicence, food;
 
    cout << "ESSENTIAL COSTS" << endl;
 
    cout << "Please enter the amount of rent you will pay per week" << endl;
    cin >> rent;
 
    cout << "Please enter the amount of travel costs per week" << endl;
    cin >> travel;
 
    cout << "If you have insurance, please enter the total cost per week" << endl;
    cin >> insurance;
 
    cout << "If a car, please enter the total expected cost for fuel, repairs etc, per week" << endl;
    cin >> carBills;
 
    cout << "Please enter the amount you expect to spend on utility bills per week. This would include " "gas, electric, oil, etc. Per week" << endl;
    cin >> utilityBills;
 
    cout << "Please enter the amount you expect to spend on you mobile phone per week" << endl;
    cin >> mobilePhone;
 
    cout << "If you have a TV licence, please enter the total amount per week" << endl;
    cin >> tvLicence;
 
    cout << "Please enter how much you expect to spend on groceries per week" << endl;
    cin >> food;
 
    //calculation
    totalEssentialOutgoing = rent + travel +  food +
    utilityBills + mobilePhone + tvLicence + insurance
    + carBills;
 
    return totalEssentialOutgoing;
 
}//essentialOutgoing()
 
double otherCosts()
{
    double totalOtherCosts, courseMaterial, clothing, socialActivities;
    cout << "OTHER COSTS" << endl;
 
    cout << "Please enter how much your would like to spend on course material per week" << endl;
    cin >> courseMaterial;
 
    cout << "Please enter how much you would like to spend on clothing per week" << endl;
    cin >> clothing;
 
    cout << "Please enter how much you would like to spend on social activities per week" << endl;
    cin >> socialActivities;
 
    totalOtherCosts = socialActivities + courseMaterial + clothing;
 
    return totalOtherCosts;
}//otherCosts()
 
int main()
{
    int runAgain;
    double theTotalIncome=0, theTotalEssentialOutgoing, theTotalOtherCosts, budget1, budget2, totalEachWeek, weeksInAttendance;
    cout << "Welcome to the Student budget calculator!" << endl;
    cout << "If any of the questions you do not receive anything, please enter 0" << endl;
 
    do
    {
 
        cout << "Please enter the amount of weeks you expect to attend university." << endl;
        cout << "For example, the average university the autumn and spring semesters run for 36 weeks including holidays" << endl;
 
        cin >> weeksInAttendance;
 
        //calling income method
        theTotalIncome = income();
 
        cout << "Your income for the year is £" << theTotalIncome << endl;
 
        totalEachWeek = theTotalIncome/weeksInAttendance;
 
        cout << "You have £"  << totalEachWeek << " to spend" << endl;
 
        //calling ess outgoing method
        theTotalEssentialOutgoing = essentialOutgoing();
 
        //calculation
        budget1 = totalEachWeek-theTotalEssentialOutgoing;
 
        cout << "You have spent £" << theTotalEssentialOutgoing << endl;
        cout << "The amount left after the essentials £"  << budget1 << endl;
 
        //calling other costs method
        theTotalOtherCosts = otherCosts();
 
        budget2 = budget1 - theTotalOtherCosts;
 
        cout << "You have spent £" << theTotalOtherCosts << " for other costs" << endl;
        cout << "You have £" << budget2 << " at the end of the week" << endl;
 
        cout << "Would you like to run the program again" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> runAgain;
    }//do
 
    while (runAgain ==1);
 
    return 0;
}//main

