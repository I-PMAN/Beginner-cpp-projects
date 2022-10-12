#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
  string name, pass;
  int at = 0;
  while (at < 3){
    cout << "Enter username: ";
    cin >> name;
    cout << "Enter password: ";
    cin >> pass;
    if (name == "John" && pass == "password"){
      cout << "Welcome John!\n";
      sleep(2);
      break;
    }
    else if (name == "Emilie" && pass == "emilie"){
      cout << "Welcome Emilie!\n";
      sleep(2);
      break;
    }
    else{
      cout << "Invalid login credentials! Please try again. \n";
      sleep(2);
      at++;
    }
  }
  if (at == 3){
    cout << "Too many attempts!!\n";
    sleep(2);
    return 0;
  }
  cout << "Exiting application...\n";
  sleep(2);
  return 0;
}

