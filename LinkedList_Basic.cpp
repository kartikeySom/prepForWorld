#include <iostream>
using namespace std;
class ll
{
  ll* next;
  int val;
  public:
  ll()
  {
      node = nullptr;
      val = -1;
  }
  void insert(int);
  int delete(int);
};
ll* head;
ll* curr;
head = curr = nullptr;
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

int ll::delete(int val)
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
            if(val == tmp->val)
            {
              cout << "Val found at node " << node;
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
