#include <iostream>

using std::cout;

int main() {
  for(int i = 1; i < 7; i++){ 
    for(int j = 1; j <= 7; j++) {
      if(j <= i+1) 
        cout<< j;
      else 
        cout<<"*";
    }
    cout<<"\n";
  }
  return 0;
}
