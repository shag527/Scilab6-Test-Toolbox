// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Rupak Rokade
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include<stdio.h>
#include"localization.h"
#include"trans.h"

static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
    int i = 0;
	int in_row = 0;
	int in_col = 0;
    int size = 0;
	double* in_mat = NULL;
    double* out_mat = NULL;
  
    if (nin!=1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }
    if (scilab_isDouble(env, in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isEmpty(env, in[0]) == 1)
    {
        Scierror(999, _("%s: Wrong type for input argument(s): %d Double matrix expected.\n"), fname, 1);
        return 1;
    }

    size=scilab_getDim2d(env,in[0],&in_row,&in_col);
    scilab_getDoubleArray(env, in[0], &in_mat);

	out[0] = scilab_createDoubleMatrix2d(env, in_col, in_row,0);
   	scilab_getDoubleArray(env, out[0], &out_mat);
    transpose(in_mat,in_col,in_row);
    for(i=0;i<size;i++)
    out_mat[i]=in_mat[i];
    return 0;
}
}
