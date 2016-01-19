//
// main.cpp for main in /home/gangai_j/Pool/piscine_cpp_d14m
// 
// Made by Johann Gangai
// Login   <gangai_j@epitech.net>
// 
// Started on  Tue Jan 19 09:46:03 2016 Johann Gangai
// Last update Tue Jan 19 12:53:57 2016 Johann Gangai
//

#include <iostream>
#include <string>
#include "Lemon.h"
#include "Banana.h"
#include "Fruit.h"
#include "FruitBox.h"

int main(void)
{
  Lemon l;
  Banana b;
  std::cout << l.getVitamins() << std::endl;
  std::cout << b.getVitamins() << std::endl;
  std::cout << l.getName() << std::endl;
  std::cout << b.getName() << std::endl;
  Fruit& f = l;
  std::cout << f.getVitamins() << std::endl;
  std::cout << f.getName() << std::endl;
  std::cout << "########## test list" << std::endl;
  FruitBox box(3);
  Lemon l2;
  Banana b2;
  std::cout << "### insertion" << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << std::boolalpha << box.putFruit(&l) << std::endl;
  std::cout << box.putFruit(&l) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << box.putFruit(&b) << std::endl;
  std::cout << box.putFruit(&b) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << box.putFruit(&l2) << std::endl;
  std::cout << box.putFruit(&b2) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << "### extraction" << std::endl;
  std::cout << (box.pickFruit() == &l) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << (box.pickFruit() == &b) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  std::cout << (box.pickFruit() == &l2) << std::endl;
  std::cout << (box.head() == NULL) << "  "  << box.nbFruits() << std::endl;
  return 1337;
}
