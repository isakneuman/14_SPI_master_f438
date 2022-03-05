#ifndef SYSCONFIG_H_
#define SYSCONFIG_H_

//	#define	SYS_FREQ168		168
//	#define	SYS_FREQ84		84
//	#define	SYS_FREQ72		72
	#define	SYS_FREQ16		16
//	#define	SYS_FREQ160		160


	#ifdef	SYS_FREQ168
		#define	SYS_FREQ	168000000
	#elif	SYS_FREQ160
		#define	SYS_FREQ	160000000
		#define	APB2_FREQ	80000000
	#elif	SYS_FREQ84
		#define	SYS_FREQ	84000000
	#elif	SYS_FREQ72
		#define	SYS_FREQ	72000000
	#elif	SYS_FREQ16
		#define	SYS_FREQ	16000000
		#define	APB2_FREQ	SYS_FREQ
		#define	APB1_FREQ	SYS_FREQ
	#endif

	#define	uS_CALC(SYS_FREQ)	((SYS_FREQ)/1000000)-1
	#define	mS_CALC(SYS_FREQ)	((SYS_FREQ)/1000)-1

#endif /* SYSCONFIG_H_ */
