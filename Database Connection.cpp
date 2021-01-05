# include <iostream>
# include <string>
# include <fstream>
#include <vector>
#include <istream>
#include <ctime>


using namespace std ;


void Add () ;
void Name () ;
void ID () ;
void nodejs () ;
int showDatabase () ;



int main ()
{
    system("title Main Database");
	//system ("cls") ;
	system ("color 0F") ;
	int ch1 ;

time_t ttime = time(0);
char* dt = ctime(&ttime);
cout << "\t\t\t\t\t\t\t\t\t\t\t    " << dt << endl;
	cout << endl;
    cout << "\t\t\t\t\t|------------------------------------|" << endl;
    cout << "\t\t\t\t\t|                                    |" << endl;
    cout << "\t\t\t\t\t   Welcome to Local Admin Database"<< endl;
    cout << "\t\t\t\t\t|                                    |" << endl;
    cout << "\t\t\t\t\t|------------------------------------|" << endl;
    cout << endl;
	cout << "\t-----1. For a new Data-----" << endl;
	cout << "\t-----2. For searching by Name-----" << endl;
    cout << "\t-----3. For searching by ID-----" << endl;
    cout << "\t-----4. For show database-----" << endl;
    cout << "_> ";
        cin >> ch1 ;
	if (ch1 == 1)
	{
		Add () ;
	}
	else if (ch1 == 2)
	{
		Name () ;
	} else if(ch1 == 3) {
        ID () ;
    } else if(ch1 == 4) {
        showDatabase();
        //return 0;
    }



}

void Add ()
{
    system("title Add New");
	system ("cls") ;
	string name ;
	ofstream worker ("Databse.txt",ios ::app);
	int ID , salary ;
	cout << "Name : ";
	cin >> name ;
    //worker << name;
	cout << "ID : " ;
	cin >> ID ;
    //worker << ID;
	cout << "Salary : " ;
	cin >> salary ;
    //worker << salary;

	worker << name << " " << ID << " " << salary << endl;
	worker.close () ;
	cin.get () ;
	system("cls");
	main () ;
}

void Name ()
{
    system("title Search by Name");
	ifstream worker ("Databse.txt") ;
	int ID , salary , str ;
	string kl;
	string name;
	cout << "Enter Name : " ;
	cin >> kl ;

	while (worker >> name >> ID >> salary)
	{
		if (kl == name)
		{
			system ("cls") ;
            system("title Found !");
			cout << "Data found !" << endl;

			cout << name << " " << ID << " "  << salary << endl;
		}

		else if (!(kl == name))
		{
			system ("cls") ;
            system("title Not Found !");
			cout << "Not Found !" << endl;
		}
	}

	system("cls");
	main () ;
}
void ID ()
{
    system("Search by ID");
	ifstream worker ("Databse.txt") ;
	int ID , salary , str ;
	string name  ;
	cout << "Enter ID : " ;
	cin >> str ;

	while (worker >> name >> ID >> salary)
	{
		if (str == ID)
		{
			system ("cls") ;
           system("title Found !");
			cout << "Data found !" << endl;
			cout << name << " " << ID << " "  << salary << endl;
		}

		else if (!(str == ID))
		{
			system ("cls") ;
            system("title Not Found !");
			cout << "Not Found !" << endl;
		}
	}

	system("cls");
	main () ;
}
int showDatabase() {
    system("title Show Database");
    ifstream worker("Databse.txt");
	vector<string>v;
	string dates;
	while (worker >> dates) {
        v.push_back(dates);
        cout << dates << endl;
    }
    string ans2;
	cout << endl;
	cout << endl;
	cout << "Vreti sa va ducecti la meniul princial ?" << endl;
	cout << "_> ";
	cin >> ans2;
	if(ans2 == "y" || ans2 == "Y"){
		system("cls");
		main();
	} else {
		cout << "Datorita raspunsului dvs, programul a returnat 1;" << endl << endl;
		return 1;
	}
	main ();
}
void nodejs() {
    int nodecss;
    nodecss = 17;
    float ysoft = nodecss;
    ysoft = 0.5;
    cout << ysoft;
    ysoft = ysoft + nodecss;
    cout << ysoft;
}
