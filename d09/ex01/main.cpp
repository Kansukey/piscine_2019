//
// main.cpp for raph in /home/perche_r/piscine_cpp/piscine_cpp_d09/ex01
// 
// Made by Perchec Raphael
// Login   <perche_r@epitech.net>
// 
// Started on  Thu Jan 14 14:21:58 2016 Perchec Raphael
// Last update Thu Jan 14 16:47:54 2016 Perchec Raphael
//

#include <iostream>
#include "Character.hh"
#include "Warrior.hh"

int	main()
{
  Character leo("leo", 42);
  Character flo("flo", 42);
  Warrior   johann("johann", 56);
  Warrior   raph("raph", 56);

  if (leo.getLvl() != 42 ||
      leo.getPv() != 100 ||
      leo.getPower() != 100 ||
      leo.getName() != "leo" ||
      flo.getName() != "flo")
    {
      std::cout << "CRITICAL ERROR ON DEFAULT VALUES" << std::endl;
      return (-1);
    }
  if (johann.getLvl() != 56 ||
      johann.getPv() != 100 ||
      johann.getPower() != 100 ||
      johann.getName() != "johann" ||
      raph.getName() != "raph")
    {
      std::cout << "CRITICAL ERROR ON DEFAULT VALUES" << std::endl;
      return (-1);
    }
  flo.TakeDamage(leo.CloseAttack());
  flo.Range = Character::RANGE;
  leo.TakeDamage(flo.RangeAttack());

  flo.Heal();
  leo.Range = Character::RANGE;
  flo.TakeDamage(leo.RangeAttack());

  flo.Range = Character::CLOSE;
  leo.TakeDamage(flo.CloseAttack());
  leo.TakeDamage(flo.CloseAttack());

  leo.Heal();

  flo.RestorePower();

  leo.RestorePower();
  leo.RestorePower();
  leo.RestorePower();

  std::cout << leo.getName() << " is being a boss thanks to his food!" << std::endl;

  leo.Range = Character::CLOSE;
  flo.TakeDamage(leo.CloseAttack() * 6);
  if (flo.getPv() > 0)
    std::cout << "CRITICAL ERROR : FLO IS SUPPOSED TO BE DEAD!!" << std::endl;
  flo.TakeDamage(1);

  johann.TakeDamage(leo.CloseAttack());
  raph.Range = Character::RANGE;
  leo.TakeDamage(raph.RangeAttack());
  johann.TakeDamage(raph.RangeAttack());
  johann.TakeDamage(raph.CloseAttack());
  std::cout << leo.getName() << " Life remaining : " << leo.getPv() << std::endl;
  std::cout << leo.getName() << " Power remaining : " << leo.getPower() << std::endl;
  std::cout << johann.getName() << " Life remaining : " << johann.getPv() << std::endl;
  std::cout << johann.getName() << " Power remaining : " << johann.getPower() << std::endl;
  std::cout << raph.getName() << " Life remaining : " << raph.getPv() << std::endl;
  std::cout << raph.getName() << " Power remaining : " << raph.getPower() << std::endl;
  johann.Heal();
  std::cout << johann.getName() << " Life remaining : " << johann.getPv() << std::endl;
  johann.TakeDamage(raph.CloseAttack());
  johann.TakeDamage(raph.CloseAttack());
  johann.TakeDamage(raph.CloseAttack());
  raph.RestorePower();
  johann.TakeDamage(raph.CloseAttack());
  johann.TakeDamage(raph.CloseAttack());
}
