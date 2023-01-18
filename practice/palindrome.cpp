#include <iostream>

bool palindrome(void);
int main(void)

{
    
    palindrome();
    return 0;
};
bool palindrome(void)
{
    bool palindrome = false;
    std::cout<<"enter something to check palidromity: \n";
    std::string input{};
    std::cin>>input;
    for(int i = 0, j = input.length() -1; i < j / 2; i++)
    {
        if(input[i] == input[j-i])
        {
            palindrome = true;
        }
        else
        {
            palindrome = false;
        }
    }
    std::cout<<"palindrome: "<<(palindrome ? "yes": "no");
    return palindrome;
}
