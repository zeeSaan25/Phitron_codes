#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Person{
    public:
    string name;
    int age;
    int physics;
    int chemistry;
    int math;
    int biology;

    Person(string name, int age, int physics, int chemistry, int math, int biology){
        this->name=name;
        this->age=age;
        this->physics=physics;
        this->chemistry=chemistry;
        this->math=math;
        this->biology=biology;
    }
    int sum(){
        return physics+chemistry+math+biology;
    }
};

int main(){
    boost();
    Person naim("Nayem Islam", 23, 80, 86, 67, 90);
    cout<<naim.name<<" "<<naim.age<<" ";
    cout<<naim.sum()<<endl;
    return 0;
}