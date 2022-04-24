/*4.35 (Factorial) The factorial of a nonnegative integer n is written n! 
(pronounced “n factorial”) and is defined as follows: For example, , which is 120.
Use while statements in each of the following: 
A. Write a program that reads a nonnegative integer and computes and prints its factorial.
(c++ how to program)*/

#include<iostream>
using namespace std ;

int main(){
    unsigned int counter(1) ;
    unsigned int n(1) ;

    cout << "Enter number :" ;
    cin  >> n ;

    while(counter <= n){
        
        cout <<  n << "." ;
        n-- ;
    }
    cout << endl;
}
