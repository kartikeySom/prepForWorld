#include <iostream>
using namespace std;
class ll
{
  ll* next;
  int val;
  public:
  ll()
  {
      next = nullptr;
      val = -1;
  }
  void insert(int);
  int del(int);
  void printll();
};
ll* head = nullptr;
ll* curr = nullptr;
void ll::insert(int val)
{
  if(nullptr == head)
  {
      head = new ll();
      head->val = val;
      curr = head;
  }
  else
  {
      ll* tmp = new ll();
      tmp->val = val;
      curr->next = tmp;
      curr = tmp;
  }
}

int ll::del(int val)
{
    int retVal = -1;
    if(nullptr == head)
      cout << "ll empty" << endl;
    else
    {
        ll* tmp = head;
        int node = 1;
        while(tmp->next != nullptr)
        {
            if(val == tmp->next->val)
            {
              cout << "Val found at node " << ++node << endl;;
              ll* tmp1 = tmp->next;
              tmp->next = tmp->next->next;
              free(tmp1);
              retVal = val;
              break;
            }
            else
            {
                tmp = tmp->next;
                node++;
            }
        }
    }
  return retVal;
}

void ll::printll()
{
    ll* tmp = head;
    cout << "Printing LL " << endl;
    while(tmp != nullptr)
    {
        cout << tmp->val;
        tmp = tmp->next;
    }
}

int main()
{
    ll obj;
    obj.insert(1);
    obj.insert(2);
    obj.insert(3);
    obj.insert(4);
    obj.insert(5);
    obj.printll();
    cout << endl;
    obj.del(3);
    obj.printll();
}
