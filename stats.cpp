#include <iostream>

using namespace std;

int main(){

  int x,y;
  cout << "Enter 2 numbers:";

  cin >> x;
  cin >> y;

  int sum = x+y;
  int diff = x-y;
  int prod = x*y;
  int dist = abs(diff);
  float avg = (x+y)/2;
  
  cout << "your numbers are " << x << " and " << y << endl;
  cout << "Sum of your numbers is " << sum << endl;
  cout << "Difference of your numbers is " << diff << endl;
  cout << "Product of your numbers is " << prod << endl;
  cout << "Distance between your numbers is " << dist << endl;
  cout << "Mean of your numbers is " << avg << endl;
    
  return 0;

}
