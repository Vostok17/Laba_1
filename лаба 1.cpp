#include <iostream>
using namespace std;

int main()
{
	// Визначити, скільки повних годин та повних хвилин пройшло з початку доби до k-ої її секунди
	setlocale(0, "rus");

	cout << "Enter the number of seconds: ";
	int time_sec;	// число секунд k, що пройшли з початку дня
	cin >> time_sec;	// вхідні дані

	int time_min = time_sec / 60;	// визначення к-ть повних хвилин з к-ті секунд
	cout << "Minutes: " << time_min << endl;	// вихідні дані

	int time_hour = time_min / 60;	// визначення к-ть повних годин з к-ті хвилин
	cout << "Hours: " << time_hour << endl;	// вихідні дані

	system("Pause");
}
