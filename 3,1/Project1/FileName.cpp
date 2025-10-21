#include<iostream>
#include<cmath>
using namespace std;
/// <summary>
/// вычисляет среднюю скорость движения
/// </summary>
/// <param name="totalDistance">общее пройденное расстояние</param>
/// <param name="totalTime">общее время в пути</param>
/// <returns>средняя скорость движения</returns>
/// <remarks>если время равно нулю, возвращает -1</remarks>
double CalculateAverageSpeed(double totalDistance, double totalTime)
{
    if (totalTime <= 0)
    {
        return -1; //невалидное время
    }
    return totalDistance / totalTime;
}
int main()
{
    setlocale(0, "");
    //здесь будет видна подсказка с кодом
    double speed = CalculateAverageSpeed(150.0, 2.5);
std:cout << "средняя скорость: " << speed << "км/ч" << std::endl;

    //тестирование с другими значениями
    double speed2 = CalculateAverageSpeed(300.0, 4.0);
    std::cout << "средняя скорость: " << speed2 << "км/ч" << std::endl;

    double invalidSpeed = CalculateAverageSpeed(100.0, 0);
    if (invalidSpeed == -1)
    {
        std::cout << "ошибка: время должно быть более нуля" << std::endl;
    }
    return 0;
}