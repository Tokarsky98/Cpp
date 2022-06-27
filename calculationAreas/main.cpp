#include <iostream>
#include <string>

using namespace std;

void menuBox();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
const double PI = 3.14;
bool isRight(string);

int main()
{
    char zn = 'T';
    int choose;

    do
    {
        system("cls"); // clear screen
        menuBox();

        while(!(cin >> choose)) // jak bedzie poprawna wartosc to zwroci nam 0 czyli falsz, przez co przejdzie dalej program i wyjdzie z petli
        {
           // cout << "stan przed: " << cin.rdstate() << endl; // odczytuje stan strumienia
            cin.clear(); // sprawiamy, ze wejscie jest prawidlowe
           // cout << "stan po: " << cin.rdstate() << endl;
            cin.ignore(1024, '\n');

            system("cls");
            menuBox();
            cout << "You entered an invalid character. Try again" << endl;

        }

        menuDecision(choose);

        do
        {
        cout << "Do you want to continue? (Y/N)" << endl;
        cin >> zn;
        cin.ignore(1024, '\n'); // ignoruje wszystkie znaki oprocz pierwszego

        }while(zn != 'y' && zn != 'Y' && zn != 'n' && zn != 'N');

    }while(zn == 'y' || zn == 'Y');

    return 0;
}

void menuBox()
{
    cout << "Select an option numer: " << endl;
    cout << "1. Area of a Circle" << endl;
    cout << "2. Area of a Square" << endl;
    cout << "3. Area of a Rectangle" << endl;
    cout << "4. Area of a Triangle" << endl;

}

void menuDecision(int choose)
{
    double a, b, h, r;
    switch(choose)
    {
    case 1:
        cout << "Enter a radius: " << endl;
        do {cin >> r;} while(!isRight("Wrong! Enter the radius again:\n"));
        areaCircle(r);
        break;
    case 2:
        cout << "Enter the side of the square: " << endl;
        do {cin >> a;} while(!isRight("Wrong! Give the side of the square again:\n"));
        areaSquare(a);
        break;
    case 3:
        cout << "Enter the height and width of the rectangle: " << endl;
        do {cin >> a >> b;} while(!isRight("Wrong! One of the data is incorrect, try again\n"));
        areaRectangle(a, b);
        break;
    case 4:
        cout << "Enter the width and the base of the triangle: " << endl;
        do {cin >> a >> h;} while(!isRight("Wrong! One of the data is incorrect, try again\n"));
        areaTriangle(a, h);
        break;
    default:
        cout << "You did not select the correct option from the menu";
        break;
    }
}

double areaCircle(double r)
{
    double equalTo = PI * r * r;
    cout << "Circle area of radius: " << r << " is equal to: " << equalTo << endl;
    return equalTo;
}
double areaSquare(double a)
{
    double equalTo = a * a;
    cout << "Area of ​a square with a side: " << a << " is equal to: " << equalTo << endl;
    return equalTo;
}
double areaRectangle(double a, double b)
{
    double equalTo = a * b;
    cout << "A rectangle area of​​ width:" << a << " and height " << b << " is equal to: " << equalTo << endl;
    return equalTo;
}
double areaTriangle(double a, double h)
{
    double equalTo = 0.5 * a * h;
    cout << "A triangle with a base: " << a << " and height " << h << " is equal to: " << equalTo << endl;
    return equalTo;
}
bool isRight(string error_msg)
{
    if(cin.rdstate())
    {
        cin.clear();
        cin.ignore(1024, '\n');

        system("cls");
        menuBox();
        cout << error_msg;
        return false;
    }
   return true;
}
