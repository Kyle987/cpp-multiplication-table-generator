#include <iostream>
using namespace std;

int main()
{
	int num1;
	char choice;

	do
	{
		do
		{
			cout << "Enter a number to be entered as multiplication table: ";
			cin >> num1;
			if (cin.fail())
			{
				cout << "\nError! Please enter a valid number.\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			else
			{
				break;
			}
		} while (true);

		cout << "-= Multiplication of " << num1 << " =-\n\n";

		for (int num2 = 1; num2 <= 10; num2++)
		{
			int result = num2 * num1;
			cout << num1 << " x " << num2 << " = " << result << "\n";
		}

		do
		{
			cout << "\nDo you want to enter a number again? (y/n): ";
			cin >> choice;
			cout << "\n";

			if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
			{
				cout << "Error! Please enter a valid choice. (y/n)";
			}
			else if (choice == 'n' || choice == 'N')
			{
				cout << "Exiting...";
			}

		} while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

	} while (choice == 'y' || choice == 'Y');

	return 0;
}