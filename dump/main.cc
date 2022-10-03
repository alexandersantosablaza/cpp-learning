#include<iostream>

/*
 writer alexander santos ablaza
 create a program
 that will concatenate 2 strings

if string1 and string2 are equal length

if not equal length concatenate the end of string
length equal to the shortest

case must not contain control flow and 

only purely arithmetic with operators

*/

void concatSameLen(std::string input, std::string input2);

int main(int argc, char *argv[])
{
	//case 1 equal length
	concatSameLen("123456789", "987654321");
	//case 2 first param is less
	concatSameLen("12345678", "987654321");
	//case 3 second param is less
	concatSameLen("123456789", "98765432");
	
	//test cases
	concatSameLen("gago","obob");
	concatSameLen("rocky","balboa");
	concatSameLen("haha", "choco");
	concatSameLen("Bruce","Lee");
	return 0;
}

void concatSameLen(std::string first, std::string second)
{
    std::cout<<"str1 = "<<first<<std::endl
    <<"str2 = "<<second<<std::endl;
    
    int firstLen(first.length());
    int secondLen(second.length());
    
    std::cout<<"str1 len = "<<firstLen<< std::endl
    << "str2 len = "<<secondLen<<std::endl
    <<"output = ";
    
    (firstLen>secondLen && 
     std::cout<< (
       first.substr(firstLen-secondLen, secondLen)+ second
     ) ) 
     ||
    (firstLen<secondLen && 
    std::cout<< ( 
     first +
     second.substr(secondLen-firstLen, firstLen)
    ) )
    ||
    (std::cout<< (first + second) ) ;
    
    std::cout<<std::endl;
    std::cout<<std::endl;
    
    return;
}
