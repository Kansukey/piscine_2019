//
// main.cpp for  in /home/barrie_j/Piscine/piscine_cpp_d14m/ex00
// 
// Made by Jean BARRIERE
// Login   <barrie_j@epitech.net>
// 
// Started on  Tue Jan 19 09:57:16 2016 Jean BARRIERE
// Last update Tue Jan 19 11:37:53 2016 Jean BARRIERE
//

#include <iostream>
#include "assert.h"
#include "Banana.h"
#include "Lemon.h"
#include "Lime.h"
#include "FruitBox.h"
#include "LittleHand.h"

int	main()
{
  FruitBox	unsorted(6);
  FruitBox	bananas(2);
  FruitBox	lemons(2);
  FruitBox	limes(1);
  Lemon		lemon1;
  Lemon		lemon2;
  Banana	banana1;
  Banana	banana2;
  Lime		lime1;
  Lime		lime2;
  Fruit*	cur;
  
  unsorted.putFruit(&lemon1);
  unsorted.putFruit(&lemon2);
  unsorted.putFruit(&banana1);
  unsorted.putFruit(&banana2);
  unsorted.putFruit(&lime1);
  unsorted.putFruit(&lime2);
  LittleHand::sortFruitBox(unsorted, lemons, bananas, limes);
  std::cout << "size de unsorted : [expected :1] " << unsorted.nbFruits() << std::endl;
  while ((cur = unsorted.pickFruit()) != NULL)
    {
      std::cout << "unsorted getName : [expected :lime] " << cur->getName() << std::endl;
    }
  std::cout << "size de lemons : [expected :2] " << lemons.nbFruits() << std::endl;
  while ((cur = lemons.pickFruit()) != NULL)
    {
      std::cout << "lemons getName : [expected :lemon] " << cur->getName() << std::endl;
    }
  std::cout << "size de bananas : [expected :2] " << bananas.nbFruits() << std::endl;
  while ((cur = bananas.pickFruit()) != NULL)
    {
      std::cout << "bananas getName : [expected :banana] " << cur->getName() << std::endl;
    }
  std::cout << "size de limes : [expected :1] " << limes.nbFruits() << std::endl;
  while ((cur = limes.pickFruit()) != NULL)
    {
      std::cout << "limes getName : [expected :lime] " << cur->getName() << std::endl;
    }
  return 1337;
}
