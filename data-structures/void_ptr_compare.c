/*
	Copyright 2015 Robert Elder Software Inc.  All rights reserved.

	This software is not currently available under any license, and unauthorized use
	or copying is not permitted.

	This software will likely be available under a common open source license in the
	near future.  Licensing is currently pending feedback from a lawyer.  If you have
	an opinion on this subject you can send it to recc [at] robertelder.org.

	This program comes with ABSOLUTELY NO WARRANTY.  In no event shall Robert Elder
	Software Inc. be liable for incidental or consequential damages in connection with
	use of this software.
*/
#ifndef __void_ptr_compare__H__DEFINED__
#include "void_ptr_compare.h"
#endif

int void_ptr_compare(void * a, void * b){
	if(a < b){
		return -1;
	}else if(a > b){
		return 1;
	}else{
		return 0;
	}
}
