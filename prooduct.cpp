#include <iostream>
using namespace std;

class Product
{
    string name;
    int monthlySales[12];

public:
    void getData()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter sales for 12 months:" << endl;

        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlySales[i];
        }
    }

    void display()
    {
        int totalQuantity = 0;
        int totalBills = 0;

        cout << "\nProduct Name: " << name << endl;
        cout << "Monthly Sales: ";

        for (int i = 0; i < 12; i++)
        {
            cout << monthlySales[i] << " ";
            totalQuantity += monthlySales[i];

            if (monthlySales[i] > 0)
                totalBills+=monthlySales[i];
        }

        cout << "\nTotal Quantity Sold: " << totalQuantity << endl;
        cout << "Total Bills: " << totalBills << endl;
    }
};

int main()
{
    Product p;

   p.getData();
    

    cout << "\n\n----- PRODUCT DETAILS -----\n";

    p.display();

    return 0;
}
