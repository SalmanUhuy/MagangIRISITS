#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, numb, ganjil=0, genap=0;
    cin>>n;
    while(n--)
    {
        cin>>numb;
        if(numb%2==0)
            genap++;
        else
            ganjil++;
    }
    cout<<"GANJIL : "<<ganjil<<endl;
    cout<<"GENAP : "<<genap<<endl;
    
    return 0;
}