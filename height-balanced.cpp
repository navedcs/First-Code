
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//const int mod = 1000000007;
class node
{
    public:
    int data;
    node *lft;
    node *rght;
};

node *creat(int k)
{
    node *newn = new node();
    newn->data=k;
    newn->lft=newn->rght=NULL;

    return newn;
}

node *insr(node *h, int k)
{

    if(h==NULL)
    {
        return creat(k);
    }
    else if(k<h->data)
    {
        h->lft= insr(h->lft, k);
    }
    else if(k>h->data)
    {
         h->rght=insr(h->rght, k);
    }

    return h;
}

int hight(node *h)
{
    if(h==NULL)
    {
        return 0;
    }

    return max(hight(h->lft),hight(h->rght))+1;

}


int heihtbalance(node *rot)
{
    if(rot==NULL)
    {
        return 1;
    }
    else
    {
        int l=hight(rot->lft);
        int r=hight(rot->rght);
        if(abs(l-r)<=1 && heihtbalance(rot->lft) && heihtbalance(rot->rght))
            return 1;
        return 0;
    }
}



int main()
{
  //int t;
  //cin>>t;


  node *root=NULL;

 root = insr(root, 50);
    insr(root, 30);
    insr(root, 20);
    insr(root, 40);
    insr(root, 70);
    insr(root, 60);
    insr(root, 80);

    cout << heihtbalance(root);



  cout <<endl ;

  //prnt(&head);
  return 0;
}
