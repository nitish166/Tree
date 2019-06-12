
#include <string>
#include <iostream>
using namespace std;
void printKeyPadHelper(int num, string output , string options[])
{
    if(num==0)
    {
        cout<<output<<endl;
        return;
    }
    int digit=num%10;
    int i=0;
    while(i<options[digit].length())
    {
        printKeyPadHelper(num/10, options[digit][i]+output,  options);
        i++;
    }
    return;
}

void printKeypad(int num)
{
    string options[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    printKeyPadHelper(num,"",options);
    return;
}
