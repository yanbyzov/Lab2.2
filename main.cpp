#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//�����
	cout << "������� �����: ";
	string search;
	cin >> search;
	string line;//�����������
	stringstream ss;	//��������� �����
	int cnt = 1;//�������
	while(getline(in, line)){//��������� �� �����������
		stringstream tmp;
		tmp << line;
		while(tmp >> word){//��������� �� �����
			if(word == search){//���� ����� �����
			   ss << line <<'\n';
			}
		}
	}
	cout << ss.str();
	in.close();//��������� ����										   
	system("pause>>void");

}