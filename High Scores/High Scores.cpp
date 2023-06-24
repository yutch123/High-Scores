// Программа High Scores
// Демонстрирует работу с алгоритмами 

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <algorithm> // использование алгоритмов из библеотеки STL;

using namespace std;

int main()
{
	vector<int>::const_iterator iter;
	cout << "Creating a list of scores: ";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);
	cout << "\nHigh Scores:\n";
	for (iter = scores.begin(); iter != scores.end(); ++iter) 
	{
		cout << *iter << endl; // Отображение содержимого вектора score
	}
	cout << "\nFinding a score. "; 
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score); // Выполняем поиск по значению в векторе (указываем начальную точку, конечную точку и искомое значение)
	if (iter != scores.end()) // было ли найдено значение score
		// итератор iter будет указывать на первый экземпляр значения score
	{
		cout << "Score found.\n";
	}
	else
	{
		cout << "Score not found.\n";
	}
	cout << "\nRandomizer scores. ";
	srand(static_cast<unsigned int>(time(0))); // посев генератора случайных чисел
	random_shuffle(scores.begin(), scores.end()); // переупорядочиваю список рекордов случайным образом
	cout << "\nHigh Scores: \n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	cout << "\nSorting scores. ";
	sort(scores.begin(), scores.end()); // sort - сортировка алгоритма и вывод
	cout << "\nHigh Scores: \n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}
	return 0;

}

