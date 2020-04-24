#include <iostream>
#include <typeinfo>
using namespace std;

int DigitSum(int n)
{
    //write your recursive code here
	if (n == 0 )
	{
		return n;
	}

	return n % 10 + DigitSum(n/10);
}

int main(){
	int sum;
	int n1 = 23;
    cout << "Finding the sum of digits of the number"<<n1<<endl;
    

    sum = DigitSum(n1);//call the function for calculation

    cout<<" The Sum of digits of " << n1 << " is: " << sum<<endl;;

    return sum;
}



// g++ hw.cpp -o hw
// ./hw
// 2*2*4