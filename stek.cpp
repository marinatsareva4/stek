#include <iostream>
 
#include "SteckNode.h"
 
int main()
{
        Stack<char> St;
        St.push('a');              /**< объ€вл€ем переменные*/
        St.push('b');
        St.push('d');
        St.push('c');
        try
        {
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
                std::cout<<St.top()<<'\n';
                St.pop();
                St.print();
        }
        catch(const std::string& e)
        {
                std::cout<<e<<'\n';
        }
        return 0;
}
