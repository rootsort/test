#include <iostream>
#include <string>
using namespace std;
class Foo{
std::string name;
public:
Foo()
{
}
Foo(string n):name(n){
}
void print()
{
}

};
int main()
{
Foo f;
cout<<"Hello World"<<endl;
}
