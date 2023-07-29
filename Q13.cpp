/* Write a C++ Program to create a menu driven program for to perform the following
operations
1. Sum of Digit
2. Armstrong or Not
3. Palindrome or Not
4. Multiplication of Digit */

// pallindrome, armstrong, even odd, factorization
#include <iostream>
using namespace std;
int pallindrome(int a);
void armstrong(int v);
void evenODD(int n1);
void factorization(int num);
void sumOFdigits(int n);
int multiplicationOfDigits(int num1);

int main(){

    int a;
    char choice;
    cout<< "Enter Integer One: ";
    cin>> a;
    cout<< "The Integer is: " << a << "\n";
    cout << "Enter P to check Pallindrome Number" << endl;
     cout << "Enter A to check Armstrong Number" << endl;
      cout << "Enter F to check Factorization Number" << endl;
       cout << "Enter S to do SUM of DIGITS Number" << endl;
        cout << "Enter E/O to check EVEN ODD Number" << endl;
         cout << "Enter M to do MULTIPLICATION of DIGITS" << endl;

         cout << "Enter a Choice: ";
        cin >> choice;

        switch (choice) {
            case 'P':  
                pallindrome(a); 
                break;
            
            case 'p':  
                pallindrome(a); 
                break;

            case 'A':  
                armstrong(a); 
                break;

            case 'a':  
                armstrong(a); 
                break;

            case 'F':  
                factorization(a); 
                break;

            case 'f':  
                factorization(a); 
                break;

            case 'S':  
                sumOFdigits(a); 
                break;

            case 's':  
                sumOFdigits(a); 
                break;

            case 'E':  
                evenODD(a); 
                break;

            case 'e':  
                evenODD(a); 
                break;
            
            case 'O':  
                evenODD(a); 
                break;

            case 'o':  
                evenODD(a); 
                break;
            
            case 'M':
                cout << "Multiplication of digits: " << multiplicationOfDigits(a) << endl;
                break;
            
            case 'm':
                cout << "Multiplication of digits: " << multiplicationOfDigits(a) << endl;
                break;
        }
    
}
int pallindrome(int a)
{
    cout<< "FOR CHECKING PALLINDROME NUMBER: ";

    int r,sum=0,temp;
    temp = a;

    while (a>0)
    {
    r=a%10;
    sum = (sum*10)+r;
    a=a/10;
    }
    if (temp == sum) 
        {
        cout<<"Pallindrome Number" << "\n";
        return 0;
        }
    
    cout<< "Not a Pallindrome Number" << "\n";
    return 1;
}

void armstrong(int v)
{
    cout<< "FOR CHECKING ARMSTRONG NUMBER: ";

    int sum=0, r=0, temp=v;
        while(v>0)
        {
            r=v%10;
            sum =sum+(r*r*r);
            v=v/10;
        }
    if(temp==sum)
    cout<<"Armstrong Number."<<endl;
    else
    cout<<"Not Armstrong Number."<<endl;
    
}

void sumOFdigits(int n){
    cout<< "FOR CHECKING SUM OF DIGITS NUMBER: ";
    int r;
    int sum=0;   

while(n>0){ 
    r=n%10;    
    sum=sum+r;    
    n=n/10;    
}       
cout<<"Sum is= "<< sum <<endl;    
 
}

void factorization(int num){
    cout << "The factors of " << num << " are : ";
   for(int i=1; i <= num; i++) {
      if (num % i == 0)
      cout << i << endl;
   }
}

void evenODD(int n1){
    cout<< "FOR CHECKING EVEN ODD NUMBER: ";
    if (n1%2==0)
    cout << "Number is Even";

    else 
    cout << "Number is Odd";
}

int multiplicationOfDigits(int num1) {
    int result = 1;
    while (num1 > 0) {
        result *= num1 % 10;
        num1 /= 10;
    }
    return result;
}