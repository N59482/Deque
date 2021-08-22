#include <iostream>

using namespace std;

template<typename T>
class DS
{
    private:
    template<typename T2>
    class element
    {
        public:
        T2 data;
        element *pNext;
        element *pLast;
        element(T2 data = T2(), element *pLast = nullptr, element *pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
            this->pLast = pLast;
        };
    };
    
    element<T> *head;
    element<T> *ass;
    int size;
    public:
    DS();
    void push_back(T data);
    int getsize(){return size;};
    T & operator[](const int index);
    void fill(int total);
};

template<typename T>
DS<T>::DS()
{
    head = nullptr;
    ass = nullptr;
    size = 0;
};

template<typename T>
void DS<T>::push_back(T data)
{
    if (head == nullptr)//если в списке всего один элемент то голова и жопа ссылаются на один элемент! (придумать что-то)
    {
        head = new element<T>(data);
        ass = head;
        size++;
    }
    else
    {
        ass->pNext = new element<T>(data);//указателю жопного элемента присваеваем новый элемент
        //теперь жопа указывает на предпоследний элемент
        ass = ass->pNext;//указываем жопой на новый последний элемент
        size++;
    };
};

template<typename T>
T& OS<T>::operator [] (const int index)
{
  element<T> *temp;
  if(index<=Size)
  {
      if(index>(getSize()/2))
      {
          temp = ass;
          for(int i=0; temp!=nullptr; i++)
          {
              if (i == index)
              {
                  return temp->data;
              }
              else temp = temp->pLast;
          }
      } 
      else
      {
        temp = head;  
        for(int i=0; temp!=nullptr; i++)
          {
              if (i == index)
              {
                  return temp->data;
              }
              else temp = temp->pNext;
          } 
      };
 
  } else cout<<"Индекс за границами массва\n";
};

template<typename T>
void DS<T>::fill(int total)
{
    for(int i=0;i<total,i++)
    {
        
    }
};

int main()
{
    DS<int> ds;

    return 0;
}
