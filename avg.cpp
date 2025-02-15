#include <iostream>
using namespace std;
int main()
{
    int math, eng, sci, total, avg;
    cout << " enter three sub marks" << endl;
    cin >> math >> eng >> sci;
    total = math + eng + sci;
    cout << total << endl;
    avg = total / 3;
    cout << "avg = " << avg << endl;
    if (avg >= 60)
    {
        cout << " first " << endl;
    }
    else if (avg >= 50)
    {
        cout << "second " << endl;
    }
    else if (avg >= 40)
    {
        cout << "thered" << endl;
    }
    else
        cout << "fail" << endl;
    return 0;
}