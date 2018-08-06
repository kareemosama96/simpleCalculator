#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t **Welcome To Calculator** \n" << endl;

    Start:

    double dNumber1 = 0;
    double dNumber2 = 0;
    int iChoice = 0;

    //Menu Choices
    cout << "1 -> + " << endl;
    cout << "2 -> - " << endl;
    cout << "3 -> * " << endl;
    cout << "4 -> / " << endl;
    cout << "\nEnter operation number:";
    cin >> iChoice;

    if (cin.fail())
    {
        cout << "\n\n >>>>Please enter correct value \n"<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto Start;
    }
    if (iChoice < 1 || iChoice > 4)
    {
        cout << "\n\n >>>>Please enter correct value \n"<<endl;
        goto Start;
    }


    NumberEntry:

    cout << "\nEnter first number:";
    cin >> dNumber1;
    if (cin.fail())
    {
        cout << "\n\n >>>>Please enter correct value \n"<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto NumberEntry;
    }
    cout << "Enter second number:";
    cin >> dNumber2;
    if (cin.fail())
    {
        cout << "\n\n>>>>Please enter correct value \n"<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
        goto NumberEntry;
    }
    if (iChoice==4 && dNumber2 == 0){
        cout << "\n\n>>>>ERROR DIVIDING BY ZERO\n"<<endl;
        goto Start;
    }

    switch(iChoice){
    case 1 :
        cout << "\nRESULT:\n";
        cout << dNumber1 << " + " << dNumber2 << " = " << dNumber1+dNumber2 <<endl;
        break;
    case 2 :
        cout << "\nRESULT:\n";
        cout << dNumber1 << " - " << dNumber2 << " = " << dNumber1-dNumber2 <<endl;
        break;
    case 3 :
        cout << "\nRESULT:\n";
        cout << dNumber1 << " * " << dNumber2 << " = " << dNumber1*dNumber2 <<endl;
        break;
    case 4 :
        cout << "\nRESULT:\n";
        cout << dNumber1 << " / " << dNumber2 << " = " << dNumber1/dNumber2 <<endl;
        break;
    default:
        break;
     }





    return 0;
}
