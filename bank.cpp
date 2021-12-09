// bank.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int oil = 25000;
int beans = 29000;
int rice = 30000;
int Television = 50000;
int washing_machine = 120000;
int freezer = 160000;
int ladies_machine = 350000;
int bajaj = 490000;





int main()
{

    int amount;
    int time;
    cout << "\t\t=====================*****=====================\n";
    cout <<  "\t\t\tWelcom to Benny Daily Savings!!!"<<endl;
    cout << "\t\t=====================*****=====================\n";


    cout << "\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    cout << "\t\t\tTHE ITEMS AVAILABLE FOR GRAB ARE;" << endl;
    cout << "\t\t::::::::::::::::::::::::::::::::::::::::::::::::::\n";



    cout << "1. Rice \n" << endl;
    cout << "2. Oil \n" << endl;
    cout << "3. Beans \n" << endl;
    cout << "4. Ladis_machine \n" << endl;
    cout << "5. Bajaj \n" << endl;
    cout << "6. Freezer \n" << endl;
    cout << "7. Television \n" << endl;
    cout << "8. Washing_machine\n" << endl;
    cout << "\n" << endl;

    cout << "Enter your daily contribution\n" << endl;
    cin >> amount;

    cout << "Enter the number of days you contributed\n"<<endl;
    cin >> time;

    int total;
    total = amount * time;
    if (total > 490000)
    {
        cout << "Congratulations!!! you are a VIP customer, come lets talk business!!!\n" << endl;

    }
    else if (total >= 490000)
    {
        cout << "Congratulations!!! you are going home with a brand new Bajaj motocycle!!!\n" << endl;
    }
    else if (total >= 350000)
    {
        cout << "Congratulations!!! you are going home with a brand new Ladies machine!!!\n" << endl;
    }
    else if (total >= 160000)
    {
        cout << "Congratulations!!! you are going home with a brand new washing Freezer!!!\n" << endl;
    }
    else if (total >= 120000)
    {
        cout << "Congratulations!!! you are going home with a brand new Washing machine!!!\n" << endl;
    }
    else if (total >= 50000)
    {
        cout << "Congratulations!!! you are going home with a brand new Television!!! \n" << endl;
    }
    else if (total >= 30000)
    {
        cout << "Congratulations!!! you are going home with a bag of Rice!!! \n" << endl;
    }
    else if (total >= 29000)
    {
        cout << "Congratulations!!! you are going home with a bag of beans!!! \n" << endl;
    }
    else if (total >= 25000)
    {
        cout <<"Congratulations!!! you are going home with a 25 litters of oil!!! \n" <<endl;
    }
    else
    {
        cout << "Your savings is too small, come and collect your cash!! \n" << endl;
    }



    cout << "your total savings is \n" << total; 
   

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
