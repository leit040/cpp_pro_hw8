#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string first_name;
    std::string last_name;
    int age;
    void print(){
     std::cout<< first_name<<" "<<last_name <<" "<< age << "\n";
    }
};

int main() {
    std::vector<Person> people = {
            {"Yoda", "", 900},
            {"Obi-Wan", "Kennobi", 38},
            {"Leia", "Organa", 25},
            {"Anakin", "Skywalker", 22}
    };
    std::cout<<"\n\nDefault order : \n";
    for (Person &p:people) {
        p.print();
    }

    std::sort(people.begin(), people.end(), [](const Person &a,const Person &b){
        return a.age < b.age;
    });
    std::cout<<"\n\nOrder by age : \n";
    for (Person &p:people) {
        p.print();
    }

    std::sort(people.begin(), people.end(), [](const Person &a,const Person &b){
        return a.first_name < b.first_name;
    });

    std::cout<<"\n\nOrder by first name : \n";
    for (Person &p:people) {
        p.print();
    }
    std::sort(people.begin(), people.end(), [](const Person &a,const Person &b){
        return a.last_name < b.last_name;
    });
    std::cout<<"\n\nOrder by last name : \n";
    for (Person &p:people) {
        p.print();
    }

    return 0;
}
