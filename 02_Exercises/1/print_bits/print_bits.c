#include <unistd.h>

void print_bits(unsigned char octet)
{
	int bit_position = 7;

	while (bit_position >= 0)
	{
		// Check if the bit at the current position is set
		if ((octet >> bit_position) & 1)
			write(1, "1", 1); // If the bit is set, write '1'
		else
			write(1, "0", 1); // If the bit is not set, write '0'
		bit_position--;
	}
}


// #include <unistd.h>

// void    print_bits(unsigned char octet)
// {
//    int i;

//    for (i = 7; i >= 0; i--)
//    {
//         if (octet & (1 << i))
//             write (1, "1", 1);
//         else
//             write (1, "0", 1);
//    }
// }