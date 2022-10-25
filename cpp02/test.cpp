
	a = Fixed(-5.7f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-5);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-5.3456197865422110f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(-6.3456f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	a = Fixed(3.5f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	a = Fixed(3.25f);
	std::cout << "a is " << a << std::endl;
	a = Fixed(3.75f);
	std::cout << "a is " << a << std::endl;
	a = Fixed(0.00346486f);
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	std::cout << "round" << roundf(-6.34f) << std::endl;
