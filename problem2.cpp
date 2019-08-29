#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct User{
  string username;
  float gpa;
  int age;
};

void addUser(vector<User> *users, string _username, float _gpa, int _age){
  User user;
  user.username=_username;
  user.gpa=_gpa;
  user.age=_age;
  users->push_back(user);
}

void printList(const vector<User> users){
  auto size= users.size();
  for(int i=0; i<size; i++){
    User taco=users[i];
    string theuser=taco.username;
    float thegpa=taco.gpa;
    int theage=taco.age;
    cout << theuser << "[" << thegpa << "] age: " << theage <<endl;
  }
}



int main(){
    string filename
    cout << "What is the name of your file?"<<endl;
    getline(cin, filename);
    ifstream thefile(filename);
    string line;
    vector<User> thePeeps;
    while(thefile, line){
      stringstream banana(line);
      string name, gpaa, aage;
      banana >> name >> gpaa >> aage;
      float gpa=stof(gpaa);
      int age=stoi(aage);
      addUser(thePeeps, name, gpa, age);
    }
    printList(thePeeps);
}
