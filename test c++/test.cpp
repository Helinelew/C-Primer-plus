/*#include<iostream>
int main()
{
	using namespace std;
	cout << "come up and C++ me some time.";
	cout << endl;
	cout << "You won't regret it!" << endl;
	return 0;
}
*/
/*#include<iostream>
int main(void)
{
	using namespace std;
	int carrots;
	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch,crunch.Now I have " << carrots << " carrots." << endl;
	return 0;
}
*/
/*#include<iostream>
int main(void)
{
	using namespace std;
	int carrots;
	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}*/
/*#include<iostream>
#include<cmath>
int main(void)
{
	using namespace std;
	double area;
	cout << "Enter the floor area, in square feet,of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " Feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}*/
/*#include<iostream>
void simon(int);
int main(void)
{
	using namespace std;
	simon(3);
	cout << "Pick an integer:";
	int count;
	cin >> count;
	simon(count);
	cout << "done" << endl;
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "simon says touch your tones " << n << " times. " << endl;
}
*/
/*#include<iostream>
int stonetolb(int);
int main(void)
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds. " << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14*sts;
}*/
/*#include<iostream>
int main(void)
{
	using namespace std;
	cout << "name:Helian Element";
	cout << "address:Chronotower Element avenue Chronic star";
	return 0;
}
*/
/*#include<iostream>
int main(void)
{
	using namespace std;
	int x,y;
	cout << "x=";
	cin >> x;
	y = x + 200;
	cout << "y=" << y << endl;
	return 0;
}*/
#include<iostream>
using namespace std;
void print_1();
void print_2();
int main(void)
{
	print_1();
	print_2();
	return 0;
}

void print_1()
{
	cout << "Three blind mice\n";
	cout << "Three blind mice\n";
	cout << "Three blind mice\n";
}

void print_2()
{
	cout << "See how they run\n";
	cout << "See how they run\n";
	cout << "See how they run\n";
}
