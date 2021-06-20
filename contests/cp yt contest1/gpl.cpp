#include <iostream>
using namespace std;

int main()

{

int t;

cin>>t;

while(t--)

{

int n;

cin>>n;

char arr[n];

long long int num=0,f=1;

for(int i=0;i<n;i++)

{

cin>>arr[i];

}

for(int i=n-1;i>=0;i--)

{

num=num+((int(arr[i])-48)*f);

f=f*2;

 

}

cout<<num<<endl;

}

}