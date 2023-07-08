# Reference Variable
- Reference variable is an alternate name of already existing variable. It cannot be changed to refer another variable and should be initialized at the time of declaration and cannot be NULL. The operator ‘&’ is used to declare reference variable.
- Eg -
```c++ #include <iostream>
using namespace std;
int main() {
   int a = 8;
   int& b = a;
   cout << "The variable a : " << a;
   cout << "\nThe reference variable r : " << b;
   return 0;
} 
```
- 

