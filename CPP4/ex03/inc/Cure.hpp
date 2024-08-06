/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deordone <deordone@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:45:10 by deordone          #+#    #+#             */
/*   Updated: 2024/08/06 15:18:42 by deordone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
        protected:
                std::string _type;
        public:
                AMateria( std::string const &type );
                AMateria( const AMateria &obj );
                AMateria &operator=( const AMateria &obj );
                virtual ~AMateria();

                virtual std::string const &getType() const;
                virtual AMateria *clone() const = 0;
                virtual void use(ICharacter &target);
};

class Ice : public AMateria
{
        private:
                std::string _type;
        public:
                Ice();
                Ice( const Ice &obj );
                Ice &operator=( const Ice &obj );
                ~Ice();

                std::string const &getType() const;
                Ice *clone() const;
                void use(ICharacter &target);
};

class Cure : public AMateria
{
        private:
                std::string _type;
        public:
                Cure();
                Cure( const Cure &obj );
                Cure &operator=( const Cure &obj );
                ~Cure();

                std::string const &getType() const;
                Cure *clone() const;
                void use(ICharacter &target);
};

#endif /* AMATERIA_HPP */ 
