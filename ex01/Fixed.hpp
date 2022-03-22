#ifndef FIXED_HPP
    #define FIXED_HPP

    class Fixed{

        public:
        Fixed();
        Fixed(int const number);
        Fixed(float const number);
        Fixed(const Fixed& src);
        Fixed & operator=(Fixed const & rhs);
        ~Fixed( void );

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        
        private:
        
        int number;
        static int const nb_bits = 8;
    };
    
#endif