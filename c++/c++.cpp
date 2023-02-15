#include <iostream>
#include <string>
#include <iomanip>
#include<vector>
#include <algorithm>
#include <sstream>
//int topla(int a, int b) {
//    return a + b;
//}
//
//int getir(int* tplmgtr)(int, int)){
//    int a = 15;
//    int b = 10;
//    int c = tplmgtr(a, b);
//    return c;
//
//
//}
//
/*int add(int a, int b) { std::cout << a + b;
return 0;
}  //0
int sub(int a, int b) { std::cout << a - b;
return 0;
}  //1
int mul(int a, int b) { std::cout << a * b;
return 0;
}  //2
int divs(int a, int b) {
	std::cout << a / b;
	return 0;}	  //3

int main()
{
	int ch, a, b;
	int (*fptr[10])(int, int) = {add,sub,mul,divs};
	a = 0;
	b = 0;

	std::cout << "enter choise";
	std::cin >> ch;
	std::cout << "enter a,b";
	std::cin >> a>> b;
	(*fptr[ch])(a, b);
}*/
/*int sumOfIntegers(const std::string& str) {
	int sum_num = 0;
	std::string temp_str;

	for (int i = 0; i <str.length(); i++)
	{
		if (isdigit(str[i]))
		{
			temp_str.push_back(str[i]);

			for (int j = i+1; j < str.length(); j++)
			{
				if (j >= str.length())
				{
					break;
				}
				else if (isdigit(str[j]))
				{
					temp_str.push_back(str[j]);
					i = j;
				}
				else
				{
					break;
				}
			}

			sum_num += stoi(temp_str);
			temp_str.clear();
		}
	}
	return sum_num;
}*/
//https://www.codewars.com/kata/5ba178be875de960a6000187/solutions/cpp
/*unsigned long findLowestInt(unsigned int k1) {
	int k2 = k1 + 1;
	long result = 1;
	while (true)
	{
		std::string str1 = std::to_string(k1 * result);
		std::string str2 = std::to_string(k2 * result);
		std::sort(str1.begin(), str1.end());
		std::sort(str2.begin(), str2.end());
		std:stoi(str1);
		std::stoi(str2);

		if (str1 == str2)
		{
			return result;
		}
		result++;
	}
	return 0;
}*/
//https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9/train/cpp
/*int find_short(std::string str)
{
	int l = 10;
	std::string word;
	std::stringstream ss(str);
	while (getline(ss,word,' '))
	{
		if (word.length()<l)
		{
			l = word.length();
		}
	}
	return l;
}
int main() {
	std::cout << find_short("bitcoin take over the world maybe who knows perhaps");

}*/
/*std::string toBinary(unsigned long long n)
{
	std::string r;
	while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
	return r;
}
unsigned int countBits(unsigned long long n) {
	std::string r;
	while (n != 0) { r = (n % 2 == 0 ? "0" : "1") + r; n /= 2; }
	return count(r.begin(),r.end(),1);
}*/
//https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/solutions/cpp
/*std::vector<std::string> solution(const std::string& s)
{
	std::string temp = s, piece = "";
	std::vector<std::string> dou = {};
	if (s.size() % 2 == 1) {
		temp+= '_';
	}
	for (int i = 0; i < temp.size(); i++)
	{
		piece += temp[i];
		if (piece.size()==2)
		{
			dou.push_back(piece);
			piece = "";
		}
	}
	return dou;

}*/

void main()
{
	int ch[2] = { 1 };
	int* ptr = &ch[0];
	int* ptr1 = &ch[1];
	std::cout << (ptr - ptr1);

}
