#ifndef BOYAA_LINUX_TIMER_H
#define BOYAA_LINUX_TIMER_H

#if defined(__cplusplus) 
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS }
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif


__BEGIN_DECLS

struct time_ev {
	unsigned long time_id; // modify by austin 2012/6/27 
	void* timer;
	void* ptr;
	void (*callback)(void* ptr);
};


void init_timer(void);
int  start_timer(int sec, int usec, struct time_ev* ev);
int  stop_timer(struct time_ev* ev);
void run_timer(void);

// add by austinch 2012/06/13

int remain_timer(struct time_ev* ev);

__END_DECLS

//#endif

#endif
