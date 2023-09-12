// #include <bits/stdc++.h>
// using namespace std;

// void countFreq(int arr[], int n)
// {
//   vector<bool> visited(n, false);

//   for (int i = 0; i < n; i++)
//   {

//     if (visited[i] == true)
//       continue;

//     int count = 1;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (arr[i] == arr[j])
//       {
//         visited[j] = true;
//         count++;
//       }
//     }
//     cout << arr[i] << " " << count << endl;
//   }
// }

// int main()
// {
//   int arr[] = {10, 5, 10, 15, 10, 5};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   countFreq(arr, n);
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}
