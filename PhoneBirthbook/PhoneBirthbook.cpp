#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string filename = ""; //���� �̸�

void displayMenu()
{
	cout << "R: read from a file" << endl; //ok
	cout << "+: add a new entry" << endl; //ok
	cout << "-: remove and entry" << endl;
	cout << "W: write to a file" << endl;
	cout << "M: select a month" << endl;
	cout << "Q: quit the program" << endl; //ok
}

void listAllContacts()
{
	string line;
	int num[13]={ 0, }; //1~12�� ���� ������ �迭
	int l_cnt = 1; //�ݺ���
	cout << "Enter the name of the file: ";
	getline(cin, filename);

	ifstream addresstxt(filename + ".txt"); //�Է��� ������ �����
	if (addresstxt.is_open()) //���� ����
		{
			while (getline(addresstxt, line)) //EOF���� �ݺ�
			{
						if (line[0] == '0' && line[1] == '1') {
							num[1]++;
						}
						else if (line[0] == '0' && line[1] == '2') {
							num[2]++;
						}
						else if (line[0] == '0' && line[1] == '3') {
							num[3]++;
						}
						else if (line[0] == '0' && line[1] == '4') {
							num[4]++;
						}
						else if (line[0] == '0' && line[1] == '5') {
							num[5]++;
						}
						else if (line[0] == '0' && line[1] == '6') {
							num[6]++;
						}
						else if (line[0] == '0' && line[1] == '7') {
							num[7]++;
						}
						else if (line[0] == '0' && line[1] == '8') {
							num[8]++;
						}
						else if (line[0] == '0' && line[1] == '9') {
							num[9]++;
						}
						else if (line[0] == '1' && line[1] == '0') {
							num[10]++;
						}
						else if (line[0] == '1' && line[1] == '1') {
							num[11]++;
						}
						else if (line[0] == '1' && line[1] == '2') {
							num[12]++;
						}
						++l_cnt;
			}
////////////////////////////////////////////////////////////////////////////////////
			cout << "Total number of entries in the list: " << (l_cnt+1)/4 << '\n';
			cout << "Number of birthdays in" << '\n';
			if (num[1] > 0) {
				cout << "January: " << num[1] << '\n';
			}
			if (num[2] > 0) {
				cout << "Feburary: " << num[2] << '\n';
			}
			if (num[3] > 0) {
				cout << "March: " << num[3] << '\n';
			}
			if (num[4] > 0) {
				cout << "April: " << num[4] << '\n';
			}
			if (num[5] > 0) {
				cout << "May: " << num[5] << '\n';
			}
			if (num[6] > 0) {
				cout << "June: " << num[6] << '\n';
			}
			if (num[7] > 0) {
				cout << "July: " << num[7] << '\n';
			}
			if (num[8] > 0) {
				cout << "August: " << num[8] << '\n';
			}
			if (num[9] > 0) {
				cout << "September: " << num[9] << '\n';
			}
			if (num[10] > 0) {
				cout << "October: " << num[10] << '\n';
			}
			if (num[11] > 0) {
				cout << "November: " << num[11] << '\n';
			}
			if (num[12] > 0) {
				cout << "December: " << num[12] << '\n';
			}
			addresstxt.close();
	}
}

