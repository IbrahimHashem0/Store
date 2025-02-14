#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Hi , What is your name ?\n";
	string customer_name;

	bool test_name = true;
	while (test_name)
	{
		getline(cin,customer_name);
		int length_of_name = customer_name.length();
		for (int a = 0; a < length_of_name; ++a)
		{
			if (customer_name[a] >= 'A' && customer_name[a] <= 'Z' || customer_name[a] >= 'a' && customer_name[a] <= 'z' || customer_name[a] == ' ')
				test_name = false;
			else
			{
				test_name = true;
				break;
			}
		}
		if (test_name)
			cout << "Write your name correctly , Please\n";
	}

	cout << "Dear " << customer_name << " , Welcome to our YZIA store\n";

	cout << "We have many catagories, let me explain them to you : \n";
	string catagories[5] = { "Laptops and Smart Phones","Electrical appliances","Children's toys","Clothes","Shoes" };
	bool buyagain = true;
	while (buyagain)
	{
		for (int i = 0; i < 5; ++i)
			cout << i + 1 << "- " << catagories[i] << "\n";

		cout << "Choose the number of catagory that you want to buy of them to help you.\n";
		int number_of_catagory;
		cin >> number_of_catagory;

		cout << "Ok , We have many ptoducts of " << catagories[number_of_catagory - 1] << " : \n";
		// Laptops and Smart Phones
		if (number_of_catagory == 1)
		{
			string products_of_laptops_catagory[4] = { "HP","DELL","Lenovo","ASUS" };
			string products_of_phones_catagory[4] = { "Apple" , "Oppo" , "Samsung" , "Xiaomi" };

			cout << "Laptops :\n";
			for (int i = 0; i < 4; ++i)
				cout << i + 1 << "- " << products_of_laptops_catagory[i] << "\n";
			cout << "Smart Phones :\n";
			for (int i = 0; i < 4; ++i)
				cout << i + 5 << "- " << products_of_phones_catagory[i] << "\n";

			cout << "Choose the number of product that you want to buy.\n";
			int number_of_product;
			cin >> number_of_product;

			bool test_num = true;
			while (test_num)
			{
				if (number_of_product > 8 || number_of_product < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			cout << "Do you want to buy anything else ?\n" << "1- Yes\n" << "2- No\n";
			int buy_anything_else;
			cin >> buy_anything_else;
			if (buy_anything_else == 2)
				buyagain = false;
		}

		if (number_of_catagory == 2)
		{
			string products_of_catagory[4] = { "Refrigerators","Washing machines","Stoves","TV screens" };
			for (int i = 0; i < 4; ++i)
				cout << i + 1 << "- " << products_of_catagory[i] << "\n";

			cout << "Choose the number of product that you want to buy.\n";
			int number_of_product;
			cin >> number_of_product;

			bool test_num = true;
			while (test_num)
			{
				if (number_of_product > 4 || number_of_product < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			cout << "Do you want to buy anything else ?\n" << "1- Yes\n" << "2- No\n";
			int buy_anything_else;
			cin >> buy_anything_else;
			if (buy_anything_else == 2)
				buyagain = false;
		}

		//Children's toys
		if (number_of_catagory == 3)
		{
			string products_of_catagory[4] = { "Teddy bears","Building Blocks","Dolls","Educational Toys" };
			for (int i = 0; i < 4; ++i)
				cout << i + 1 << "- " << products_of_catagory[i] << "\n";

			cout << "Choose the number of product that you want to buy.\n";
			int number_of_product;
			cin >> number_of_product;

			bool test_num = true;
			while (test_num)
			{
				if (number_of_product > 4 || number_of_product < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			cout << "Do you want to buy anything else ?\n" << "1- Yes\n" << "2- No\n";
			int buy_anything_else;
			cin >> buy_anything_else;
			if (buy_anything_else == 2)
				buyagain = false;
		}

		//Clothes
		if (number_of_catagory == 4)
		{
			string products_of_catagory[8] = { "T-Shirts","Shirt","Jeans","Shorts","Jackets","Coat","Socks","Pyjamas" };
			for (int i = 0; i < 8; ++i)
				cout << i + 1 << "- " << products_of_catagory[i] << "\n";

			cout << "Choose the number of product that you want to buy.\n";
			int number_of_product;
			cin >> number_of_product;

			bool test_num = true;
			while (test_num)
			{
				if (number_of_product > 8 || number_of_product < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			cout << "Do you want to buy anything else ?\n" << "1- Yes\n" << "2- No\n";
			int buy_anything_else;
			cin >> buy_anything_else;
			if (buy_anything_else == 2)
				buyagain = false;
		}

		//Shoes
		if (number_of_catagory == 5)
		{
			string products_of_catagory[5] = { "Running Shoes","Sneakers","Slippers","Boots","Sandals " };
			for (int i = 0; i < 5; ++i)
				cout << i + 1 << "- " << products_of_catagory[i] << "\n";

			cout << "Choose the number of product that you want to buy.\n";
			int number_of_product;
			cin >> number_of_product;

			bool test_num = true;
			while (test_num)
			{
				if (number_of_product > 5 || number_of_product < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			string brands_Shoses[3] = { "Nike","Adidas","Puma" };
			cout << "Choose the brand you want :\n";
			for (int i = 0; i < 3; ++i)
				cout << i + 1 << "- " << brands_Shoses[i] << "\n";
			int number_of_brand;
			cin >> number_of_brand;

			test_num = true;
			while (test_num)
			{
				if (number_of_brand > 3 || number_of_brand < 1)
					cout << "Try again";
				else
					test_num = false;
			}

			cout << "Do you want to buy anything else ?\n" << "1- Yes\n" << "2- No\n";
			int buy_anything_else;
			cin >> buy_anything_else;
			if (buy_anything_else == 2)
				buyagain = false;
		}
	}

	cout << "Thank you, our dear customer, for dealing with us, and we hope that we will live up to your expectations\nWe hope to see you again , MR." << customer_name;
	return 0;
}
