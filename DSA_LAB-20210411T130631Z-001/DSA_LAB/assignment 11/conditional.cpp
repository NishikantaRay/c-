#include<iostream>
#include<string>
#define lvl 1
 
 int main()
 {
 	#if lvl==0
 		#define score 23
 	#elif lvl ==1
 		#define score 234
 	#else
 	#if lvl ==2
 		#define score 67
 	#endif
 	#endif
 	std::cout<<score;
 }
