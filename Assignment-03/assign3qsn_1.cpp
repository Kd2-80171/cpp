/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.
*/


#include <iostream>
using namespace std;

class Box
{
    private:
    int width;
    int length;
    int height;

public:

Box()
{

}
Box(int width,int length,int height)
{
    this->width=width;
    this->length=length;
    this->height=height;


}

void calculateVolume()
{
    cout<<"Volume="<<width*length*height<<endl;
}
    void acceptdetails()
    {
        cout<<"enter width ="<<endl;
        cout<<"enter length ="<<endl;
        cout<<"enter height ="<<endl;

    }
    void displaydetails()
    {
        cin>>width;
        cin>>length;
        cin>>height;


    }
};

int main()
{

  Box v1;
  v1.acceptdetails();
  v1.displaydetails();
  v1.calculateVolume();


    return 0;
}