#include <iostream>

using namespace std;

class Person {

    private: 
        string name;
        int age;
        int code;

    public:
        Person(string name, int age, int code){
            this->name = name;
            this->age = age;
            this->code = code;
        }

        void setName(string name){
            this->name = name;
        }

        string getName(){
            return name;
        }

        void setAge(int age){
            this->age = age;
        }

        int getAge(){
            return age;
        }

        void setCode(int code){
            this->code = code;
        }

         int getCode(){
            return code;
        }
};

int main()
{
    Person student("Mariana", 18, 2512);
    cout << "Nome: " << student.getName() << "\n";
    cout << "Idade: " << student.getAge() << "\n";
    cout << "Codigo: " << student.getCode() << "\n";

    student.setName("Mariana Almeida");
    student.setCode(2142);

    cout << "========================" << "\n";
    cout << "Novo Nome: " << student.getName() << "\n";
    cout << "Novo Codigo: " << student.getCode() << "\n";
}
