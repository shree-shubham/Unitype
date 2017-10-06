/*
Little Arjit is in love with Deepa. They have always thought of themselves as the ideal couple - the best, possible match they could've managed. (No kidding!) And like every other couple, they promised each other not to fight after every other fight. But, when has that happened before?

But, this is a different couple - this is a programming couple - and they argue on weird things, like Fibonacci numbers, prime numbers, Sterling numbers, and what not!

Their recent fight might seem silly to a lot of people, but it is a matter of serious concern for both of them. They have bought a cake, and they weighed it in milligrams - the weight of the cake is always even and now they wish to divide the cake between them in some way, that both of them are satisfied.

Arjit challenges Deepa that if she can divide the weight of the cake as sum of two prime numbers between them, she can have the entire cake - and if she fails to do so, he'll get the cake.

The argument is getting more, and more heated now - please help them sort out their stupid arguments or an easier way would be to help them figure out who is going to have the cake.

Input Format:
The first line will contain a number, tc, denoting the number of test cases.

The next tc lines will contain an even number, denoting the weight of the cake in milligrams.

Output Format:
Print "Arjit" or "Deepa" according to the winner.

Constraints:
1 <= tc <= 100
1 <= n <= 100000
1 is NOT a prime number.

SAMPLE INPUT 
2
4
8
SAMPLE OUTPUT 
Deepa
Deepa
Explanation
4 can be represented as 2 + 2, so Deepa wins. 8 can be represented as 5 + 3, so Deepa wins.
Question: https://www.hackerearth.com/practice/math/number-theory/primality-tests/practice-problems/algorithm/in-love-with-primes/description/
*/
#include <bits/stdc++.h>
using namespace std;
int prime(long int);
bool dipa(long int);
int main()
{
    int tc;
    long int n;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        if(dipa(n))
        {
            cout<<"Deepa"<<endl;
        }
        else
        {
            cout<<"Arjit"<<endl;
        }
    }
    return 0;
}
bool dipa(long int n)
{
    for(int i = 2; i < n; i++)
    {
        int a = prime(i);
        int b = prime(n - i);
        if((a == 1)&&(b==1))
        {
            return true;
        }
    }
    return false;
}
int prime(long int a)
{
    if(a == 2)
    {
        return 1;
    }
    else
    {
        for(int i = 2; i < a; i++)
        {
            if(a%i == 0)
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}
