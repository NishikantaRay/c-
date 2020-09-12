#include<iostream>
using namespace std;

class Example {     public:         ~Example()         {             cout<<"Destroying the object";         } }; main() {     Example Ex; } 
 
