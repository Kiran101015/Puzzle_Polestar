#include <iostream>
#include <stack>
using namespace std;

int main()
{
    char String[] = "[({(<(())[]>[[{[]{<()<>>";
    long sum =0;
    stack<int> mystack;
    
    for (int i =0; String[i] != '\0'; i++)
    {
        if ( String[i] == '{' || 
             String[i] == '(' ||
             String[i] == '[' ||
             String[i] == '<')
        {
            mystack.push(String[i]);
        }
        if ( String[i] == '}')
        {
            char temp = mystack.top();
            if ('{' != temp )
                sum = sum + 1197;

            mystack.pop();    
        }
        else if( String[i] == ')' )
        {
            char temp = mystack.top();
            if ( '(' != temp )
                sum = sum + 3;

            mystack.pop();             
        }
        else if( String[i] == ']' )
        {
            char temp = mystack.top();
            if ( '[' != temp )
                sum = sum + 57;

            mystack.pop();             
        }
        else if( String[i] == '>')
        {
            char temp = mystack.top();
            if ( '<' != temp )
                sum = sum + 25137;

            mystack.pop();             
        }
        else 
        {
		//
        }
    }
    if ( 0 == sum )
	cout << "Syntax is correct \n";
    else 
	cout << "Syntax is curruped with the score :"<<sum;

return 0;
}