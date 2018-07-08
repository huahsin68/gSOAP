#include <iostream>

#include "HuahsinServiceBindingPort.nsmap"
#include "soapHuahsinServiceBindingPortProxy.h"

using namespace std;

int main()
{
    HuahsinServiceBindingPortProxy proxy;
    proxy.soap_endpoint = "http://localhost:8080/services/hello?wsdl";

    struct soap s;
    ns1__RequestType *req = soap_new_req_ns1__RequestType(&s, "ho");
    ns1__ResponseType resp;
    
    if( proxy.helloworld(req, resp) == SOAP_OK ) {
        cout << resp.greeting << endl;
        cout << resp.version << endl;
    }
    else
        proxy.soap_stream_fault(cerr);

    proxy.destroy();
    return 0;
}