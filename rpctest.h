/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RPCTEST_H_RPCGEN
#define _RPCTEST_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


struct operands {
	int x;
	int y;
};
typedef struct operands operands;
#ifdef __cplusplus
extern "C" bool_t xdr_operands(XDR *, operands*);
#elif __STDC__
extern  bool_t xdr_operands(XDR *, operands*);
#else /* Old Style C */
bool_t xdr_operands();
#endif /* Old Style C */


#define SIM_PROG ((rpc_uint)0x23456789)
#define SIMP_VERSION ((rpc_uint)1)

#ifdef __cplusplus
#define ADD ((rpc_uint)1)
extern "C" int * add_1(operands *, CLIENT *);
extern "C" int * add_1_svc(operands *, struct svc_req *);
#define SUB ((rpc_uint)2)
extern "C" int * sub_1(operands *, CLIENT *);
extern "C" int * sub_1_svc(operands *, struct svc_req *);

#elif __STDC__
#define ADD ((rpc_uint)1)
extern  int * add_1(operands *, CLIENT *);
extern  int * add_1_svc(operands *, struct svc_req *);
#define SUB ((rpc_uint)2)
extern  int * sub_1(operands *, CLIENT *);
extern  int * sub_1_svc(operands *, struct svc_req *);

#else /* Old Style C */
#define ADD ((rpc_uint)1)
extern  int * add_1();
extern  int * add_1_svc();
#define SUB ((rpc_uint)2)
extern  int * sub_1();
extern  int * sub_1_svc();
#endif /* Old Style C */

#endif /* !_RPCTEST_H_RPCGEN */
