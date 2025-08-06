#include <iostream>
#include <string>
using namespace std;

string oriName;
string oriGender;

void menu();
static int custom_code = 0;
class National
{
public:
  int choice1;
  int choice2, back;
  float charges;
  string destination;
  void nation_flight()
  {
    string flight[6] = {"Karachi", "Islamabad", "Skardu", "Lahore", "Gilgit", "Peshawar"};
    for (int i = 0; i < 6; i++)
    {
      cout << (i + 1) << "  flight to " << flight[i] << endl;
    }
    cout << "WELCOME TO PAKISTAN INTERNATIONAL AIRLINES" << endl;
    cout << "Enter the number of city you want to book flight:";
    cin >> choice1;
    switch (choice1)
    {
    case 1:
    {
      cout << "Following are the available flights:" << endl;
      cout << "1.Karachi-1XA"
              "\nTime:8:00"
              "\nDate:23/7/2022"
              "\nCharges:8000"
           << endl;
      cout << "2.Karachi-2XA"
              "\nTime:12:00"
              "\nDate:23/7/2022"
              "\nCharges:8000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-1XA" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 1;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-2XA" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 1;
        menu();
      }
      else
      {
        cout << "Invalid number";
        nation_flight();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 2:
    {
      cout << "Following are the available flights:" << endl;
      cout << "1.Islamabad-J4"
              "\nTime:2:00"
              "\nDate:1/7/2022"
              "\nCharges:5000"
           << endl;
      cout << "2.Islamabad-G6"
              "\nTime:12:00"
              "\nDate:1/7/2022"
              "\nCharges:5000"
           << endl;
      cout << "3.Islamabad-J4"
              "\nTime:8:00"
              "\nDate:2/7/2022"
              "\nCharges:5000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-J4" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 2;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-G6" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 2;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-J4" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 2;
        menu();
      }
      else
      {
        cout << "Invalid number";
        nation_flight();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 3:
    {
      cout << "Following are the available flights:" << endl;
      cout << "1.Skardu-A99"
              "\nTime:6:00"
              "\nDate:23/6/2022"
              "\nCharges:8800"
           << endl;
      cout << "2.Skardu-A19"
              "\nTime:12:00"
              "\nDate:23/6/2022"
              "\nCharges:8800"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-A99" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 3;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-A19" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 3;
        menu();
      }
      else
      {
        cout << "Invalid number";
        nation_flight();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 4:
    {
      cout << "Following are the available flights:" << endl;
      cout << "1.Lahore-X9A"
              "\nTime:6:00"
              "\nDate:25/6/2022"
              "\nCharges:5000"
           << endl;
      cout << "2.Lahore-TT09"
              "\nTime:12:00"
              "\nDate:25/6/2022"
              "\nCharges:5000"
           << endl;
      cout << "3.Lahore-A99"
              "\nTime:8:00"
              "\nDate:26/6/2022"
              "\nCharges:5000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-X9A" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 4;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-TT09" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 4;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-A99" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 4;
        menu();
      }
      else
      {
        cout << "Invalid number";
        nation_flight();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 5:
    {
      cout << "Sorry no flight available for Gilgit" << endl;
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 6:
    {
      cout << "Following are the available flights:" << endl;
      cout << "1.Peshawar-J4"
              "\nTime:2:00"
              "\nDate:30/6/2022"
              "\nCharges:5800"
           << endl;
      cout << "2.Peshawar-G6"
              "\nTime:12:00"
              "\nDate:30/6/2022"
              "\nCharges:5800"
           << endl;
      cout << "3.Peshawar-J4"
              "\nTime:8:00"
              "\nDate:1/7/2022"
              "\nCharges:5800"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-J4" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 5;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-G6" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 5;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-J4" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 5;
        menu();
      }
      else
      {
        cout << "Invalid number";
        nation_flight();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    deafult:
    {
      cout << "Invalid number";
      menu();
    }
    }
  }
};
class International
{
public:
  int choice1;
  int choice2, back;
  void flights()
  {
    string flight[5] = {"England", "America", "China", "Dubai", "Qatar"};
    for (int i = 0; i < 5; i++)
    {
      cout << (i + 1) << "  flight to " << flight[i] << endl;
    }
    cout << "WELCOME TO PAKISTAN INTERNATIONAL AIRLINES" << endl;
    cout << "Enter the number of country you want to book flight:";
    cin >> choice1;
    switch (choice1)
    {
    case 1:
    {
      cout << "-------Welcome to ENGLAND AIRLINES" << endl;
      cout << "Following are the available flights:" << endl;
      cout << "1.England-0299"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:23/6/2022"
              "\nCharges:22000"
           << endl;
      cout << "2.England-0209"
              "\nTime:12:00"
              "\nBoarding time:12:30"
              "\nDate:23/6/2022"
              "\nCharges:22000"
           << endl;
      cout << "3.England-1299"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:22/6/2022"
              "\nCharges:22000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-0299" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 6;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-0209" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 6;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-1299" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 6;
        menu();
      }
      else
      {
        cout << "Invalid number";
        flights();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 2:
    {
      cout << "-------Welcome to AMERICAN AIRLINES" << endl;
      cout << "Following are the available flights:" << endl;
      cout << "1.America-009"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:23/6/2022"
              "\nCharges:21000"
           << endl;
      cout << "2.America-209"
              "\nTime:12:00"
              "\nBoarding time:12:30"
              "\nDate:23/6/2022"
              "\nCharges:21000"
           << endl;
      cout << "3.America-129"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:22/6/2022"
              "\nCharges:21000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-009" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 7;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-209" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 7;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-129" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 7;
        menu();
      }
      else
      {
        cout << "Invalid number";
        flights();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 3:
    {
      cout << "-------Welcome to CHINESS AIRLINES" << endl;
      cout << "Following are the available flights:" << endl;
      cout << "1.China-99"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:23/2/2022"
              "\nCharges:18000"
           << endl;
      cout << "2.China-109"
              "\nTime:12:00"
              "\nBoarding time:12:30"
              "\nDate:23/2/2022"
              "\nCharges:18000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-99" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 8;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-109" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 8;
        menu();
      }
      else
      {
        cout << "Invalid number";
        flights();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 4:
    {
      cout << "-------Welcome to DUBAI AIRLINES" << endl;
      cout << "Following are the available flights:" << endl;
      cout << "1.Dubai-X9A"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:23/2/2022"
              "\nCharges:15000"
           << endl;
      cout << "2.Dubai-TT09"
              "\nTime:12:00"
              "\nBoarding time:12:30"
              "\nDate:23/2/2022"
              "\nCharges:15000"
           << endl;
      cout << "3.Dubai-A99"
              "\nTime:8:00"
              "\nBoarding time:8:30"
              "\nDate:22/2/2022"
              "\nCharges:15000"
           << endl;
      cout << "Enter the number of flight you want to book:";
      cin >> choice2;
      if (choice2 == 1)
      {
        cout << "You have successfully booked flight-X9A" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 9;
        menu();
      }
      else if (choice2 == 2)
      {
        cout << "You have successfully booked flight-TT09" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 9;
        menu();
      }
      else if (choice2 == 3)
      {
        cout << "You have successfully booked flight-A99" << endl;
        cout << "collect you ticket from menu" << endl;
        custom_code = 9;
        menu();
      }
      else
      {
        cout << "Invalid number";
        flights();
      }
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    case 5:
    {
      cout << "-------Welcome to QATAR AIRLINES" << endl;
      cout << "Sorry no flight available" << endl;
      cout << "Press any key to ge to menu:";
      cin >> back;
      menu();
      break;
    }
    deafult:
    {
      cout << "Invalid number";
      menu();
    }
    }
  }
};
class Details
{
public:
  string name, gender;
  int age;
  void setname(string n)
  {
    name = n;
  }
  string getname()
  {
    return name;
  }
  void setgender(string g)
  {
    gender = g;
  }
  string getgender()
  {
    return gender;
  }
  void setage(int a)
  {
    age = a;
  }
  int getage()
  {
    return age;
  }
};
class Registration : public Details, National, International
{ // Multiple Inheritance
public:
  Details d;
  string choose;
  string n1, gen;
  void custom_details()
  {
    int age1;
    cout << "Enter your name:";
    cin >> oriName;
    cout << "Enter customer gender:";
    cin >> oriGender;
    cout << "Enter customer age:";
    cin >> age1;
    d.setage(age1);
  }
  void custom_display()
  {
    cout << "Name:" << n1 << endl;
    cout << "Gender:" << gen << endl;
  }
  void reservation()
  {
    cout << "NATIONAL & INTERNATIOAL" << endl;
    cout << "Press N for National flights and I for International:";
    cin >> choose;
    if (choose == "N")
    {
      nation_flight();
    }
    else if (choose == "I")
    {
      flights();
    }
    else
    {
      cout << "Invalid input" << endl;
      menu();
    }
  }
};
class Ticket : public Registration // inheritance
{
public:

  string destination;
  float charges;
  void display()
  {
    cout << "PAKISTAN INTERNATIONAL AIRLINES" << endl;
    cout << "               TICKET          " << endl;
    cout << "Name:" << oriName << endl;
    cout << "Gender:" << oriGender << endl;
    cout << "Customer ID:" << custom_code << endl;
    cout << "Date of generation:18/6/2022        Generated by:Miss LAIBA" << endl;
    if (custom_code == 1)
    {
      destination = "Karachi";
      charges = 8000;
    }
    else if (custom_code == 2)
    {
      destination = "Islamabad";
      charges = 5000;
    }
    else if (custom_code == 3)
    {
      destination = "Skardu";
      charges = 8800;
    }
    else if (custom_code == 4)
    {
      destination = "Lahore";
      charges = 5000;
    }
    else if (custom_code == 5)
    {
      destination = "Peshawar";
      charges = 5800;
    }
    else if (custom_code == 6)
    {
      destination = "England";
      charges = 22000;
    }
    else if (custom_code == 7)
    {
      destination = "AMERICA";
      charges = 21000;
    }
    else if (custom_code == 8)
    {
      destination = "China";
      charges = 18000;
    }
    else if (custom_code == 9)
    {
      destination = "Dubai";
      charges = 15000;
    }
    cout << "DESTINATION:" << destination << endl;
    cout << "Charges:" << charges << endl;
    cout << "THANK YOU FOR VISITING OUR AIRLINES" << endl;
    cout << "Have a safe journey";
  }
};
void menu()
{
  Details d;
  int choice;
  int back;
  cout << "------Welcome to PAKISTAN INTERNATIONAL AIRLINES------" << endl;
  cout << "------MAIN MENU------" << endl;
  cout << "1.Flight Registration" << endl;
  cout << "2.Ticket and Charges" << endl;
  cout << "3.Exit" << endl;
  cout << "Enter your choice:";
  cin >> choice; // Classes objects
  Registration reg;
  Ticket t;
  switch (choice)
  {
  case 1:
  {
    cout << "--------Customer details-------" << endl;
    reg.custom_details();
    cout << "------Flight Resgtration--------" << endl;
    reg.reservation();
    break;
  }
  case 2:
  {
    cout << "------Tickets & Charges-------" << endl;
    cout << "Your ticket is generated,for collection press 1:";
    cin >> back;
    if (back == 1)
    {
      t.display();
      exit(0);
      break;
    }
    else
    {
      menu();
    }
  }
  case 3:
  {
    cout << "----Thank you for visiting------" << endl;
    exit(0);
    break;
  }
  deafult:
  {
    cout << "Invalid input,Please input valid number";
    menu();
    break;
  }
  }
}
class Managment
{ // constructor
public:
  Managment()
  {
    menu();
  }
};
int main()
{
  Managment m;
  return 0;
}