void addContact()
{
	string name, phone, birthday;

	cout << "Name: "; //�̸�, �ڵ�����ȣ, ���� �Է¹���
	getline(cin, name);
	cout << "Phone: ";
	getline(cin, phone);
	cout << "Birthday: ";
	getline(cin, birthday);

	ofstream addresstxt;
	if (filename == "") { //Read�� ���ҽ� ���� ���� ���
		filename = "FriendFile";
	}

	addresstxt.open(filename + ".txt", ios::out | ios::app); //�ֱٿ� �����ߴ� ���� ���κп� �̾

	cout << '\n';
	addresstxt << name << '\n';
	addresstxt << phone << '\n';
	addresstxt << birthday << '\n';
	addresstxt.close();
////////////////////////////////////////////////////////////////////////////////////
	string line;
	int num[13] = { 0, }; //1~12�� ���� ������ �迭
	int l_cnt = 1; //�ݺ���

	if (filename == "") { //Read�� ���ҽ� ���� ���� ���
		filename = "FriendFile";
	}
	ifstream addresstxt2(filename + ".txt"); //�Է��� ������ �����
	if (addresstxt2.is_open()) //���� ����
	{
		while (getline(addresstxt2, line)) //EOF���� �ݺ�
		{
			if (line[0] == '0' && line[1] == '1') {
				num[1]++;
			}
			else if (line[0] == '0' && line[1] == '2') {
				num[2]++;
			}
			else if (line[0] == '0' && line[1] == '3') {
				num[3]++;
			}
			else if (line[0] == '0' && line[1] == '4') {
				num[4]++;
			}
			else if (line[0] == '0' && line[1] == '5') {
				num[5]++;
			}
			else if (line[0] == '0' && line[1] == '6') {
				num[6]++;
			}
			else if (line[0] == '0' && line[1] == '7') {
				num[7]++;
			}
			else if (line[0] == '0' && line[1] == '8') {
				num[8]++;
			}
			else if (line[0] == '0' && line[1] == '9') {
				num[9]++;
			}
			else if (line[0] == '1' && line[1] == '0') {
				num[10]++;
			}
			else if (line[0] == '1' && line[1] == '1') {
				num[11]++;
			}
			else if (line[0] == '1' && line[1] == '2') {
				num[12]++;
			}
			++l_cnt;
		}
////////////////////////////////////////////////////////////////////////////////////
		cout << "Total number of entries in the list: " << (l_cnt + 1) / 4 << '\n';
		cout << "Number of birthdays in" << '\n';
		if (num[1] > 0) {
			cout << "January: " << num[1] << '\n';
		}
		if (num[2] > 0) {
			cout << "Feburary: " << num[2] << '\n';
		}
		if (num[3] > 0) {
			cout << "March: " << num[3] << '\n';
		}
		if (num[4] > 0) {
			cout << "April: " << num[4] << '\n';
		}
		if (num[5] > 0) {
			cout << "May: " << num[5] << '\n';
		}
		if (num[6] > 0) {
			cout << "June: " << num[6] << '\n';
		}
		if (num[7] > 0) {
			cout << "July: " << num[7] << '\n';
		}
		if (num[8] > 0) {
			cout << "August: " << num[8] << '\n';
		}
		if (num[9] > 0) {
			cout << "September: " << num[9] << '\n';
		}
		if (num[10] > 0) {
			cout << "October: " << num[10] << '\n';
		}
		if (num[11] > 0) {
			cout << "November: " << num[11] << '\n';
		}
		if (num[12] > 0) {
			cout << "December: " << num[12] << '\n';
		}
		addresstxt2.close();
	}
}

void deleteContact() //remove
{
	string del_name;
	cout << "Name: ";
	getline(cin, del_name);

	ifstream addresstxt;
	addresstxt.open("FriendFile.txt");
	string line;
	string buf[100];
	int cnt = 1;

	while (getline(addresstxt, line)) { //���� txt���� �о�ͼ� ���ۿ� ����
		buf[cnt] = line;
		++cnt;
	}
	addresstxt.close();

	ofstream fout;
	fout.open("FriendFIle.txt"); 

	for (int i = 1; i <= cnt; i++) { //���ۿ� ������ string�� �ҷ��ͼ� ���� ���
		if (buf[i] == del_name)
		{
			i += 3;
		}
		else
			fout << buf[i] << endl;
	}
	fout.close();
////////////////////////////////////////////////////////////////////////////////////
	int num[13] = { 0, }; //1~12�� ���� ������ �迭
	int l_cnt = 1; //�ݺ���

	if (filename == "") { //Read�� ���ҽ� ���� ���� ���
		filename = "FriendFile";
	}
	ifstream addresstxt2(filename + ".txt"); //�Է��� ������ �����
	if (addresstxt2.is_open()) //���� ����
	{
		while (getline(addresstxt2, line)) //EOF���� �ݺ�
		{
			if (line[0] == '0' && line[1] == '1') {
				num[1]++;
			}
			else if (line[0] == '0' && line[1] == '2') {
				num[2]++;
			}
			else if (line[0] == '0' && line[1] == '3') {
				num[3]++;
			}
			else if (line[0] == '0' && line[1] == '4') {
				num[4]++;
			}
			else if (line[0] == '0' && line[1] == '5') {
				num[5]++;
			}
			else if (line[0] == '0' && line[1] == '6') {
				num[6]++;
			}
			else if (line[0] == '0' && line[1] == '7') {
				num[7]++;
			}
			else if (line[0] == '0' && line[1] == '8') {
				num[8]++;
			}
			else if (line[0] == '0' && line[1] == '9') {
				num[9]++;
			}
			else if (line[0] == '1' && line[1] == '0') {
				num[10]++;
			}
			else if (line[0] == '1' && line[1] == '1') {
				num[11]++;
			}
			else if (line[0] == '1' && line[1] == '2') {
				num[12]++;
			}
			++l_cnt;
		}
////////////////////////////////////////////////////////////////////////////////////
		cout << "Total number of entries in the list: " << (l_cnt + 1) / 4 << '\n';
		cout << "Number of birthdays in" << '\n';
		if (num[1] > 0) {
			cout << "January: " << num[1] << '\n';
		}
		if (num[2] > 0) {
			cout << "Feburary: " << num[2] << '\n';
		}
		if (num[3] > 0) {
			cout << "March: " << num[3] << '\n';
		}
		if (num[4] > 0) {
			cout << "April: " << num[4] << '\n';
		}
		if (num[5] > 0) {
			cout << "May: " << num[5] << '\n';
		}
		if (num[6] > 0) {
			cout << "June: " << num[6] << '\n';
		}
		if (num[7] > 0) {
			cout << "July: " << num[7] << '\n';
		}
		if (num[8] > 0) {
			cout << "August: " << num[8] << '\n';
		}
		if (num[9] > 0) {
			cout << "September: " << num[9] << '\n';
		}
		if (num[10] > 0) {
			cout << "October: " << num[10] << '\n';
		}
		if (num[11] > 0) {
			cout << "November: " << num[11] << '\n';
		}
		if (num[12] > 0) {
			cout << "December: " << num[12] << '\n';
		}
		addresstxt2.close();
	}
}

void writeFile() {
	string newfile;
	cout << "Enter the name of the file: ";
	getline(cin, newfile);
	cout << "The list is written into " << newfile << endl;

	ifstream addresstxt;
	addresstxt.open("FriendFile.txt");
	string line;
	string buf[100];
	int cnt = 1;

	while (getline(addresstxt, line)) { //���� txt���� �о�ͼ� ���ۿ� ����
		buf[cnt] = line;
		++cnt;
	}
	addresstxt.close();

	ofstream fout;
	fout.open(newfile + ".txt");

	for (int i = 1; i <= cnt; i++) { //���ۿ� ������ string�� �ҷ��ͼ� ���� ���
			fout << buf[i] << endl;
	}
	fout.close();
}

