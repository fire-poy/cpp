#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>

class Integer {

public:

	Integer(int const n);
	~Integer(void);

	int			getValue(void) const;

	Integer &	operator=(Integer const & rhs);//right on side lhs == left on side
	Integer		operator+(Integer const & rhs) const;

private:

	int		_n;
};

//surcharche de fontion pas membre parce que ostream c'est une classe code par un autre developpeur
std::ostream &	operator<<(std::ostream & o, Integer const & rhs);

#endif


    
