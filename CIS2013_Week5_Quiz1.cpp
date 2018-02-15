
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
void get_input (int& num_1, int& num_2);
void prime_num (int& num_1, int& num_2);
int get_lcm (int one, int two);

int main (){

	srand(time(NULL)); 
	int num1, num2;
	int lcm;
	
	
	get_input (num1, num2);
	lcm = get_lcm (num1, num2);
	prime_num (num1, num2);
	
	
	return 0;
}
	
void get_input (int& num_1, int& num_2) {
	
	
	cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		
}
int get_lcm (int one, int two)
{
	int one_counter = one;
	int two_counter = two;
	 
	while(one != two) {
		if(one<two){
			one +=one_counter;
		
		}else { 
			two += two_counter;
		}
	}
	cout << "The LCM is " << two << endl;
	return two;
	//also can put return one;
}

	void prime_num (int& num_1, int& num_2){
	
	
		cout << "Prime numbers between " << num_1 << " and " << num_2 << " are: ";
		cout << endl;
		

        for(int i = num_1; i <= num_2; i++)
        {
			bool prime=true;
			for (int p=2; p<i; p++)
			{
				if (i%p==0)
					prime=false;
			}
		   
		   if (prime) { cout<< i << "  is prime " << endl;
			   
		   }
            }
        }

   
    


