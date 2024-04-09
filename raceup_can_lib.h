#pragma once

typedef struct raceup_can raceup_can;

unsigned char raceup_can_init(const unsigned char rx, const unsigned char tx,raceup_can** out_can);
unsigned char raceup_can_filter_id(raceup_can* can_obj, const unsigned char* id_list, const unsigned char id_list_size);
unsigned char raceup_can_send(const raceup_can* can_obj, const unsigned char ID, const unsigned char* buffer, const unsigned int  buffer_size);
unsigned char raceup_can_recv(const raceup_can* can_obj, void** buffer, const unsigned int  buffer_size);
unsigned int raceup_can_sizeof(const raceup_can* can_obj);
