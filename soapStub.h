/* soapStub.h
   Generated by gSOAP 2.8.68 for hello.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include <vector>
#define SOAP_NAMESPACE_OF_ns1	"http://huahsin68.org/helloService"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20868
# error "GSOAP VERSION 20868 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class ns1__RequestType;	/* hello.h:148 */
class ns1__ResponseType;	/* hello.h:151 */
struct __ns1__helloworld;	/* hello.h:391 */

/* hello.h:148 */
#ifndef SOAP_TYPE_ns1__RequestType
#define SOAP_TYPE_ns1__RequestType (8)
/* complex XSD type 'ns1:RequestType': */
class SOAP_CMAC ns1__RequestType {
      public:
        /// Required element 'ns1:input' of XSD type 'xsd:string'
        std::string input;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns1__RequestType
        virtual long soap_type(void) const { return SOAP_TYPE_ns1__RequestType; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns1__RequestType, default initialized and not managed by a soap context
        virtual ns1__RequestType *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(ns1__RequestType); }
      public:
        /// Constructor with initializations
        ns1__RequestType() : input(), soap() { }
        virtual ~ns1__RequestType() { }
        /// Friend allocator used by soap_new_ns1__RequestType(struct soap*, int)
        friend SOAP_FMAC1 ns1__RequestType * SOAP_FMAC2 soap_instantiate_ns1__RequestType(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hello.h:151 */
#ifndef SOAP_TYPE_ns1__ResponseType
#define SOAP_TYPE_ns1__ResponseType (9)
/* complex XSD type 'ns1:ResponseType': */
class SOAP_CMAC ns1__ResponseType {
      public:
        /// Required element 'ns1:greeting' of XSD type 'xsd:string'
        std::string greeting;
        /// Required element 'ns1:version' of XSD type 'xsd:string'
        std::string version;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE_ns1__ResponseType
        virtual long soap_type(void) const { return SOAP_TYPE_ns1__ResponseType; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ns1__ResponseType, default initialized and not managed by a soap context
        virtual ns1__ResponseType *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(ns1__ResponseType); }
      public:
        /// Constructor with initializations
        ns1__ResponseType() : greeting(), version(), soap() { }
        virtual ~ns1__ResponseType() { }
        /// Friend allocator used by soap_new_ns1__ResponseType(struct soap*, int)
        friend SOAP_FMAC1 ns1__ResponseType * SOAP_FMAC2 soap_instantiate_ns1__ResponseType(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hello.h:391 */
#ifndef SOAP_TYPE___ns1__helloworld
#define SOAP_TYPE___ns1__helloworld (15)
/* Wrapper: */
struct SOAP_CMAC __ns1__helloworld {
      public:
        /** Optional element 'ns1:Request' of XSD type 'ns1:RequestType' */
        ns1__RequestType *ns1__Request;
      public:
        /** Return unique type id SOAP_TYPE___ns1__helloworld */
        long soap_type() const { return SOAP_TYPE___ns1__helloworld; }
        /** Constructor with member initializations */
        __ns1__helloworld() : ns1__Request() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __ns1__helloworld * SOAP_FMAC2 soap_instantiate___ns1__helloworld(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* hello.h:458 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (16)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hello.h:458 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (17)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hello.h:458 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (19)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hello.h:458 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (22)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* hello.h:458 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (23)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* std::string has binding name 'std__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (10)
#endif

/* ns1__ResponseType has binding name 'ns1__ResponseType' for type 'ns1:ResponseType' */
#ifndef SOAP_TYPE_ns1__ResponseType
#define SOAP_TYPE_ns1__ResponseType (9)
#endif

/* ns1__RequestType has binding name 'ns1__RequestType' for type 'ns1:RequestType' */
#ifndef SOAP_TYPE_ns1__RequestType
#define SOAP_TYPE_ns1__RequestType (8)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (23)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (22)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (19)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (17)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (16)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (25)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (24)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (18)
#endif

/* ns1__RequestType * has binding name 'PointerTons1__RequestType' for type 'ns1:RequestType' */
#ifndef SOAP_TYPE_PointerTons1__RequestType
#define SOAP_TYPE_PointerTons1__RequestType (12)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */