//2013112136 ��ǻ�Ͱ��а� ������
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;

void displayMenu()
{
	cout << "P: Create a person record of the specified name" << '\n'; 
	cout << "F: Record that the two specified people are friends" << '\n'; //ok
	cout << "U: Record that the two specified people are no longer friends" << '\n'; 
	cout << "L: Print out the friends of the specified person" << '\n'; //ok
	cout << "Q: Check whether the two people are friends" << '\n'; //ok
	cout << "X: terminate the program" << '\n'; //ok
}

int main() {
	vector <string> v; //person�� ������ vector v
	vector<pair<string, string>> p; //person���� ģ�� ���踦 ������ vector p
	vector <string>::iterator iter_v; //v�� �ݺ���
	vector<pair<string, string>>::iterator iter_p; //p�� �ݺ���
	string testData, testData2; //person �Է°� 
	char cmd;
	bool flag = false; //ģ������ �ƴ��� �Ǻ��� flag

	do
	{
		flag = false;

		displayMenu();                     // Output list

		cout << endl << "Command: ";                  // Read command
		cin >> cmd;
		if (cmd == 'P' || cmd == 'L')
			cin >> testData;
		else if (cmd == 'F' || cmd == 'U' || cmd == 'Q')
			cin >> testData >> testData2;

		switch (cmd)
		{
			case 'P':
				v.push_back(testData); //v ���Ϳ� person ����
				break;

			case 'F':             
				iter_v = find(v.begin(), v.end(), testData); //v ���Ϳ� person1�� �ִ��� �˻�
				if(iter_v == v.end()){ 
					cout << "Person is missed" << '\n';
					break;
				}

				iter_v = find(v.begin(), v.end(), testData2); //v ���Ϳ� person2�� �ִ��� �˻�
				if (iter_v == v.end()) {
					cout << "Person is missed" << '\n';
					break;
				}

				p.push_back(pair<string, string>(testData, testData2)); //�� �� ���� ��� p ���Ϳ� pair�� ����
				break;

			case 'U':                               
				for (iter_p = p.begin(); iter_p != p.end(); iter_p++) { 
					if (iter_p->first == testData && iter_p->second == testData2) { //p ���Ϳ� �� person�� pair�� �����ҽ�, p ���Ϳ��� ����
						iter_p = p.erase(iter_p);									//p1,p2�� �Է½� ����
						break;
					}

					if (iter_p->second == testData && iter_p->first == testData2) { //p2,p1���� �Է½� ����
						iter_p = p.erase(iter_p);
						break;
					}
				}
				break;

			case 'L':                                
				for (iter_p = p.begin(); iter_p != p.end(); iter_p++) { //p ���Ϳ��� p1�̶� pair�� ���� ��� ���
					if (iter_p->first == testData) {
						cout << iter_p->second << " ";
					}
					if (iter_p->second == testData) {
						cout << iter_p->first << " ";
					}
				}
				cout << '\n';
				break;
	
			case 'Q':
				for (iter_p = p.begin(); iter_p != p.end(); iter_p++) { 
					if (iter_p->first == testData && iter_p->second == testData2) {  //p ���Ϳ��� p1,p2�� ģ���� ����� yes ���
						cout << "Yes" << '\n';
						flag = true; //flag �� true�� ����
						break;
					}

					if (iter_p->first == testData2 && iter_p->second == testData) { //p ���Ϳ��� p2,p1�� ģ���� ����� yes ���
						cout << "Yes" << '\n';
						flag = true;
						break;
					}
				}
			
				if (flag == false) { //�ƹ��͵� �߰� ������ ��
					cout << "No" << '\n';
				}
				break;

			case 'X':                   // Quit test program
				break;

			default:                               // Invalid command
				cout << "Inactive or invalid command" << endl;
				break;
		}
	} while (cmd != 'X');
}
