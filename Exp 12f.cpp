# include<iostream>
using namespace std;
int c = 0;
//using a destructor
class destruct
{
    public:
    destruct()
    {
        c++;
        cout<<"Number of objects created: "<<c<<endl;
    }
    ~destruct()
    {
        c--;
        cout<<"Number of objects destroyed: "<<c<<endl;
    }
};

int main()
{
    destruct aa,bb,cc,dd;
}
