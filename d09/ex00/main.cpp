//
// main.cpp for main in /home/gangai_j/Pool/piscine_cpp_d09/ex00
// 
// Made by Johann Gangai
// Login   <gangai_j@epitech.net>
// 
// Started on  Thu Jan 14 11:42:23 2016 Johann Gangai
// Last update Thu Jan 14 13:33:01 2016 Johann Gangai
//

#include <iostream>
#include "Character.hh"

int	main()
{
  Character leo("leo", 42);
  Character flo("flo", 42);

  if (leo.getLvl() != 42 ||
      leo.getPv() != 100 ||
      leo.getPower() != 100 ||
      leo.getName() != "leo" ||
      flo.getName() != "flo")
    {
      std::cout << "CRITICAL ERROR ON DEFAULT VALUES" << std::endl;
      return (-1);
    }

  flo.TakeDamage(leo.CloseAttack());
  leo.TakeDamage(flo.RangeAttack());

  flo.Heal();
  flo.TakeDamage(leo.RangeAttack());

  leo.TakeDamage(flo.CloseAttack());
  leo.TakeDamage(flo.CloseAttack());

  leo.Heal();

  flo.RestorePower();

  leo.RestorePower();
  leo.RestorePower();
  leo.RestorePower();

  std::cout << leo.getName() << " is being a boss thanks to his food!" << std::endl;

  flo.TakeDamage(leo.CloseAttack() * 6);
  if (flo.getPv() > 0)
    std::cout << "CRITICAL ERROR : FLO IS SUPPOSED TO BE DEAD!!" << std::endl;
}
