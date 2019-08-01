#include<iostream>
#include<string>
using namespace std;
void main()
{
	string menu; 
	string use,pass,use1,pass1;
	do{
	cout << "//////////////Menu//////////////\n";
	cout << "1.Register\n";
	cout << "2.Login\n";
	cout << "Q.Exit program\n";
	cout << "________________________________\n";
	cout << endl;
	cout << "Enter menu : ";
	cin >> menu;
	if(menu == "1"){
		cout << endl;
		cout << "**********Register**********\n";
		cout << endl;
			cout << "Input Username : ";
			cin >> use;
			cout << "Input Password : ";
			cin >> pass;
	}
	else if(menu == "2"){
		do{
		cout << endl;
		cout << "**********Loing**********\n";
		cout << endl;
		cout << "Input Username : ";
	    cin >> use1;
		cout << "Input Password : ";
		cin >> pass1;
		if(use1 != use || pass1 != pass){
			cout << "!!!!Username or Password incorrect Please try again!!!!\n";
	}
		}while(use1 != use || pass1 != pass);
		cout << "Username and Password correct^___^\n";
	}else if(menu != "1"&& menu != "2" && menu != "Q" && menu != "q") { 
		cout << "Error!!!!!\n";}
	cout << endl;
}while(menu!="Q"&& menu!="q");
	cout << "Exit program....\n";
}
