#include <iostream>
using namespace std;
struct Time {
    int hours;
    int minutes;
    int seconds;
    void input() {
        cout << "Введите часы ";
        cin >> hours;
        cout << "Введите минуты ";
        cin >> minutes;
        cout << "Введите секунды ";
        cin >> seconds;

        normalTime();
    }
    void displaySeconds(){
        cout << "Время в секундах " << (hours * 3600 + minutes * 60 + seconds) << " секунд" << endl;
    }
    void normalTime() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
               
    }
    Time plus( Time& t2)  {
        Time result;
        result.hours = hours + t2.hours;
        result.minutes = minutes + t2.minutes;
        result.seconds = seconds + t2.seconds;
        result.normalTime();
        return result;
    }
    Time subtract(Time& t2) {
        Time result;
        result.hours = hours - t2.hours;
        result.minutes = minutes - t2.minutes;
        result.seconds = seconds - t2.seconds;
        result.normalTime();
        return result;
    }
};
int main() {
    system("chcp 1251");
    Time time1, time2, result;
    cout << "Введите первое время " << endl;
    time1.input();

    cout << "Введите второе время " << endl;
    time2.input();
    cout << "Первое ";
    time1.displaySeconds();
    cout << "Второе ";
    time2.displaySeconds();
    result = time1.plus(time2);
    cout << "Результат сложения ";
    result.displaySeconds();
    result = time1.subtract(time2);
    cout << "Результат вычитания ";
    result.displaySeconds();
}