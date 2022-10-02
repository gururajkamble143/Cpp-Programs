#include<iostream>
using namespace std;
class Fact
{
    public:
    int n, fact = 1;
    Fact(int f)
    {
        n = f;
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }

    Fact(const Fact &f1)
    {
        fact = f1.fact;
    }

    void showFact()
    {
        cout << "The factorial is " << fact;
    }
};

int main()
{
    int f, res;
    cout << "Enter a number: ";
    cin >> f;

    Fact f1(f);
    Fact f2(f1);

    f2.showFact();
    return 0;
}
