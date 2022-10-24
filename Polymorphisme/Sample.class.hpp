#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample {

public:

	Sample(void);//canonical
	Sample(int const n);
	Sample(Sample const & src); //constructeur par copie
	~Sample(void);//canonical

	Sample &	operator=(Sample const & rhs);//canonical

	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const f) const;
	void	bar(Sample const & i) const;
	int		getFoo(void) const;

private:

	int	_foo;

};

std::ostream &	operator<<(std::ostream & o, Sample const &i);

#endif