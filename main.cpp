
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
using namespace std;

//class Dog {
//private:
//	int age;
//	string name;
//public: 
//	int GetAge() {
//		return age;
//	}
//	string GetName() {
//		return name;
//	}
//	void SetAge(int Age) {
//		this->age = Age;
//	}
//	void SetName(string Name) {
//		this->name = Name;
//	}
//	Dog(int Age,string Name) {
//		this->age = Age;
//		this->name = Name;
//	}
//	void printAll() {
//		cout <<"AGE: "<< age<<endl;
//		cout <<"NAME: "<< name << endl;
//	}
//};
//int main() {
//	vector<Dog> Doggo;
//	for (int i = 0; i < 5; i++) {
//		int age;
//		string name;
//		cout << "entr dog name" << endl;
//		cin >> name;
//		cout << "entr age" << endl;
//		cin >> age;
//		cout << name <<" <-N   A->     "<< age;
//		Doggo.push_back(Dog(age,name));
//	}
//	for (vector<Dog>::iterator i = Doggo.begin(); i != Doggo.end();i++) {
//		i->printAll();
//	}
//}

class ZADADACHI {
private:
	int id;
	bool da;
	string text;
public:
	int GeiId() {
		return id;
	}
	string GetText() {
		return text;

	}
	bool GetDa() {
		return da;
	}
	void SetId(int id) {
		id = this->id;
	}
	void SetText(string Text) {
		Text = this->text;
	}
	void SetDa(string Da) {
		Da = this->da;
	}
	ZADADACHI(string Text, int id) {
		this->text = Text;
		this->id = id;
		da = false;
	}
	void printAll() {
		cout << "Da:"<<GetDa() << endl;
		cout << "id:"<<GeiId() << endl;
		cout << "Text:"<<GetText() << endl;
	}

};
void pliscutdis() {
	cout << "enter where would you like to place the thing: \n1 - means FRONT PLACE \nfor example \"1, 2, 2, 6\" + 4(FRONT) = \"1, 2, 2, 6, 4\"\n2 - means BACK PLACE\nfor example \"1, 3, 2\"+ 4(BACK) = \"4, 1, 3, 2\"" << endl;

}
void plisdothing() {
	cout << "cout the punct in your list" << endl;
}
//void prozes(int firstNum, list<int> zadach) {
//	string boo;
//	ZADADACHI zada = {boo };
//	pliscutdis();
//	cin >> firstNum;
//	plisdothing();
//	cin >> boo;
//	
//	switch (firstNum) {
//	case 1:
//		for (int i = 0; i < 4; i++) {
//			
//			zadach->push_back(boo);
//		}
//	case 2:
//		for (int i = 0; i < 4; i++) {
//			zadach[i]->push_front(boo);
//
//		}
//	}
//	cout << zadach;
//}
void DOBAVLIAT(list<ZADADACHI> &num, int id) {
	for (int i = 0; i < 5; i++) {
		string wrm;
		cout << "Title:" << endl;
		getline(cin, wrm);
		num.push_back(ZADADACHI(wrm, id));
		id++;
	}
}void DOBAVLIAT(vector<ZADADACHI> &num1, int id) {
	for (int i = 0; i < 5; i++) {
		string wrm;

		cout << "Title:" << endl;
		getline(cin, wrm);
		num1.push_back(ZADADACHI(wrm, id));
		id++;
	}
}void DOBAVLIAT(deque<ZADADACHI> &num2, int id) {
	for (int i = 0; i < 5; i++) {
		string wrm;

		cout << "Title:" << endl;
		getline(cin, wrm);
		num2.push_back(ZADADACHI(wrm, id));
		id++;
	}
}
void printmenyu() {
	cout << "\n\n\n\n\n\n\n\n\n\n" << endl;
	cout << "                             THE OSNOWA MENU\n                               Just enter some of the first numbers" << endl;
	cout << "                  1      -       dobavit vect" << endl;
	cout << "                  2      -       dobavit list" << endl;
	cout << "                  3      -       dobavit deque" << endl;
	cout << "                  4      -       cout vect" << endl;
	cout << "                  5      -       cout list" << endl;
	cout << "                  6      -       cout deque" << endl;
	cout << "                  8      -       mark as made" << endl;
	cout << "                  9      -       cout all made" << endl;
	cout << "                  10     -       cout all unmade" << endl;
	cout << "                  11 -           cout ALL tasks" << endl;
	cout << "                  7=leave" << endl;
}
void menyu() {
	bool da = 0;
	list<ZADADACHI> num;
	vector<ZADADACHI> num1;
	deque<ZADADACHI> num2;
	string text;
	int id = 0;
	int boop = 1;
	while (boop == 1) {
		printmenyu();
		int ok;
		cin >> ok;
		switch (ok) {
		case 1:
			DOBAVLIAT(num1, id);
			id++;
			break;
		case 2:
			DOBAVLIAT(num, id);
			id++;
			break;
		case 3:
			DOBAVLIAT(num2, id);
			id++;
			break;
		case 4:
			for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); i++) {
				i->printAll();
			}

			break;
		case 5:
			for (list<ZADADACHI>::iterator i = num.begin(); i != num.end(); ++i) {
				i->printAll();
			}
			break;
		case 6:
			for (deque<ZADADACHI>::iterator i = num2.begin(); i != num2.end(); ++i) {
				i->printAll();
			}
			break;
		case 7:
			return;
			break;
		case 8:
			int nuum;
			cout << "tipe number of the task" << endl;
			cin >> nuum;
			int tipe;
			cout << "enter the tipe of the task (1=vect, 2=list, 3=deque)" << endl;
			cin >> tipe;
			switch (tipe) {
			case 1:
				num1;
				cout << "so?" << endl;
				for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
					if (i->GeiId() == nuum) {
						i->printAll();
						i->SetDa(true);
					}

				}



				break;
			case 2:
				num;
				for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
					if (i->GeiId() == nuum) {
						i->printAll();
					}

				}
				break;
			case 3:


				for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
					if (i->GeiId() == nuum) {
						i->printAll();
					}

				}
			}
		case 9:
			for (deque<ZADADACHI>::iterator i = num2.begin(); i != num2.end(); ++i) {
				if (i->GetDa() == 0) {
					i->printAll();
				}
			}
			for (list<ZADADACHI>::iterator i = num.begin(); i != num.end(); ++i) {
				if (i->GetDa() == 0) {
					i->printAll();
				}
			}
			for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
				if (i->GetDa() == 0) {
					i->printAll();
				}
			}
			break;

		case 10:
			for (deque<ZADADACHI>::iterator i = num2.begin(); i != num2.end(); ++i) {
				if (i->GetDa() == 1) {
					i->printAll();
				}
			}
			for (list<ZADADACHI>::iterator i = num.begin(); i != num.end(); ++i) {
				if (i->GetDa() == 1) {
					i->printAll();
				}
			}
			for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
				if (i->GetDa() == 1) {
					i->printAll();
				}
			}break;

		case 11:
		
			for (deque<ZADADACHI>::iterator i = num2.begin(); i != num2.end(); ++i) {
				i->GeiId();
				i->printAll();
			}
			for (list<ZADADACHI>::iterator i = num.begin(); i != num.end(); ++i) {
				i->printAll();
			}
			for (vector<ZADADACHI>::iterator i = num1.begin(); i != num1.end(); ++i) {
				i->printAll();
			}
			break;
		}



	}
}
int main() {
cout<< "Hello";
	menyu();
}
