//Activity selection sort
#include <bits/stdc++.h>
using namespace std;

void printActivities(int s[], int f[], int n){
    int j=0;
    cout << j << " ";
    for (int i = 1; i < n; i++){
        if (s[i] >= f[j]){
            cout << i << " ";
            j = i;
        }
    }
}

int main(){
    int Start[1000];
    int End[1000];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>Start[i];
    }
    for(int j=0;j<t;j++)
    {
        cin>>End[j];
    }
    printActivities(Start, End ,t);
    return 0;
}
////1, 3, 0, 5, 8, 5
////2, 4, 6, 7, 9, 9
//0 1 3 4
