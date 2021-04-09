#pragma once

#include <stdint.h>
#include <random>
std::random_device rd;
std::mt19937 gen1(rd());
uint32_t attempt()
{
 int boy;
 for (int i = 1; ; i++)
 {
  boy = gen1() % 2;
  if (boy)
   return i;
 }
}//fwnjfnew