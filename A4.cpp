#include <iostream>
#include <algorithm>

using namespace std;

int search(int *a, int low, int high, int key)
{
    int mid = (low + high)/2;
    if(low > high) return -1;
    else if(a[mid] == key) return mid;
    else if(a[mid] > key) return search(a, low, mid - 1, key);
    else return search(a, mid + 1, high, key);
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int low = 0, high = n - 1;
    int key;
    cin >> key;
    if(search(a, low, high, key) > 0) cout << search(a, low, high, key);
    else cout << "invalid";
    delete [] a;
    return 0;
}
