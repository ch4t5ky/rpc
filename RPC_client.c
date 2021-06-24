#include "RPC.h"


void execute_1(char *host, input* input)
{
	CLIENT *clnt;
	output  *result;

	clnt = clnt_create (host, EXECUTE, EXECUTE_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	result = run_1(input, clnt);
	if (result == (output *) NULL) {
		clnt_perror (clnt, "call failed");
		exit(1);
	}

	printf("Result: %d\n", result->result);
	clnt_destroy (clnt);
}


int main(int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	execute_1(host);
exit (0);
}
