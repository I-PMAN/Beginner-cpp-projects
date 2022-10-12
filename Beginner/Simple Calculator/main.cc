#include <iostream>
using namespace std;
int main(){
  char op;
  float n1, n2;
  bool t = true;
  char ch;
  while(t){
  cout << "Enter an operator: +, -, /, * :";
  cin >> op;
  cout << "Enter two integers: ";
  cin >> n1 >> n2;
  switch(op){
    case '+':
      cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
      break;
    case '-':
      cout << n1 << " + " << n2 << " = " << n1 - n2 << endl;
      break;
    case '*':
      cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
      break;
    case '/':
      if(n2  == 0){
        cout << "Error! Division by zero is undefined" << endl;
        break;
      }
      else{
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;
      }
    default:
      cout << "Error! The operator entered is incorrect" << endl;
      break;
  }
  cout << "Want to enter again?(y/n)";
  cin >> ch;
  if(ch == 'y' || ch == 'Y')
    t = true;
  else
    t = false;
  }
  return 0;
}

