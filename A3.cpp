#include <iostream>

using namespace std;

int count_even(int *a, int n)
{
    int count = 0;
    for(int i = 0;i < 5;i++){
        if(a[i]%2==0)
          count++;
    }
    for(int i = n - 1;i >= n - 5 ;i--){
        if(a[i]%2==0)
          count++;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    cout << count_even(a, n);
    delete [] a;
    return 0;
}
