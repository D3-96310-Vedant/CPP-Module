/*19. Create `list<int>` and store 10 random numbers. Do the following operations one after
another.
 - Display list in reverse order using iterator.
 - Increment each number in the list by 5 using iterator.
 - Display list in using const iterator.
 - Sort the list using appropriate STL algorithm.
 - Display modified list using default iterato*/
 #include<iostream>
#include<list>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main()
{
    list<int> l;

    //Store 10 random numbers
    for(int i=0;i<10;i++)
    {
        l.push_back(rand()%100);
    }

    cout<<"List in Reverse Order:"<<endl;

    //Reverse iterator
    list<int>::reverse_iterator rit;
    for(rit = l.rbegin(); rit != l.rend(); rit++)
    {
        cout<<*rit<<" ";
    }

    cout<<endl;


    //Increment each number by 5
    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); it++)
    {
        *it = *it + 5;
    }


    cout<<"\nList using Const Iterator:"<<endl;

    //Const iterator
    list<int>::const_iterator cit;
    for(cit = l.begin(); cit != l.end(); cit++)
    {
        cout<<*cit<<" ";
    }

    cout<<endl;


    //Sort list
    l.sort();


    cout<<"\nModified Sorted List:"<<endl;

    //Default iterator
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    return 0;
}