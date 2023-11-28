/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _32607_32607[] = 
{               //always put color 2 first and then color 4.
	{1  , "32607 P1<2> c1 = 32607 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 32607.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 32607.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_32607_32607/1/_32607_32607.ldr\*/}, 
	{2  , "32607 P1<2> s1 = 32607 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 32607.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 32607.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_32607_32607/2/_32607_32607.ldr\*/}, 
	{3  , "32607 P2<2> c1 = 32607 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 32607.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 32607.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_32607_32607/3/_32607_32607.ldr\*/}, 
	{4  , "32607 P2<2> s1 = 32607 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 32607.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 32607.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/32607.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_32607_32607/4/_32607_32607.ldr\*/},
};