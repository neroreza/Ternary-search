#include<iostream> 
using namespace std;

int t_search(int a[], int l, int h , int key)
{
    int m1,m2;
    if (l == h)
    {
        if (a[l] == key)
            return l;
        return -1;
    }
    else
    {
        m1=l+(h-l)/ 3;
        m2=h-(h-l)/3;
        if (a[m1]==key)
            return m1;
        else if(a[m2]==key)
            return m2;
        else if (key < a[m1])
            return t_search(a,l,m1-1,key);
        else if (key > a[m2] && key < a[m1])
            return t_search(a,m1+1,m2-1,key);
        else if(key > a[m2])
            return t_search(a,m2+1,h,key);
    }
}
int main()
{
    int a[9]={1,2,3,4,5,6,7,8,9};
	int x=t_search(a,0,8,4);
	cout<<x;
}