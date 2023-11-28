/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _3661_3661[] = 
{               //always put color 2 first and then color 4.
	{1  , "3661 P1<2> c1 = 3661 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 3661.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 3661.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_3661_3661/1/_3661_3661.ldr\*/}, 
	{2  , "3661 P1<2> s1 = 3661 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 3661.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 3661.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_3661_3661/2/_3661_3661.ldr\*/}, 
	{3  , "3661 P2<2> c1 = 3661 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 3661.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 3661.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_3661_3661/3/_3661_3661.ldr\*/}, 
	{4  , "3661 P2<2> s1 = 3661 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 3661.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 3661.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/3661.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_3661_3661/4/_3661_3661.ldr\*/},
};