#ifndef PORT_ENUMERATOR_H
#define PORT_ENUMERATOR_H

#include "port.h"

// PortEnumerator is a special class that generates ports dynamically. 
// PortEnumerator is useful for things like TCP Listener where multiple clients
// need to be connected to the switch and the corresponding Port for a client 
// can't be generated until the client is connected.
class PortEnumerator {
public:
    // Start: start the enumerator
    virtual bool Start() = 0;

    // Stop: stop the enumerator
    virtual bool Stop() = 0;

    // GetPort: get a port. Block if no new port avaliable.
    virtual Port* GetPort(void) = 0;

    // GetName: get the name of enumerator
    virtual const char* GetName(void) = 0;

    virtual ~PortEnumerator() {};
};

#endif // PORT_ENUMERATOR_H