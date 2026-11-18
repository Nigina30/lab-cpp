#include <iostream>
#include <vector>
using namespace std;
int main()
{
 int n,T;
 cout << "Enter n: ";
 cin >> n;
 vector<int> v;
 cout << "Enter " << n << " elements (from -50 to 50):\n";
 for (int i = 0; i < n; i++)
  {
        int num;
        cin >> num;
        v.push_back(num);
    }

    cout << "Enter T: ";
    cin >> T;
    
    int k = 0; 
    for (int i = 0; i < v.size(); i++)
    {
        if (abs(v[i]) >= T)
        {
            v[k] = v[i];
            k++;
        }
    }

    
    while (v.size() > k)
    {
        v.pop_back();
    }

    cout << "\nAfter removing |x| < " << T << ":\n";
    for (int x : v)
    {
        cout << x << ' ';
    }
    cout << '\n';

    
    int evenCount = 0;
    int oddCount = 0;

    for (int x : v)
    {
        if (x % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "\nEven count: " << evenCount << '\n';
    cout << "Odd count: " << oddCount << '\n';

    
    int sz = v.size();
    for (int i = 0; i < sz / 2; i++)
    {
        int temp = v[i];
        v[i] = v[sz - 1 - i];
        v[sz - 1 - i] = temp;
    }

    cout << "\nReversed vector:\n";
    for (int x : v)
    {
        cout << x << ' ';
    }
    cout << '\n';


return 0;
 }


