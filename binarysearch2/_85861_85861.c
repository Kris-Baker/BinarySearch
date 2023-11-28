/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _85861_85861[] = 
{               //always put color 2 first and then color 4.
	{1  , "85861 P1<2> c1 = 85861 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 85861.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 85861.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_85861_85861/1/_85861_85861.ldr\*/}, 
	{2  , "85861 P1<2> s1 = 85861 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 85861.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 85861.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_85861_85861/2/_85861_85861.ldr\*/}, 
	{3  , "85861 P2<2> c1 = 85861 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 85861.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 85861.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_85861_85861/3/_85861_85861.ldr\*/}, 
	{4  , "85861 P2<2> s1 = 85861 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 85861.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 85861.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/85861.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_85861_85861/4/_85861_85861.ldr\*/},
};