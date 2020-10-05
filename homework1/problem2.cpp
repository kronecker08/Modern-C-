#include <iostream>
using namespace std;
int main()
{
	int guess = 0;
	int num;
	cout<<"This is the number guessing game"<<endl;
	cout<<"Enter the number"<<endl;
	cin>>num;
	guess = rand()%100;
	while(1)
	{
		if(num>guess){
			cout<<"It is large"<<endl;
			cout<<"Enter number again"<<endl;
			cin>>num;
		}
		else if (num<guess){
			cout<<"It is less than number"<<endl;
			cout<<"Enter number again"<<endl;
			cin>>num;

		}
		else{
			cout<<"You have guessed it right"<<endl;
			break;
		}
	}

}