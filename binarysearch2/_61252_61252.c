/* TODO: since LDCAD's -height and +height co-ords are inverted, we need to take any table
entry from above which matches the users input an then invert it before writing the output file. */

/* TODO: since LDCAD writes file output lines in a LIFO manner, but that is confusing to read, I'm writing
the output in a FIFO DS. */

Rule _61252_61252[] = 
{               //always put color 2 first and then color 4.
	{1  , "61252 P1<2> c1 = 61252 P2<4> s1; //collision" , "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 61252.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 61252.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_61252_61252/1/_61252_61252.ldr\*/}, 
	{2  , "61252 P1<2> s1 = 61252 P2<4> c1; //collision" , "1 2 0  8 0 1 0 0 0 1 0 0 0 1 61252.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
                                                           "1 4 0  0 0 1 0 0 0 1 0 0 0 1 61252.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_61252_61252/2/_61252_61252.ldr\*/}, 
	{3  , "61252 P2<2> c1 = 61252 P1<4> s1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 61252.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
                                                           "1 2 0 -8 0 1 0 0 0 1 0 0 0 1 61252.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_61252_61252/3/_61252_61252.ldr\*/}, 
	{4  , "61252 P2<2> s1 = 61252 P1<4> c1; //collision" , "1 4 0  0 0 1 0 0 0 1 0 0 0 1 61252.dat\n"\   //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
                                                           "1 2 0  8 0 1 0 0 0 1 0 0 0 1 61252.dat\n"    //file:///C:/Users/kris/Desktop/ldcad/ldraw/parts/61252.dat
	                  /*file:///C:/Users/kris/Desktop/binarysearch2/_61252_61252/4/_61252_61252.ldr\*/},
};