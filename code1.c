// data + process
// access specifier/modifier
// private, public
// encaptulation
// data - attributes
// methods - process
// input - setter
// output - getter
// data hiding process

#include<iostream>
#include<string>
using namespace std;

// class ->
// static

// 1 to 10
// 1 to n

class Bank
{
    private :
    	// global variable
    int balance;//4 bytes
    static string date;//24 bytes

    public :
    void setter()
    {
        cout << "Enter bank balance : ";
        cin >> balance;
    }

    void getter()
    {
        cout << endl << date << endl <<"Bank Balance : " << balance << endl << endl;
    }
	
	// this keyword
	// to define global variable.
    void useOfThis(int balance) // local varaible
    {
    	this->balance = balance;
        cout << this->balance;
    }
    
    void newNiraj()
    {
    	cout << endl << balance;
	}

};


string Bank::date = "23-11-2023";

int main()
{

    int x[10];
    Bank ex[10];

    ex[0].useOfThis(2000);
    ex[1].newNiraj(2000);
    
    
    return 0;
}
