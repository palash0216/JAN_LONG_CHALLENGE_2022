/*Kepler’s Law states that the planets move around the sun in elliptical orbits 
with the sun at one focus. Kepler's 3rd law is The Law of Periods, according to which:
The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
You are given the Time periods (T1,T2) and Semimajor Axes (R1,R2) of two planets orbiting the same star.
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists a single line of input, containing four space-separated integers T1,T2,R1,R2.
Output Format
For each test case, output a single line containing one string — "Yes" or "No" (without quotes); the answer to the problem.

You may print each character of the answer in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

Constraints
1≤T≤104
1≤T1,T2≤10
1≤R1,R2≤10
Subtasks
Subtask 1(100 points): Original constraints

Sample Input 1 
3
1 1 1 1
1 2 3 4
1 8 2 8
Sample Output 1 
Yes
No
Yes
Explanation
Test Case 1: 12/13=12/13
Test Case 2: 12/33≠22/43
Test Case 3: 12/23=82/83
*/
#include<iostream>
using namespace std;
int main()
{
    float T,T1,T2,R1,R2,X,Y;
    cin>>T;
    while(T--)
    {
        cin>>T1>>T2>>R1>>R2;
        X=((T1*T1)/(R1*R1*R1));
        Y=((T2*T2)/(R2*R2*R2));
        if(X==Y)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}