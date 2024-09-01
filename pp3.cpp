/*Write a function CalculateBinaryOperations(str) that accepts the string as an argument or parameter. The string should contain the binary numbers with their operators OR, AND, and XOR?
a. A Means the AND Operation.
b. B Means the OR Operation.
c. C Means the XOR Operation.
By scanning the given string from left to right you’ve to calculate the string and by taking one operator at a time then return the desired output.
Conditions:
1.The priority of the operator is not required.
2.The length of the string is always Odd.
3.If the length of the string is null then return -1.*/
#include<iostream>
#include<cstring>
using namespace std;
int CalculateBinaryOperations(char str[])
{
    int length=strlen(str);
    if(length%2==0)
    {
        return -1;
    }
    else if(length==NULL)
    {
        return -1;
    }
    int result=str[0]-'0';
    for(int i=1;i<length;i+=2)
    {
        char operation=str[i];
        int nextnumber=str[i+1]-'0';
    switch(operation){
    case'A':
        result&=nextnumber;
        break;
    case 'B':
        result|=nextnumber;
        break;
    case 'C':
        result^=nextnumber;
        break;
    default:
        return -1;
    }
    }
    return result;
}
int main()
{
    char str[50];
    cout<<"Enter the string:"<<endl;
    cin>>endl;
    cout<<"The output is:"<<CalculateBinaryOperations(str)<<endl;
    return 0;

}

