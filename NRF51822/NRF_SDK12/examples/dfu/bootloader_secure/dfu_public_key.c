
/* This file was automatically generated by nrfutil on 2016-10-04 (YY-MM-DD) at 14:20:26 */

#include "stdint.h"
#include "compiler_abstraction.h"

/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) const uint8_t pk[64] =
{
    0x6e, 0x76, 0x24, 0x50, 0x38, 0xb6, 0xed, 0x60, 0xc3, 0x60, 0x12, 0x50, 0x00, 0xd2, 0x25, 0x0f, 0xee, 0x37, 0xbf, 0x00, 0x02, 0x6b, 0x50, 0x92, 0x80, 0x32, 0x42, 0x2e, 0xd6, 0x68, 0xde, 0xdf, 
    0x3b, 0xcf, 0xa4, 0x6a, 0x3e, 0x45, 0x9b, 0xb3, 0xb1, 0x3c, 0xa3, 0x39, 0xcc, 0x95, 0x58, 0x36, 0xcd, 0x6d, 0x7e, 0x1f, 0xa1, 0xab, 0x79, 0x05, 0x35, 0x2d, 0x2a, 0xda, 0x19, 0xdb, 0x88, 0xce
};

#else
#error "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
