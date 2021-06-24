#include "RPC.h"

output * run_1_svc(input *argp, struct svc_req *rqstp)
{
	static output  result;
	if(argp->pass != "1234") result.result = "Nope. Try Another password";
	else {
		char buffer[128];
		FILE* pipe = popen(argp->command.c_str(), "r");
		if (!pipe) {
			result->
			return resu"popen failed!";
		}

	while (!feof(pipe)) {
			if (fgets(buffer, 128, pipe) != NULL)
		 		result += buffer;
			}
			pclose(pipe);
	}
	return &result;
}
