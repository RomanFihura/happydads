#include <iostream>
#include <random>
#include "happydads.cpp"
#define  N 1000
uint32_t attempt();
int main()
{
 double children=0;
 for (uint32_t i = 1; i <=N; i++)
 {
  children += attempt();
 }
 double actualrelation= (N / (children - N));
 std::cout << "boys/girls = " <<actualrelation;
 return 0;
 
}