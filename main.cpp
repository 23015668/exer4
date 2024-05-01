#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1;
    cout<<"Enter the value of x1: ";
    cin>>x1;

    double x2;
    cout<<"Enter the value of x2: ";
    cin>>x2;

    double y1;
    cout<<"Enter the value of y1: ";
    cin>>y1;

    double y2;
    cout<<"Enter the value of y2: ";
    cin>>y2;

    double distance;
    distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    cout<<"The distance between point 1 and point 2 is "<<distance ;



    return 0;
}
