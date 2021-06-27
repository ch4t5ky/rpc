#include "RPC.h"
#include <stdio.h>
#include <stdlib.h>
output* run_1_svc(input *argp, struct svc_req *rqstp)
{
	static output result;
	if(argp->pass != 1234 ) result.result = "Nope. Try Another password";
	else {
		int code;
		code = system(argp->command);
		if(code == 0) {
			result.result = "Command successfull executed";
		} else {
			result.result = "Failed";
		}
	}

	return &result;
}
