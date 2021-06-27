/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPC_H_RPCGEN
#define _RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct input {
	int pass;
	char *command;
};
typedef struct input input;

struct output {
	char *result;
};
typedef struct output output;

#define EXECUTE 10
#define EXECUTE_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define RUN 1
extern  output * run_1(input *, CLIENT *);
extern  output * run_1_svc(input *, struct svc_req *);
extern int execute_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define RUN 1
extern  output * run_1();
extern  output * run_1_svc();
extern int execute_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_input (XDR *, input*);
extern  bool_t xdr_output (XDR *, output*);

#else /* K&R C */
extern bool_t xdr_input ();
extern bool_t xdr_output ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RPC_H_RPCGEN */
