#include <bits/stdc++.h>
/*
You are given an array A of size N, and Q queries to deal with. For each query, you are given an integer X, and you're supposed to find out if X is present in the array A or not.

Input:
The first line contains two integers, N and Q, denoting the size of array A and number of queries. The second line contains N space separated integers, denoting the array of elements Ai. The next Q lines contain a single integer X per line.

Output:
For each query, print YES if the X is in the array, otherwise print NO.

Constraints:
1 <= N, Q <= 105
1 <= Ai <= 109
1 <= X <= 109
SAMPLE INPUT 
5 10
50 40 30 20 10
10
20
30
40
50
60
70
80
90
100
SAMPLE OUTPUT 
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
*/
using namespace std;
int main()
{
    vector<long long int> vec;
    long int n,q;
    long long int x;
    long long int temp;
    cin>>n>>q;
    while(n--)
    {
        cin>>temp;
        //using vectors for dynamic array Refer STL in C++
        vec.push_back(temp);
    }
    //since vector is not sorted, sort the vector/array so that we can use binary_search for faster search
    sort(vec.begin(), vec.end());
    while(q--)
    {
        cin>>x;
        //use binary search
        if(std::binary_search(vec.begin(),vec.end(),x))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
