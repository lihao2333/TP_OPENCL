#include"CL/opencl.h"
#include<algorithm>
#include<stdarg.h>
#include<stdio.h>
#include<unistd.h>
#include<AOCLUtils/aocl_utils.h>
using namespace aocl_utils;
void cleanup();
int main(){
	cl_uint status;
	cl_uint num;
	printf("%d\n",num);
	status = clGetPlatformIDs(0,NULL,&num);
	printf("%d\n",num);
	scoped_array<cl_platform_id> pids(num);

	return 0;
}
void cleanup(){
}
