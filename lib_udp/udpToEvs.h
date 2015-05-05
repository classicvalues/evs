#pragma once
#include <stdio.h>

#ifdef __cplusplus
extern "C"{
#endif
	int getCurrentMilliseconds();
	int udpRecvBind(int port);
	void udpDataWriteToFile(FILE* fout);
	void udpToEvs(FILE* fout);
	void udpClose();
#ifdef __cplusplus
}
#endif