#include <iostream>

using namespace std;

int main()
{
   double warehouse[5][5]=
   {
       {1, 3.58, 5, 10, 2},
       {2, 9.61, 5, 25, 5},
       {3, 8.52, 8, 18, 3},
       {4, 10.25, 8, 36, 6},
       {5, 6.17, 23, 4, 1}

   };
    int increment;
    double gross_price, value = 0;

    for(increment=0; increment<=4; increment++)
    {
        gross_price = warehouse[increment][1] + (warehouse[increment][2] / 100 *warehouse[increment][1]);
        value = value + (gross_price * warehouse[increment][3] * warehouse[increment][4]);
        cout << "Commodity ID : " << warehouse[increment][0] << endl;
        cout << "Net price : " << warehouse[increment][1] << endl;
        cout << "Gross price : " << gross_price << " zl" << endl;
        cout << "VAT rate : " << warehouse[increment][2] << "%" << endl;
        cout << "Price for box : " << warehouse[increment][3] * gross_price << " zl" << endl;
        cout << "----------------------------------" << endl;
    }

    cout << "\nWarehouse value : " << value << "zl" << endl;

    return 0;
}
