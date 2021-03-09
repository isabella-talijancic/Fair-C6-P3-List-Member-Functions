//C6 P3 List Member Functions

#include <iostream>
#include <iomanip>
#include <list> 
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

void finarizakiList();
list<string> inarizakiList({"Atsumu Miya", "Osamu Miya", "Shinsuke Kita",
						"Ren Omimi", "Aran Ojiro", "Hitoshi Ginjima",
						"Rintaro Suna", "Yuto Kosaku", "Heisuke Riseki",
						"Michinari Akagi"});
list<string> secondList;

int main() 
{
	cout << "🦊 Inarizaki Roster 🦊\n\n";
	cout << "Original Roster :\n\n";
	finarizakiList();
	
	//Assign()
  	string secondList[] = {"Atsumu Miya", "Osamu Miya", "Shinsuke Kita",
						"Ren Omimi", "Aran Ojiro", "Hitoshi Ginjima",
						"Rintaro Suna", "Yuto Kosaku", "Heisuke Riseki",
						"Michinari Akagi"};
  	inarizakiList.assign(secondList,secondList+9);
  	cout << "Roster after using assign() :\n\n"; 
    finarizakiList();
    
    //Insert()
    list<string>::iterator it = inarizakiList.begin();
    inarizakiList.insert(it,"Hinata Shoyo");
    cout << "Roster after using insert() :\n\n"; 
    finarizakiList();
    
    //Erase()
	list<string>::iterator itr = inarizakiList.begin();
    inarizakiList.erase(itr);
    cout << "Roster after using erase() :\n\n"; 
    finarizakiList();
 
    //Size()
    cout << "Roster size : " << inarizakiList.size();
    
    //Empty()
    if (inarizakiList.empty())
		cout << "\n\nRoster is empty\n\n";
	else
		cout << "\n\nRoster is not empty\n\n";

    //Remove()
    cout << "Roster after using remove() :\n\n"; 
    inarizakiList.remove("Atsumu Miya");
    finarizakiList();
	
	cout << "🦊 End of Program 🦊";
	return 0;
}
//Function Definition
void finarizakiList()
{
    for (list<string>::iterator i=inarizakiList.begin(); i!=inarizakiList.end(); i++) 
       cout << "— " << *i << "\n";
    cout << endl; 
}