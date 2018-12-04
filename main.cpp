#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){
	setlocale(LC_ALL, "");
	ifstream in("input.txt");
	string word;//слово
	cout << "¬ведите слово: ";
	string search;
	cin >> search;
	string line;//предложение
	stringstream ss;	//строковый поток
	int cnt = 1;//счЄтчик
	while(getline(in, line)){//считываем по предложению
		stringstream tmp;
		tmp << line;
		while(tmp >> word){//разбиваем на слова
			if(word == search){//если нашли слово
			   ss << line <<'\n';
			}
		}
	}
	cout << ss.str();
	in.close();//закрываем файл										   
	system("pause>>void");

}