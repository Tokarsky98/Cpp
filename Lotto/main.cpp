#include <iostream>
#include <ctime>

using namespace std;

int * lotto(int, int);
const int ballsNumber = 49;
int main()
{
    //srand(time(NULL));

   // int liczba = rand() % 49 + 1; // rand() % 3 + 1 [1, 3]; rand() % 3 [0,2); rand() % 3 + 10 [10, 12)

    //cout << liczba << endl;
    int howMany;

    cout << "Enter how many numbers you want to from " << ballsNumber << " balls" << endl;
    cin >> howMany;

    int *wsk = lotto(ballsNumber, howMany);

    if (wsk != NULL)
    {
      for (int i = 0; i < howMany; i++)
         cout << "ball [" << i + 1 << "] = " << wsk[i] << endl;

      delete[] wsk;
    }
    else
      cout << "Podales wieksza ilosc kulek niz jest dozwolona czyli " << ballsNumber << endl;


    system("pause");
    return 0;
}
int * lotto(int total_balls, int balls_to_allot)
{
     if (total_balls < balls_to_allot)
       return NULL;

     srand(time(NULL));

     int *balls = new int[balls_to_allot];

     for (int i = 0; i < balls_to_allot; i++) // i = 1;
     {
         balls[i] = rand() % total_balls + 1;

         for (int j = 0; j < i + 1; j++) //j = 1; warunek = 2;
         {
             if (balls[i] == balls[j] && i != j)
             {
                i--;
                break;
             }

         }
     }

     //delete[] balls;

     return balls;
}
