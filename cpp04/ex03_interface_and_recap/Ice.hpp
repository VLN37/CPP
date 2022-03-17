// Copyright (c) 2022 João Rodriguez A.K.A. VLN37. All rights reserved.

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

public:
  Ice(void);
  Ice(Ice const& src);
  ~Ice(void);

  Ice const& operator=(Ice const& rhs);

  AMateria* clone(void) const;
  void use(const ICharacter& target);
};

#endif
