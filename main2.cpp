#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main()
{
queue<char> q;
stack<char> s;

int mismatches = 0;
char letter;
cout << "Enter a line and I will see if it's a palindrome:" << endl;
while (cin.peek( ) != '\n')
    {
      cin >> letter;
      
      
      q.push(letter);
      s.push(letter);
      
      
    }




while ((!q.empty( )) && (!s.empty( )))
  {
    if (q.front( ) != s.top( ))
    ++mismatches;
    s.pop( );
  }
if (mismatches == 0)
cout << "That is a palindrome." << endl;
else
cout << "That is not a palindrome." << endl;
return 0;
}