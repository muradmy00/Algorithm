#include<bits/stdc++.h>
using namespace std;
void Inser(int arr[],int n)
{
    int j,item;
    for(int i=1;i<n;i++)
    {
        item=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>item)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=item;
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
   Inser(arr, n);

   for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
