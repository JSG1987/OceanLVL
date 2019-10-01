#include<iostream>
#include<fstream>
#include<iomanip>


using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("results.txt");

	
	float oceanLVL = 1.5;
	int N;
	float calc= 0;
	
	cout << "enter the number of years \n";
	outfile<< "enter the number of years \n";
	cin >> N;
	
	cout << "||ocean-LvL||" <<"============="<< "||years||\n";
	outfile<< "||ocean-LvL||" << "=============" << "||years||\n";
	for (float j = 1; j <= N; j++)
	{
		float oceanLVL = 1.5;
		calc =j*oceanLVL;
		cout << fixed << setprecision(1);
		cout<<"||" << calc << "      ||*************||" << j <<"  ||"<<endl;
		outfile<<"||" << calc << "      ||*************||" << j << "  ||" << endl;

	}
	




	system("PAUSE");
	return 0;
}