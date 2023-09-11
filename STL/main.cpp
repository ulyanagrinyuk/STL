#include<iostream>
#include<array>
#include<vector>
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"
#define delimiter "\n---------------------------------------\n"

//#define STL_ARRAY
#define STL_VECTOR

template<typename T> void vector_properties(const std::vector<T>& vec);

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY
	const int N = 5;
	std::array<int, N> arr = { 3, 5, 8, 13, 21 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // STL_ARRAY
#ifdef STL_VECTOR
	std::vector<int> vec = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	try
	{
		for (int i = 0; i < vec.size() * 2; i++)
		{
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	vector_properties(vec);
	vec.push_back(55);
	cout << delimiter << endl;
	//vec.resize(18);
	vec.reserve(120);
	vec.shrink_to_fit();
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec.at(i) << tab;
	}
	vector_properties(vec);
	/*cout << delimiter << endl;
	std::vector<int> vec2(100);
	vector_properties(vec2);
	vec2.push_back(1024);
	vector_properties(vec2);*/	
	cout << delimiter << endl;

	std::vector<double>d_vec = { 2.7, 3.14, 8.3 };
	vector_properties(d_vec);
#endif // STL_VECTOR
}
template<typename T> void vector_properties(const std::vector<T>& vec)
{
	cout << "Size: " << vec.size() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
}

