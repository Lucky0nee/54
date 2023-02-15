#include <iostream>
#include <vector>
using namespace std;

void operator*(vector<char> arr1, vector<char> arr2) {
	vector<char> FinalArr;
	for (int i = 0; i < arr1.size(); i++) {
		for (int j = 0; j < arr2.size(); j++) {
			if (arr1[i] == arr2[j] && arr1[i] != NULL && arr2[j] != NULL) {
				FinalArr.push_back(arr2[j]);
				arr1[i] = NULL;
				arr2[j] = NULL;
			}
		}
	}
	for (int i = 0; i < FinalArr.size(); i++)
		cout << FinalArr[i];
}

void stringToCharArr(string str, vector<char> &arr) {
	for (int i = 0; i < str.size(); i++)
		arr.push_back(str[i]);
}

int main() {
	vector<char> arr1{}, arr2{};
	string str; 

	cout << "Write word: "; cin >> str;
	stringToCharArr(str, arr1);
	cout << "Write another word: "; cin >> str;
	stringToCharArr(str, arr2);

	arr1*arr2;

	return 0;
}

/*
Створіть функцію, яка створює рядок, що містить схрещування двох рядків, тобто
спільні символи для обох рядків. Наприклад, результат схрещування "sdqcg" і
"rgfas34" буде "sg". Перевантажте оператор * (множення) для реалізації функції.
*/
