class Fixed{

    public:
    //defaut
    Fixed();
    //copie
    Fixed(const Fixed& src);
    //surchage operateur d'asignation
    Fixed & operator=(Fixed const & rhs);
    //destructeur
    ~Fixed( void );

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    private:
    
    int number;
    static int const nb_bits = 8;
};