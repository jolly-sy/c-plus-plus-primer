#include "test.h"

void test(string& s, string& oldVal, string& newVal)
{
	string :: iterator it1 = s.begin();
	int len = oldVal.size();
	for (it1; it1 != s.end() - len; it1++)
	{
		string tempS(it1, it1 + len);
		if (tempS == oldVal)
		{
			it1 = s.erase(it1, it1+len);
			it1 = s.insert(it1, newVal.begin(),newVal.end());
			it1 += len;
		}
	}
}
int main() 
{
	string s("tho is a test vocabulary, thru is another vocabulary");
	string s1 = "tho";
	string s2 = "though";
	test(s, s1, s2);
	s1 = "thru";
	s2 = "through";
	test(s, s1, s2);
	cout << s << endl;

	system("pause");
	return 0;
}