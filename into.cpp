#include<iostream>
#include<iomanip>
#include <Windows.h>
#include <string>
using namespace std;
void deletefun(int id, int array[][2], int& elem)
{
	int index = 0;
	for (int i = 0; i < elem; i++)
	{
		if (id == array[i][0])
		{
			index = i;
		}
	}
	elem = elem - 1;
	for (int i = index; i < elem; ++i)
	{
		array[i][0] = array[i + 1][0];
		array[i][1] = array[i + 1][1];
	}
}
void addfun(int id, int price, int array[][2], int& elem)
{
	array[elem][0] = id;
	array[elem][1] = price;
	elem++;
}
void printfun(int array[][2], int elem)
{
	if (elem == 0)
	{
		cout << "there's no data availbe try adding data then try again" << endl;
	}
	else
	{
		/*cout << "id  price" << endl;
		for (int i = 0; i < elem; i++)
			cout << array[i][0] << setw(4) << array[i][1] << endl;*/
		for (int i = 0; i < elem; i++)
			cout << "*" << setw(7) << array[i][0] << setw(9) << array[i][1] << "                 *\n";
	}

}
void getfun(int elem, int id, int array[][2])
{
	int priice = 0;
	for (int i = 0; i < elem; i++)
		if (id == array[i][0])
			priice = array[i][1];
	cout << "the price is: " << priice << endl;
}
void deleteallfun(int& elem)
{
	elem = 0;
}
void ifprint(int elem, int array[][2], int from, int to)
{
	int newelem = 0;
	int newarray[50][2];
	for (int i = 0; i < elem; i++)
	{
		if (array[i][1] >= from)
		{
			if (array[i][1] <= to)
			{
				int j;
				j = newelem;
				newarray[newelem][0] = array[i][0];
				newarray[newelem][1] = array[i][1];
				newelem++;
			}
		}
	}
	cout << "* * * * * * * * * * * * * * * * * *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*     ID       Price              *\n";
	printfun(array, newelem);
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*        e. Exit                  *\n";
	cout << "* * * * * * * * * * * * * * * * * *\n";
}
void mainMenu() {
	system("cls");
	cout << "* * * * * * * * * * * * * * * * * *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*           Welcome to:           *\n";
	cout << "*             Cashier             *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*       0. Enter an item          *\n";
	cout << "*                                 *\n";
	cout << "*       1. Retrieve an item       *\n";
	cout << "*                                 *\n";
	cout << "*       2. Price filter           *\n";
	cout << "*                                 *\n";
	cout << "*       3. Delete an item         *\n";
	cout << "*                                 *\n";
	cout << "*       4. Desplay all item       *\n";
	cout << "*                                 *\n";
	cout << "*       5. Delete all items       *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*            e. Exit              *\n";
	cout << "*                                 *\n";
	cout << "* * * * * * * * * * * * * * * * * *\n";
}
void enterItemMune(int array[][2], int& elem) {
	string x = "0", y = "0";
	while (true)
	{
		system("cls");
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*          Enter item ID          *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*             e. Exit             *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cin >> x;
		if (x == "e")
			return;
		system("cls");
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*         Enter item price        *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*             e. Exit             *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cin >> y;
		if (x == "e")
			return;
		addfun(stoi(x), stoi(y), array, elem);
	}
}
void itemRetrieve(int array[][2], int& elem) {
	system("cls");
	cout << "* * * * * * * * * * * * * * * * * *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*       Which item ID you         *\n";
	cout << "*       want to retrieve ?        *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*             e. Exit             *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "* * * * * * * * * * * * * * * * * *\n";
	string Select1 = "0";
	while (true)
	{
		cin >> Select1;
		if (Select1 != "e")
			getfun(elem, stoi(Select1), array);
		else
			return;
	}
}
void deleteMenu(int& elem) {
	int Select5;
	do {
		system("cls");
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*     Are you sure you want to    *\n";
		cout << "*        delete all items ?       *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*             0. No               *\n";
		cout << "*                                 *\n";
		cout << "*             1. Yes              *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cin >> Select5;
		switch (Select5) {
		case  0: return;
		case  1:
			deleteallfun(elem);
			cout << "All items deleted successfully.\n";
			Sleep(4000);
			return;
			break;
		default: cout << "Unvalid seclect.\n"; Sleep(2000);
		}
	} while (Select5 != '0');
}
void displayMenu(int array[][2], int& elem)
{
	system("cls");
	if (elem == 0)
		cout << "there's no data";
	else
	{
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*     ID       Price              *\n";
		printfun(array, elem);
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*        e. Exit                  *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
	}
}
void delete1item(int array[][2], int& elem)
{
	string x = "0";
	system("cls");
	cout << "* * * * * * * * * * * * * * * * * *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*       Which ID item that        *\n";
	cout << "*       you want to delete?       *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*             e. Exit             *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "*                                 *\n";
	cout << "* * * * * * * * * * * * * * * * * *\n";
	while (true)
	{
		cin >> x;
		if (x == "e")
			return;
		else
		{
			deletefun(stoi(x), array, elem);
			cout << "item deleted successfully" << endl;
		}
	}
}
void displayifMenu(int array[][2], int& elem)
{
	while (true)
	{
		string x, y;
		system("cls");
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*      enter the lowest price:    *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cin >> x;
		system("cls");
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*      enter the highest price:   *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "*                                 *\n";
		cout << "* * * * * * * * * * * * * * * * * *\n";
		cin >> y;
		if (y != "e")
		{
			system("cls");
			ifprint(elem, array, stoi(x), stoi(y));
			cin >> y;
			return;
		}
		else
			return;
	}
		
}


int main() {
	char input = 'e';
	int x = 0, y = 0;
	int elem = 0;
	int array[50][2];
	char Selectmain;
	while (true) {
		mainMenu();
		cin >> Selectmain;
		switch (Selectmain) {
		case '0': enterItemMune(array, elem); break;
		case '1': itemRetrieve(array, elem);  break;
		case '2': 
			displayifMenu(array,elem);
			break;
		case '3':
			delete1item(array, elem);
			break;
		case '4':
			displayMenu(array, elem);
			cin >> Selectmain;
			if (Selectmain == 'e')
				break;
		case '5':
			deleteMenu(elem);
			break;
		case 'e': return 0;
		default: cout << "Unvalid seclect.\n"; Sleep(2000);
		}
	}
}