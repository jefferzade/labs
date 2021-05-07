#include <iostream>
using namespace std;
class CoffeeGrinder
{
private:
    bool CheckVoltage()
    {
        return false;
    }

public:
    void Start()
    {
        bool voltageisnormal = CheckVoltage();
        if (voltageisnormal)
        {
            cout << "PawPaw!" << endl;
        }
        else
        {
            cout << "Beep Beep!!!" << endl;
        }
    }
};

int main()
{
    CoffeeGrinder a;
    a.Start();
}


