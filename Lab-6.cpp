//Celeste Going
//Lab 6
/*This program allows user to choose one of three functions;
One that lists prime numbers up to a entered value, a
weighted coin toss simulation, or a program that
determines if an integer is even or odd. After the user
chooses their fuction and enters the prompted data,
the program prints the result.*/

#include <iostream>
#include <cstdlib>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void primeNumbers(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << endl;
}

void weightedCoins(int numberOfTosses)
{
    int numberOfHeads = 0;
    int numbeOfTails = 0;
    double headsChance = 0.4;

    for (int i = 0; i < numberOfTosses; i++)
    {
        double randomNum = ((double)rand() / (double)RAND_MAX);
        if (randomNum > headsChance)
        {
            numberOfHeads++;
        }
        else
        {
            numbeOfTails++;
        }
    }

    cout << "Number of times coin landed on heads: " << numberOfHeads << endl;
    cout << "Number of times coin landed on tails: " << numbeOfTails << endl;
    cout << "Percentage of time coin landed on heads: " << ((double)(numberOfHeads) / (double)(numberOfTosses)) * 100 << "%" << endl;
    cout << endl;
}

void evenOdd(int x)
{
    if (x % 2 == 0)
    {
        cout << x << " is even." << endl;
        cout << endl;
    }
    else
    {
        cout << x << " is odd." << endl;
        cout << endl;
    }
}

int main()
{
    cout << "Enter 1 for prime function, 2 for coin toss, 3 for even/odd function: ";
    int code;
    cin >> code;

    if (code == -1)
        return 0;

    while (code != -1)
    {

        switch (code)
        {
        case 1:
            cout << "Enter an integer: ";
            int n;
            cin >> n;
            primeNumbers(n);
            break;

        case 2:

            cout << "Enter number of tosses of coins: ";
            int numberOfTosses;
            cin >> numberOfTosses;
            weightedCoins(numberOfTosses);
            break;

        case 3:
            int x;
            cout << "Enter an integer: ";
            cin >> x;
            evenOdd(x);
            break;

        default:
            cout << "Invalid. Please enter 1, 2, or 3. " << endl;
            cout << endl;
        }
        cout << "Enter 1 for prime function, 2 for coin toss, 3 for even/odd fuction: ";
        cin >> code;
    }

    cout << endl;
    system("PAUSE");
    return 0;
}