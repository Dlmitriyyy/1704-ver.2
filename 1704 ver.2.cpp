#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
using namespace std;
void shift(vector<int>& A, int K)
{
	if (K == 0)
	{
		cout << "Зсув вектора не відбувся. " << endl;
	}

	K %= A.size();

	rotate(A.rbegin(), A.rbegin() + K, A.rend());

	cout << endl << endl << "Вектор після зсуву елементів: ";

}
int main()
{
	system("chcp 1251 > nul");
	srand(time(0));

	int N, K;

	cout << "Вкажіть розмір вектора у межах від 1 до 100: ";
	cin >> N;

	while (N <= 0 || N > 100)
	{
		cout << endl << "Помилка, розмір вектора може бути тільки в межах від 1 до 100, спробуйте знову: ";
		cin >> N;
	}

	cout << endl << "Введіть кількість елементів на яку буде зсунутий вектор: ";
	cin >> K;

	if (K == 0)
	{
		cout << endl << "Зсув не вектора не відбувся.";
	}

	while (K < 0)
	{
		cout << endl << "Помилка, зсув не може бути на кількість елементів меншою за 0, спробуйте ще раз: ";
		cin >> K;
	}

	vector <int> A(N);

	cout << endl << "Випадково сгенерований вектор з " << A.size() << " елементами: ";

	for (int a = 0; a < A.size(); a++)
	{
		A[a] = rand() % 201 - 100;
		cout << A[a] << " ";
	}

	shift(A, K);

	for (int a : A)
	{
		cout << a << " ";
	}

	cout << endl;

	return 0;
}