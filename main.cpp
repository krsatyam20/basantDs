#include <iostream>
using namespace std;
int arraydisplay(int[]);

int main()
{
int x[5]={10,20,30,40,50};

arraydisplay(x);
    return 0;
}

int arraydisplay(int a[5]){

for(int i=0;i<5;i++){


cout<<a[i] <<endl;

}

}