void searchContact() //select a month
{
	cout << "Enter the selected month: ";

	string findMonth;
	getline(cin, findMonth); //������ �� ����

	ifstream addresstxt;
	addresstxt.open("FriendFile.txt");
	string line;
	int num[13] = { 0, }; //1~12�� ���� ������ �迭 
	bool flag[13] = { false, }; //������ �� ����ص�
	bool chk = true; //�Է¹��� ���� �����ϴ��� ����

	while (getline(addresstxt, line))
	{
		if (line[0] == '0' && line[1] == '1') {
			num[1]++;
		}
		else if (line[0] == '0' && line[1] == '2') {
			num[2]++;
		}
		else if (line[0] == '0' && line[1] == '3') {
			num[3]++;
		}
		else if (line[0] == '0' && line[1] == '4') {
			num[4]++;
		}
		else if (line[0] == '0' && line[1] == '5') {
			num[5]++;
		}
		else if (line[0] == '0' && line[1] == '6') {
			num[6]++;
		}
		else if (line[0] == '0' && line[1] == '7') {
			num[7]++;
		}
		else if (line[0] == '0' && line[1] == '8') {
			num[8]++;
		}
		else if (line[0] == '0' && line[1] == '9') {
			num[9]++;
		}
		else if (line[0] == '1' && line[1] == '0') {
			num[10]++;
		}
		else if (line[0] == '1' && line[1] == '1') {
			num[11]++;
		}
		else if (line[0] == '1' && line[1] == '2') {
			num[12]++;
		}
	}

	cout << "Total number of birthdays in " << findMonth << ": ";
////////////////////////////////////////////////////////////////////////////////////
	if (findMonth == "January") {
		cout << num[1] << '\n';
		flag[1] = true;
	}
	else if (findMonth == "Feburary") {
		cout << num[2] << '\n';
		flag[2] = true;
	}
	else if (findMonth == "March") {
		cout << num[3] << '\n';
		flag[3] = true;
	}
	else if (findMonth == "April") {
		cout << num[4] << '\n';
		flag[4] = true;
	}
	else if (findMonth == "May") {
		cout << num[5] << '\n';
		flag[5] = true;
	}
	else if (findMonth == "June") {
		cout << num[6] << '\n';
		flag[6] = true;
	}
	else if (findMonth == "July") {
		cout << num[7] << '\n';
		flag[7] = true;
	}
	else if (findMonth == "August") {
		cout << num[8] << '\n';
		flag[8] = true;
	}
	else if (findMonth == "September") {
		cout << num[9] << '\n';
		flag[9] = true;
	}
	else if (findMonth == "October") {
		cout << num[10] << '\n';
		flag[10] = true;
	}
	else if (findMonth == "November") {
		cout << num[11] << '\n';
		flag[11] = true;
	}
	else if (findMonth == "December") {
		cout << num[12] << '\n';
		flag[12] = true;
	}
	else {
		cout << "0" << endl;
		cout << "Month is not found!" << endl;
		chk = false;
	}
	addresstxt.close();
////////////////////////////////////////////////////////////////////////////////////
	if (chk == true)
	{
		ifstream addresstxt2;
		string buf[100]; //������ ������ ������ ����
		int i = 1;
		addresstxt2.open("FriendFile.txt");
		while (getline(addresstxt2, line))
		{
			buf[i] = line; //line�� ���ۿ� ����

			if (line[0] == '0' && line[1] == '1') { //������ ���� �߰��� ��� �ش� string���� ���ۿ��� ���
				if (flag[1] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '2') {
				if (flag[2] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '3') {
				if (flag[3] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '4') {
				if (flag[4] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '5') {
				if (flag[5] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '6') {
				if (flag[6] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '7') {
				if (flag[7] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '8') {
				if (flag[8] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '0' && line[1] == '9') {
				if (flag[9] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '1' && line[1] == '0') {
				if (flag[10] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '1' && line[1] == '1') {
				if (flag[11] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			else if (line[0] == '1' && line[1] == '2') {
				if (flag[12] == true) {
					cout << buf[i - 2] << '\n';
					cout << buf[i - 1] << '\n';
					cout << buf[i] << '\n' << '\n';
				}
			}
			++i;
		}
		addresstxt2.close();
	}
}

int main() {

	bool keepPlaying = true;
	int count = 0;

	while (keepPlaying) {
		cout << "Commands: " << endl;
		displayMenu();

		const int SIZE = 5;
		char menu_choice[SIZE];

		cin.getline(menu_choice, SIZE);

		if (menu_choice[0] == '+')
		{
			addContact();
		}
		else if (menu_choice[0] == 'W')
		{
			writeFile();
		}
		else if (menu_choice[0] == '-')
		{
			deleteContact();
		}
		else if (menu_choice[0] == 'R')
		{
			listAllContacts();
		}
		else if (menu_choice[0] == 'M') {
			searchContact();
		}
		else if (menu_choice[0] == 'Q')
		{
			keepPlaying = false;
		}
		else
		{
			cout << "Command not found!" << endl;
		}
	}
}
