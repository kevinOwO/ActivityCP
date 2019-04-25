#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()	
{
	int month,day,year;
	string monthName;

		cout << "Enter Month by choosing a number from 1-12" << endl; 
	 cin >> month;

		switch(month)
		{
     case 1:
                monthName = "January";
                cout <<"Enter a day from 1-31" <<endl ;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
{
	cout << "January ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            
	case 2:
                monthName = "February";
                cout <<"Enter a day from 1-28" <<endl;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=28 && month>=1 && month<=12)
	{
	cout << "February ";
	cout << day << "," << year; }
	 else
	cout << "Invalid date!"; 
                break;
            case 3:
                monthName = "March";
                 cout <<"Enter a day from 1-31" <<endl ;
                 cin >> day;  
                 	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
	{
	cout << "March ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
	
                break;
            case 4:
                monthName = "April";
                 cout <<"Enter a day from 1-30" <<endl ;
                 cin >> day;  
                 	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=30 && month>=1 && month<=12)
{
	cout << "April ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
                break;
            case 5:
                monthName = "May";
                 cout <<"Enter a day from 1-31" <<endl ;
                 cin >> day;  
                 	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
{
	cout << "May ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
	
                break;
            case 6:
                monthName = "June";
                 cout <<"Enter a day from 1-30" <<endl ;
                 cin >> day;  
                 	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=30 && month>=1 && month<=12)
{
	cout << "June ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 7:
                monthName = "July";
                   cout <<"Enter a day from 1-31" <<endl ;
                   cin >> day;  
                   	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
{
	cout << "July ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 8:
                monthName = "August";
                cout <<"Enter a day from 1-31" <<endl ;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
{
	cout << "August ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 9:
                monthName = "September";
                cout <<"Enter a day from 1-30" <<endl ;
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=30 && month>=1 && month<=12)
	{
	cout << "September ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 10:
                monthName = "October";
                cout <<"Enter a day from 1-31" <<endl ;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
	{
	cout << "October ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 11:
                monthName = "November";
                cout <<"Enter a day from 1-30" <<endl ;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=30 && month>=1 && month<=12)
	{
	cout << "November ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            case 12:
                monthName = "December";
                  cout <<"Enter a day from 1-31" <<endl ;
                  cin >> day;  
                  	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
	{
	cout << "December ";
	cout << day << "," << year; }
	 else
		cout << "Invalid date!"; 
		break;
            default:
                cout << "You must enter a number from 1-12" << endl << "Enter day" << endl;
                cin >> day;  
                	cout << "Enter year" <<endl;
	cin >> year ;
		{ cout << "Month:" << month << endl;
	cout << "Day:" << day <<endl;
	cout << "Year:" << year <<endl;	}
				 if (day>=1 && day<=31 && month>=1 && month<=12)
	{
			if (month==1)
	cout << "January ";
		else if (month==2)
	cout << "February ";
		else if (month==3)
	cout << "March ";
		else if (month==4)
	cout << "April ";
		else if (month==5)
	cout << "May ";
		else if (month==6)
	cout << "June ";	
		else if (month==7)
	cout << "July ";
		else if (month==8)
	cout << "August ";
		else if (month==9)
	cout << "September ";
		else if (month==10)
	cout << "October ";
		else if (month==11)
	cout << "November ";
		else if (month==12)
	cout << "December ";
	cout << day << "," << year;
}
	 else
	cout << "Invalid date!"; 
	}

	

getch();
	return 0; 
}
