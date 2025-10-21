#include<iostream>
#include<cmath>
using namespace std;
/// <summary>
/// ��������� ������� �������� ��������
/// </summary>
/// <param name="totalDistance">����� ���������� ����������</param>
/// <param name="totalTime">����� ����� � ����</param>
/// <returns>������� �������� ��������</returns>
/// <remarks>���� ����� ����� ����, ���������� -1</remarks>
double CalculateAverageSpeed(double totalDistance, double totalTime)
{
    if (totalTime <= 0)
    {
        return -1; //���������� �����
    }
    return totalDistance / totalTime;
}
int main()
{
    setlocale(0, "");
    //����� ����� ����� ��������� � �����
    double speed = CalculateAverageSpeed(150.0, 2.5);
std:cout << "������� ��������: " << speed << "��/�" << std::endl;

    //������������ � ������� ����������
    double speed2 = CalculateAverageSpeed(300.0, 4.0);
    std::cout << "������� ��������: " << speed2 << "��/�" << std::endl;

    double invalidSpeed = CalculateAverageSpeed(100.0, 0);
    if (invalidSpeed == -1)
    {
        std::cout << "������: ����� ������ ���� ����� ����" << std::endl;
    }
    return 0;
}