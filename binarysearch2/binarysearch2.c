#include <stdio.h>          //file:///C:/users/kris/desktop/binarysearch2/mingw32/?/stdio.h
#include <string.h>         //file:///C:/users/kris/desktop/binarysearch2/mingw32/?/string.h
#include <stdlib.h>         //file:///C:/users/kris/desktop/binarysearch2/mingw32/?/stdlib.h
#include <time.h>           //file:///C:/users/kris/desktop/binarysearch2/mingw32/?/time.h
#include <unistd.h>         //file:///C:/users/kris/desktop/binarysearch2/mingw32/?/unistd.h
                               
// #include "_26047_26047.c"   //file:///C:/users/kris/desktop/binarysearch2/_26047_26047.c
// #include "_3024_3024.c"     //file:///C:/users/kris/desktop/binarysearch2/_3024_3024.c
// #include "_32607_32607.c"   //file:///C:/users/kris/desktop/binarysearch2/_32607_32607.c
// #include "_33291_33291.c"   //file:///C:/users/kris/desktop/binarysearch2/_33291_33291.c
// #include "_3614a_3614a.c"   //file:///C:/users/kris/desktop/binarysearch2/_3614a_3614a.c
// #include "_3661_3661.c"     //file:///C:/users/kris/desktop/binarysearch2/_3661_3661.c
// #include "_4085a_4085a.c"   //file:///C:/users/kris/desktop/binarysearch2/_4085a_4085a.c
// #include "_4085c_4085c.c"   //file:///C:/users/kris/desktop/binarysearch2/_4085c_4085c.c
// #include "_4085b_4085b.c"   //file:///C:/users/kris/desktop/binarysearch2/_4085b_4085b.c
// #include "_42688_42688.c"   //file:///C:/users/kris/desktop/binarysearch2/_42688_42688.c
// #include "_49668_49668.c"   //file:///C:/users/kris/desktop/binarysearch2/_49668_49668.c
// #include "_60897_60897.c"   //file:///C:/users/kris/desktop/binarysearch2/_60897_60897.c
// #include "_6141_6141.c"     //file:///C:/users/kris/desktop/binarysearch2/_6141_6141.c
// #include "_85861_85861.c"   //file:///C:/users/kris/desktop/binarysearch2/_85861_85861.c
// #include "_85861_85861.c"   //file:///C:/users/kris/desktop/binarysearch2/_85861_85861.c
// #include "_61252_61252.c"   //file:///C:/users/kris/desktop/binarysearch2/_61252_61252.c
// #include "_6019_6019.c"     //file:///C:/users/kris/desktop/binarysearch2/_6019_6019.c
// #include "_14081a_14081a.c" //file:///C:/users/kris/desktop/binarysearch2/_14081a_14081a.c
// #include "_14081b_14081b.c" //file:///C:/users/kris/desktop/binarysearch2/_14081b_14081b.c
// #include "_78257_78257.c"   //file:///C:/users/kris/desktop/binarysearch2/_78257_78257.c
                               
#include "token.c"          //file:///C:/users/kris/desktop/binarysearch2/token.c

//#define _countof(a) (sizeof(a)/sizeof(*(a)))

#define DoBenchmark

#ifdef DoBenchmark
  #define _Benchmark iCount=0; while ((abs(clock()-ttime)<CLOCKS_PER_SEC) && ++iCount)
#else
  #define _Benchmark 
#endif

typedef struct {
    int group;
    const char* rule;
    const char* ldraw_output;
} Rule;

const Rule* ruleIdx[_countof(rules)];

//comparator function for qsort
int CompareRules( const void* pA , const void* pB ) {
	return strcmp( (*((const Rule**)pA))->rule , (*((const Rule**)pB))->rule );
}
void InitRules() {
	//set ptrs for each rules element at initial index
	for (int N=0 ; N<_countof(ruleIdx) ; N++ ) { ruleIdx[N]	= &rules[N]; }		
	qsort( ruleIdx , _countof(ruleIdx) , sizeof(void*) , CompareRules );
	printf("%i rules\n",_countof(ruleIdx));
}
const Rule* FindRule( char* pzRule ) {
	int iBegin = 0 , iEnd = _countof(ruleIdx);
	while (iEnd >= iBegin) {
		//try item from middle
		int idx = (iBegin+iEnd)/2;			
		const char* pzEntry = ruleIdx[idx]->rule;
		int iResu = strcmp( pzRule , pzEntry );
		if (!iResu) { return ruleIdx[idx]; } //found
		if (iBegin == iEnd) { return NULL; } //NOT found
		//remove the wrong half of possibilities		
		if (iResu>0) { iBegin= idx+1; } else { iEnd = idx-1; }		
	}
	return NULL; //NOT found
} 

void NormalizeInput( char* pzInput ) {	
	char WasSpace=1, *pOut = pzInput, C;
	while ((C=*pzInput++)) {
		switch (C) {
		case ' ' : case '\t' : case '\r' : case '\n' : 
		  if (!WasSpace) { *pOut++ = ' '; }
			WasSpace=1; break;
		default: 
		  *pOut++ = C; WasSpace=0;
		}
	}
	while (pOut[-1]==' ') { pOut--; }
	*pOut = '\0';	
}

int main() {

    InitRules();
    
    FILE *outputFile = fopen("output.ldr", "w"); // Open the file in write

    while (!feof(stdin)) {
        char userInput[100];

        printf("Enter a string (or 'exit' to quit): ");
        fgets(userInput, 100, stdin);
        userInput[strcspn(userInput, "\n")] = '\0';
				NormalizeInput( userInput );
				printf("'%s'\n",userInput);
				

        if (strcmp(userInput, "exit") == 0) {
            break;  // Exit the loop if the user types 'exit'
        }

				#ifdef DoBenchmark
				clock_t ttime = clock();
				long long iCount = 0;
				#endif				
				
				const Rule* pFound = NULL;									
				#if 1
					_Benchmark {
						pFound = FindRule( userInput );
					}
				#else
					_Benchmark {
						for (int N=0 ; N<_countof(rules) ; N++) {
							if (!strcmp(userInput , rules[N].rule)) {
								pFound = &rules[N]; break; 
							}							
						}						
					}
				#endif
				if (pFound) {
					printf("%s\n", pFound->ldraw_output);
					fprintf(outputFile, "%s\n\n", pFound->ldraw_output);
					if ( _execl("LDCAD32.exe","ldcad32","C:\\users\\kris\\desktop\\binarysearch2\\output.ldr",NULL) == -1) {
						perror("_exec");
						exit(EXIT_FAILURE);
					}
				}
				else {
					printf("No match found.\n");
				}				
				
				#ifdef DoBenchmark
				printf("took %.05fms %lli/s\n",1000.0/iCount,iCount);
				#endif
				
    }

    fclose(outputFile); // Close the file

    return 0;
		
}