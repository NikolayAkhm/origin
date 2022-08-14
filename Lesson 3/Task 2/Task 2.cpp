
#include <iostream>
#include <string>

class Counter
{
private:
	int count;
public:
	void set_count(int count)
	{
		this->count = count;
	}
	void count_inc()
	{
		count = ++count;
	}
	void count_dec()
	{
		count = --count;
	}
	int get_count()
	{
		return count;
	}
	Counter() {};
	Counter(int count)
	{
		this->count = count;
	}

};

int main()
{
	std::cout << " Do you want to specify an initial counter value? \n";
	std::cout << " Enter 'yes' or 'no': " ;
	std::string ans;
	std::cin >> ans;
	bool exit = true;
	Counter counter(1);
	while (exit)
	{
		if (ans == "yes")
		{
			int count;
			std::cout << " Set the starting counter value: ";
			std::cin >> count;
			counter.set_count(count);
			exit = false;
		}
		else
		{
			if (ans == "no")
			{
				exit = false;
			}
			else
			{
				std::cout << " \n Inptu error \n";
				std::cin >> ans;
				exit = true;
			}
		}
	}
		exit = true;
		while (exit)
		{
		std::cout << "\n enter the command (+, -, = or x):";
		char command;
		std:: cin.clear();
		std::cin >> command;
		switch (command)
			{
			case '+':
				counter.count_inc();
				exit = true;
				break;
			case '-':
				counter.count_dec();
				exit = true;
				break;
			case '=':
				std::cout << counter.get_count();
				exit = true;
				break;
			case 'x':
				std::cout << counter.get_count() << " \n";
				exit = false;
				break;
			default:
				std::cout <<" input error ";
				exit = true;
				break;
			}
		}
	return 0;
}
