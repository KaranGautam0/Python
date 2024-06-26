// WAP to find key = 10 is present or not ina array of key

#include <iostream>
using namespace std;

bool arrayElementFinder(int array, int key)
{
  if (array == key)
  {
    return true;
  }
  return false;
};

int main()
{
  int array[5] = {5, 1, 2, 7, 8};
  int key;
  bool iskey;
  cout<<"Enter your key: ";
  cin>>key;
  for (int i = 0; i < 5; i++)
  {
    if (arrayElementFinder(array[i], key) == true){
      iskey = true;
      cout << "key is found"<<endl;
      break;
    }  else if((arrayElementFinder(array[i], key) == false)) {
     iskey = false;
    }
  }
  if(iskey == false){
       cout << "key is not found"<<endl;
  }
}