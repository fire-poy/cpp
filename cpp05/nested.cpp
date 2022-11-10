void test1()
{
	try
	{
		/* code */
		if (/*thre's un error */)
		{
			throw std::exception();
		}
		else
		{
			// Do some more stuff
		}
	}
	catch(const std::exception& e)
	{
		// Handle the error here
		std::cerr << e.what() << '\n';// methode definit dans la "std excepetion" qui va renvoyer un message decrivant ce qu'il s'est passe.
	}
}

void test2()
{
	/* code */
	if (/*thre's un error */)
	{
		throw std::exception();
	}
	else
	{
		// Do some more stuff
	}
}

void test3()
{
	try
	{
		test2();
	}
	catch(const std::exception& e)
	{
		// Handle the error here
		std::cerr << e.what() << '\n';
	}
}

void test4()
{
	class PEBKACExeption : public std:: exception
	{
		public
			virtual const char* what() const trow()//trow specifier, cette fonction peut trow qqqchs ou pas
			{
				return ("Problem exists between keyboard and chair");
			}
	};

	try
	{
		test3;
	}
	catch (PEBKACExeption &e)
	{
		//Handle the fact that the user is an idiot
	}
	catch(const std::exception& e)
	{
		//handle other exceptions that are like std::exception
		std::cerr << e.what() << '\n';
	}
}



	

	