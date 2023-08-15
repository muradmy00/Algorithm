#include<bits/stdc++.h>
using namespace std;
void Sele( int arr[],int n)
{
    int minn;
    for(int i=0;i<n-1;i++)
    {
        minn=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minn])
            {
                minn=j;
            }
        }
        if(minn!=i)
        {
            swap(arr[minn], arr[i]);
        }
    }
}
int main()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i = 0; i<n; i++)
   {
      cin >> arr[i];
   }
   Sele(arr, n);

   for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
