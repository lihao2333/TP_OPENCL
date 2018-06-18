g++ main.cpp \
	common/src/AOCLUtils/opencl.cpp common/src/AOCLUtils/options.cpp\
	`aocl compile-config` \
	-I/root/intelFPGA/17.1/hld/host/include \
	-Icommon/inc \
	`aocl link-config` \
	-O2 -fPIC
