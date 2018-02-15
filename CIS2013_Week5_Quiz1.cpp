#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;
void get_input (int num_1, int num_2);
void prime_num (int num_1, int num_2);


int main (){

using namespace std;
	srand(time(NULL)); 
	double num_1, num_2;
	
	get_input (num_1, num_2);
	prime_num (num_1, num_2);
	
	return 0;
}
	
	void get_input (int num_1, int num_2) {
	
	using namespace std;
	
	cout << "Give me two numbers \n";
		cin >> num_1;
		cin >> num_2;
		
}
	void prime_num (int num_1, int num_2){
		int num1, num2, i, flag;
		cout << "Prime numbers between " << num1 << " and " << num2 << " are: ";
		 //while (num1 < num2)
    //{
        //flag = 0;

        for(i = 1; i <= num1/2; ++i)
        {
            if(num1 % i == 0)
            {
               // flag = 1;
                break;
            }
        }

      //  if (flag == 0)
        //    cout << num1 << " ";

        //++num1;
    }

	//}
