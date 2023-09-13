#include<iostream>
#include<map>
#include<set>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"


//#define STL_SET
//#define STL_MAP

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_SET
	std::multiset<int> set = {50, 25, 75, 16, 32, 64, 91};
	for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
#endif // STL_SET
#ifdef STL_MAP
	std::multimap<int, std::string> week =
	{
		std::pair<int, std::string>(0, "Sundey"),
		std::pair<int, std::string>(1, "Mondey"),
		std::pair<int, std::string>(2, "Tuesday"),
		{3, "Wenesday"},
		{3, "Wenesday"},
		{3, "Wenesday"},
		{3, "Wenesday"},
		{3, "Wenesday"},
		{4, "Thursday"},
		{5, "Friday"},
		{6, "Saturday"},
	};

	for (std::map<int, std::string>::iterator it = week.begin(); it != week.end(); ++it)
	{
		cout << it->first << tab << it->second << endl;
	}
#endif // STL_MAP


}