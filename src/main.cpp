#include <iostream>

int main() {
  return 0;
}
void exercise_4(double n, double a, double b, double x, double y) {
  // TODO: YOUR CODE HERE
  if(n>b)
  {
    cout<<n-(n*(y/100))<<endl;
  }
  if (n>a)
  {
    cout<<n-(n*(x/100))<<endl;
  }
  else
  {
    cout<<n<<endl;
  }
}