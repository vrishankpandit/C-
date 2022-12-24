// int* a=&b          here int* is datatype for storing address
                      //&b          is the adress of b


     // Rules for virtual functions
// 1. They cannot be static
//-2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it
// in the derived class            