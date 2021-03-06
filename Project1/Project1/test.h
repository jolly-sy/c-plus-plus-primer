#pragma once
#ifndef TEST_H
#define TEST_H
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include <cstring>
#include <iterator>
#include <array>
#include <list>
#include <deque>
#include <forward_list>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::forward_list;
using std::array;
using std::list;
using std::deque;
#endif
void test01()
{
	vector<int> v(10, 42);
	for (auto it = v.begin(); it != v.end(); it++) {
		*it = (*it) * 2;
	}
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}

	cout << endl;
}
void test02(string& s)
{
	string::iterator it;
	for (it = s.begin(); it != s.end(); it++)
	{
		if (!isspace(*it)) {
			*it = toupper(*it);
		}
	}
	for (it = s.begin(); it != s.end(); it++)
	{
		cout << *it;
	}
}

//3.24
void test03()
{
	vector<int> v;
	int tmp;
	while (cin >> tmp) {
		v.push_back(tmp);
	}
	vector<int>::iterator pre, next;
	for (pre = v.begin(), next = v.begin() + 1; next != v.end(); pre++, next++) {
		cout << *pre + *next << " ";
	}
}
// 3.24
void test04()
{
	vector<int> v;
	int tmp;
	while (cin >> tmp) {
		v.push_back(tmp);
	}
	vector<int>::iterator front, rear;
	for (front = v.begin(), rear = v.end() - 1; front < rear; front++, rear--) {
		cout << *front + *rear << " ";
	}
}

//3.25
void test3_25() {
	vector<int> v(11,0);
	vector<int>::iterator it = v.begin();
	int grade = 0;
	while (cin >> grade) {
		it += grade / 10;
		*it += 1;
		it = v.begin();
	}
	for (auto c : v) {
		cout << c << " ";
	}
}

//9.43
void test9_43(string& s, string& oldVal, string& newVal)
{
	string::iterator it1 = s.begin();
	int len = oldVal.size();
	for (it1; it1 != s.end() - len; it1++)
	{
		string tempS(it1, it1 + len);
		if (tempS == oldVal)
		{
			it1 = s.erase(it1, it1 + len);
			it1 = s.insert(it1, newVal.begin(), newVal.end());
			it1 += len;
		}
	}
}

//test case
//string s("tho is a test vocabulary, thru is another vocabulary");
//string s1 = "tho";
//string s2 = "though";
//test(s, s1, s2);
//s1 = "thru";
//s2 = "through";
//test(s, s1, s2);
//cout << s << endl;