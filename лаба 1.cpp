#include <iostream>
using namespace std;

int main()
{
	// ���������, ������ ������ ����� �� ������ ������ ������� � ������� ���� �� k-� �� �������

	cout << "Enter the number of seconds: ";
	int time_sec;	// ����� ������ k, �� ������� � ������� ���
	cin >> time_sec;	// ����� ���

	int time_min = time_sec / 60;	// ���������� �-�� ������ ������ � �-� ������
	cout << "Minutes: " << time_min << endl;	// ������ ���

	int time_hour = time_min / 60;	// ���������� �-�� ������ ����� � �-� ������
	cout << "Hours: " << time_hour << endl;	// ������ ���

	system("Pause");
}