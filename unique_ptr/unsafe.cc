#include <iostream>

struct A
{
  A()
  {
    std::cout << "ctor\n";
  }

  ~A()
  {
    std::cout << "dtor\n";
  }
};

void
foo()
{
  throw true;
}

int
main(void)
{
  try
    {
      A *p = new A();
      foo();
      delete p;
    }
  catch (bool)
    {
    }
  
  return 0;
}