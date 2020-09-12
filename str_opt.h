#pragma once
#ifndef __STR_OPT
#define __STR_OPT

//#include <dir.h>
#include "\My\myVS\myHeader\maxval.h"

/*struct STR_OPT
{
   char File[3][MAXPATH],sMatA[10*MAX_LINE_LENGTH]
	 ,sCoeff[MAX_LINE_LENGTH],sMatR[10*MAX_LINE_LENGTH]
	   ,sMatEQ[MAX_LINE_LENGTH],sGamma[20],sAlpha[20];
   int M,N,coeffN,MaxIteration;
   bool  readIn,EFormat,minmaxtype,usealpha,userelax;
   double Eps;
};*/
struct STR_OPT
{
	char File[3][MAXPATH], sFn[MAX_LINE_LENGTH], sConstraints[10 * MAX_LINE_LENGTH]
		, sGuess[MAX_LINE_LENGTH], sGamma[20], sAlpha[20];
	int MaxIteration;
	bool  readIn, EFormat, minmaxtype, usealpha, userelax;
	double Eps;
};
#endif
