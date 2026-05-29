#ifndef PLUTO_H
#define PLUTO_H
void pluto_init();
void write_log();
void pluto_finalize();
void match_request(long);
void write_send(long);
void write_recv(long);
void match_req_null(long);
void write_cancel(long);
#endif // PMPI_TIMER_H
