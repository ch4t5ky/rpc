#include "RPC.h"


void execute_1(char *host, int pass, char* command)
{
	CLIENT *clnt;
	output  *result;
	input data;

	data.pass = pass;
	data.command = command;
	clnt = clnt_create (host, EXECUTE, EXECUTE_VERS, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}

	result = run_1(&data, clnt);
	if (result == (output *) NULL) {
		clnt_perror(clnt, "call failed");
		exit(1);
	}

	printf("Result: %s\n", result->result);
	clnt_destroy (clnt);
}


int main(int argc, char *argv[])
{
	char *host;
	host = argv[1];
	char command[255];
	int pass;
	printf("Enter password:");
	scanf("%d", &pass);
	printf("Enter command:");
	scanf("%s", command);
	execute_1(host, pass, command);
exit (0);
}
