#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Person{
    public:
        string name;
        int age;

        Person(string name, int age){
            this->name=name;
            this->age=age;
        }
};
int main(){
    boost();
    Person* naim = new Person("Nayem Islam", 23);
    Person* sanzida = new Person("Sanzida Haque", 22);
    *naim = *sanzida;   //copy sanzida to naim
    delete sanzida; //deleted dynamic object sanzida
    cout<<naim->name<<" "<<naim->age<<endl;    //by calling naim object we can now access value of sanzida. Because sanzida is copied to naim
    return 0;
}