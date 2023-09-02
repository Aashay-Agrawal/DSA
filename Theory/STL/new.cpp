#include <iostream>
using namespace std;

void explainpair()
{
  pair<int, int> p = {1, 3};

  cout << p.first << endl;
}

int main()
{

  explainpair();

  return 0;
}