// #include <iostream>
// using namespace std;
// int main()
// {

//   int i, j;

//   for (i = 0; i < 4; i++)
//   {
//     for (j = 0; j < 4; j++)
//     {
//       cout << "*" ;
//     }
//     // cout << "* * * *" << endl;
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;
// void pattern2(int N)

// {
//   // This is the outer loop which will loop for the rows.
//   for (int i = 0; i < N; i++)
//   {
//     // This is the inner loop which loops for the columns
//     // no. of columns = row number for each line here.
//     for (int j = 0; j <= i; j++)
//     {
//       cout << "* ";
//     }

//     // As soon as stars for each iteration are printed, we move to the
//     // next row and give a line break otherwise all stars
//     // would get printed in 1 line.
//     cout << endl;
//   }
// }

// int main()
// {
//   // Here, we have taken the value of N as 5.
//   // We can also take input from the user.
//   int N = 5;

//   pattern2(N);

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void pattern3(int N)
{

  for (int i = 1; i <= N; i++)
  {

    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }

    cout << endl;
  }
}

int main()
{

  int N = 5;

  pattern3(N);

  return 0;
}