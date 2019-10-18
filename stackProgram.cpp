#include <iostream>

using namespace std;

int s[5],n=5,top=-1;

void push(int val){

if(top>=n-1){

    cout<<"stack overflow";
}
else{

top++;
s[top]=val;
}
}


void pop(){

if(top<-1){

    cout<<"stack under overflow";
}
else{


cout<< s[top]<<endl;
top--;
}

}

void display(){

if(top>=0){
for(int i=top; i>=0;i--){

cout<< s[i]<<endl;}

}else{
cout<<"stack is empty";

}
}

void searchvalue(int x){



}
int main()
{
int ch,v;
cout<<"1 push data"<<endl;
cout<<"2 pop data"<<endl;
cout<<"3 display data"<<endl;
cout<<"4 exit!"<<endl;


do{
    cout<<"please enter the choice"<<endl;
    cin>>ch;
        switch(ch)
         {
        case 1:
            cout<<"Enter your value:"<<endl;
            cin>>v;
            push(v);

            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"exit!"<<endl;
             break;
        default:
            cout<<"No any choice exist"<<endl;
        }
}while(ch!=4);


return 0;
}


