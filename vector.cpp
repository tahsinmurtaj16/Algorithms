#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> myVector;
    int num=0;
    for(unsigned int i = 0;i<5;i++ )
    {
        cin>>num;
        myVector.push_back(num); //1 2 3 4 5
    }
    myVector.insert(myVector.begin(),6);

    for(unsigned int i=0;i<myVector.size();i++)
    {
        cout<<myVector[i]<<" ";

    }
    cout<<endl;
    myVector.erase(myVector.begin()+3);
    for(unsigned int i=0;i<myVector.size();i++)
    {
        cout<<myVector[i]<<" ";

    }
    cout<<endl;
    if(myVector.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
    {
        cout<<"My vector is not empty."<<endl;
    }
    cout<<endl;

    myVector.clear();
     if(myVector.empty())
    {
        cout<<"Vector is empty"<<endl;
    }
    else
    {
        cout<<"My vector is not empty."<<endl;
    }
    cout<<endl;


}
